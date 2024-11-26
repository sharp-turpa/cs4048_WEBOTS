import rclpy
from geometry_msgs.msg import Twist, Point

HALF_DISTANCE_BETWEEN_WHEELS = 0.045
WHEEL_RADIUS = 0.025

class MyRobotDriver:
    def init(self, webots_node, properties):
        self.__robot = webots_node.robot

        self.__left_motor = self.__robot.getDevice('left wheel motor')
        self.__right_motor = self.__robot.getDevice('right wheel motor')

        self.__left_motor.setPosition(float('inf'))
        self.__left_motor.setVelocity(0)

        self.__right_motor.setPosition(float('inf'))
        self.__right_motor.setVelocity(0)

        self.__touch_sensor = self.__robot.getDevice('touch')
        self.__touch_sensor.enable(int(self.__robot.getBasicTimeStep()))

        self.__gps = self.__robot.getDevice('gps0')
        self.__gps.enable(int(self.__robot.getBasicTimeStep()))

        self.__target_twist = Twist()

        rclpy.init(args=None)
        self.__node = rclpy.create_node('my_robot_driver')
        self.__node.create_subscription(Twist, 'cmd_vel1', self.__cmd_vel_callback, 1)


        self.__gps_publisher = self.__node.create_publisher(Point, '/robot1/gps0', 10)
        self.__timer = self.__node.create_timer(3.0, self.publish_gps)

    def __cmd_vel_callback(self, twist):
        self.__target_twist = twist

    def publish_gps(self):
        position = self.__gps.getValues()  
        msg = Point()
        msg.x = position[0]
        msg.y = position[1]
        msg.z = position[2]
        self.__gps_publisher.publish(msg)
        self.__node.get_logger().info(f'Published GPS Position: {msg}')

    def step(self):
        rclpy.spin_once(self.__node, timeout_sec=0)

        touch_value = float(self.__touch_sensor.getValue())

        if touch_value > 0.0:  
            self.__node.get_logger().info('Bump Detected')

        forward_speed = self.__target_twist.linear.x
        angular_speed = self.__target_twist.angular.z

        command_motor_left = (forward_speed - angular_speed * HALF_DISTANCE_BETWEEN_WHEELS) / WHEEL_RADIUS
        command_motor_right = (forward_speed + angular_speed * HALF_DISTANCE_BETWEEN_WHEELS) / WHEEL_RADIUS

        self.__left_motor.setVelocity(command_motor_left)
        self.__right_motor.setVelocity(command_motor_right)

def main():
    rclpy.init()
    webots_node = None
    properties = None   

    driver = MyRobotDriver()
    driver.init(webots_node, properties)
    try:
        while True:
            driver.step()
    except KeyboardInterrupt:
        pass
    finally:
        rclpy.shutdown()


if __name__ == "__main__":
    main()