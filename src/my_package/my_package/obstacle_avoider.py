import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Range
from geometry_msgs.msg import Twist


MAX_RANGE = 0.15


class ObstacleAvoider(Node):
    def __init__(self, namespace=''):
        super().__init__(f'{namespace}_obstacle_avoider' if namespace else 'obstacle_avoider')

        self.__namespace = namespace.strip('/')
        left_sensor_topic = f'/{self.__namespace}/left_sensor' if self.__namespace else 'left_sensor'
        right_sensor_topic = f'/{self.__namespace}/right_sensor' if self.__namespace else 'right_sensor'
        cmd_vel_topic = f'/{self.__namespace}/cmd_vel' if self.__namespace else 'cmd_vel'

        self.__publisher = self.create_publisher(Twist, cmd_vel_topic, 1)

        self.create_subscription(Range, left_sensor_topic, self.__left_sensor_callback, 1)
        self.create_subscription(Range, right_sensor_topic, self.__right_sensor_callback, 1)

        self.__left_sensor_value = MAX_RANGE
        self.__right_sensor_value = MAX_RANGE

        self.get_logger().info(f'Subscribing to {left_sensor_topic} and {right_sensor_topic}')
        self.get_logger().info(f'Publishing to {cmd_vel_topic}')

    def __left_sensor_callback(self, message):
        self.__left_sensor_value = message.range

    def __right_sensor_callback(self, message):
        self.__right_sensor_value = message.range

        command_message = Twist()

        command_message.linear.x = 0.1

        if self.__left_sensor_value < 0.9 * MAX_RANGE or self.__right_sensor_value < 0.9 * MAX_RANGE:
            command_message.angular.z = -2.0

        self.__publisher.publish(command_message)


def main(args=None):
    rclpy.init(args=args)
    namespace = ''
    if args and len(args) > 1:
        namespace = args[1]

    avoider = ObstacleAvoider(namespace=namespace)
    rclpy.spin(avoider)
    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    avoider.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    import sys
    main(sys.argv)