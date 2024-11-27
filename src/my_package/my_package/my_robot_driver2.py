import rclpy
from geometry_msgs.msg import Twist, Point
import time
import math

HALF_DISTANCE_BETWEEN_WHEELS = 0.045
WHEEL_RADIUS = 0.025

class MyRobotDriver2:
    def init(self, webots_node, properties):
        self.__robot = webots_node.robot

        self.__left_motor = self.__robot.getDevice('left wheel motor')
        self.__right_motor = self.__robot.getDevice('right wheel motor')

        self.__left_motor.setPosition(float('inf'))
        self.__left_motor.setVelocity(0)

        self.__right_motor.setPosition(float('inf'))
        self.__right_motor.setVelocity(0)

        self.__gps = self.__robot.getDevice('gps1')
        self.__gps.enable(int(self.__robot.getBasicTimeStep()))

        self.__target_twist = Twist()
        self.__paused = False
        self.__resume_time = None

        rclpy.init(args=None)
        self.__node = rclpy.create_node('my_robot_driver2')
        self.__node.create_subscription(Twist, 'cmd_vel2', self.__cmd_vel_callback, 1)

        self.__gps_publisher = self.__node.create_publisher(Point, '/robot2/gps1', 10)
        self.__timer = self.__node.create_timer(1.0, self.publish_gps)

        self.__node.create_subscription(Point, '/robot1/collision', self.__collision_callback, 10)


    def __cmd_vel_callback(self, twist):
        if not self.__paused:
            self.__target_twist = twist


    def __calculate_distance(self, point1, point2):
        dx = point2.x - point1.x
        dy = point2.y - point1.y
        dz = point2.z - point1.z
        return math.sqrt(dx**2 + dy**2 + dz**2)


    def __collision_callback(self, point):
        self.__node.get_logger().info(f'RECEIVED GPS: {point}')
        self.__node.get_logger().info(f'DISTANCE: {self.__calculate_distance(self.__get_pos(), point)}')
        
        if self.__calculate_distance(self.__get_pos(), point) < 0.3:
            self.__paused = True
            self.__resume_time = self.__node.get_clock().now() + rclpy.time.Duration(seconds=5)

            spin_speed = 0.25  # Adjust as needed for desired spin speed max 0.25
            self.__left_motor.setVelocity(-spin_speed / WHEEL_RADIUS)
            self.__right_motor.setVelocity(spin_speed / WHEEL_RADIUS)


    def __get_pos(self):
        position = self.__gps.getValues()  
        msg = Point()
        msg.x = position[0]
        msg.y = position[1]
        msg.z = position[2]
        return msg


    def publish_gps(self):
        position = self.__gps.getValues()  
        msg = Point()
        msg.x = position[0]
        msg.y = position[1]
        msg.z = position[2]
        self.__gps_publisher.publish(msg)
        #self.__node.get_logger().info(f'Published ROBOT2 GPS Position: {msg}')

    def step(self):
        rclpy.spin_once(self.__node, timeout_sec=0)

        if self.__paused:
            if self.__node.get_clock().now() >= self.__resume_time:
                self.__paused = False
                self.__node.get_logger().info('Resuming normal operations.')


        if not self.__paused:
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

    driver = MyRobotDriver2()
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