import rclpy
from geometry_msgs.msg import Twist, Point
from controller import Supervisor

HALF_DISTANCE_BETWEEN_WHEELS = 0.045
WHEEL_RADIUS = 0.025

class MyRobotDriver2:
    def init(self, webots_node, properties):
        self.__robot = webots_node.robot
        self.__supervisor = Supervisor()
        robot_node = self.__supervisor.getFromDef('my_robot_2')
        self.__left_motor = self.__robot.getDevice('left wheel motor')
        self.__right_motor = self.__robot.getDevice('right wheel motor')

        self.__left_motor.setPosition(float('inf'))
        self.__left_motor.setVelocity(0)

        self.__right_motor.setPosition(float('inf'))
        self.__right_motor.setVelocity(0)

        self.__target_twist = Twist()

        rclpy.init(args=None)
        self.__node = rclpy.create_node('my_robot_driver2')
        self.__node.create_subscription(Twist, 'cmd_vel2', self.__cmd_vel_callback, 1)
        self.__node.create_publisher(Point, 'robot2/position', self.__publish_position , 1)

    def __cmd_vel_callback(self, twist):
        self.__target_twist = twist

    def __publish_position(self):
        self.__node.get_logger().info('Publishing position')
        position = Point()
        position.x = self.__supervisor.getSelf().getPosition()[0]
        position.y = self.__supervisor.getSelf().getPosition()[1]
        position.z = self.__supervisor.getSelf().getPosition()[2]
        self.__publisher.publish(position)

    
    def step(self):
        rclpy.spin_once(self.__node, timeout_sec=0)

        forward_speed = self.__target_twist.linear.x
        angular_speed = self.__target_twist.angular.z

        command_motor_left = (forward_speed - angular_speed * HALF_DISTANCE_BETWEEN_WHEELS) / WHEEL_RADIUS
        command_motor_right = (forward_speed + angular_speed * HALF_DISTANCE_BETWEEN_WHEELS) / WHEEL_RADIUS

        trans_field = robot_node.getField('translation')
        while supervisor.step(self.__supervisor.getBasicTimeStep()) != -1:
            values = trans_field.getSFVec3f()
            self.__node.get_logger().info('Position: %f %f %f' % (values[0], values[1], values[2]))

        self.__left_motor.setVelocity(command_motor_left)
        self.__right_motor.setVelocity(command_motor_right)
