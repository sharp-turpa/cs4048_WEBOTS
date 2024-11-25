import rclpy
from geometry_msgs.msg import Twist

HALF_DISTANCE_BETWEEN_WHEELS = 0.045
WHEEL_RADIUS = 0.025

class MyRobotDriver:
    def init(self, webots_node, properties):
        self.__robot = webots_node.robot

        self.__namespace = properties.get('namespace', '').strip('/')
        print(f"DEBUG: {properties}")
        print(f"DEBUG: {self.__namespace}")

        self.__left_motor = self.__robot.getDevice('left wheel motor')
        self.__right_motor = self.__robot.getDevice('right wheel motor')

        self.__left_motor.setPosition(float('inf'))
        self.__left_motor.setVelocity(0)

        self.__right_motor.setPosition(float('inf'))
        self.__right_motor.setVelocity(0)

        self.__target_twist = Twist()

        rclpy.init(args=None)

        self.__node = rclpy.create_node('robot_driver')
        namespace_param = self.__node.declare_parameter('namespace', '')
        self.__namespace = namespace_param.get_parameter_value().string_value.strip('/')

        node_name = f'{self.__namespace}_driver' if self.__namespace else 'my_robot_driver'
        self.__node.destroy_node()
        self.__node = rclpy.create_node(node_name)

        cmd_vel_topic = f'/{self.__namespace}/cmd_vel' if self.__namespace else 'cmd_vel'
        self.__node.create_subscription(Twist, cmd_vel_topic, self.__cmd_vel_callback, 1)

        self.__node.get_logger().info(f'Subscribed to {cmd_vel_topic}')
        self.__node.get_logger().info(f'PROPERTIES: {properties}')

    def __cmd_vel_callback(self, twist):
        self.__target_twist = twist

    def step(self):
        rclpy.spin_once(self.__node, timeout_sec=0)

        forward_speed = self.__target_twist.linear.x
        angular_speed = self.__target_twist.angular.z

        command_motor_left = (forward_speed - angular_speed * HALF_DISTANCE_BETWEEN_WHEELS) / WHEEL_RADIUS
        command_motor_right = (forward_speed + angular_speed * HALF_DISTANCE_BETWEEN_WHEELS) / WHEEL_RADIUS

        self.__left_motor.setVelocity(command_motor_left)
        self.__right_motor.setVelocity(command_motor_right)
