import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Range
from geometry_msgs.msg import Twist, Point
import math


MAX_RANGE = 0.11


class ObstacleAvoider(Node):
    def __init__(self):
        super().__init__('obstacle_avoider')

        self.__publisher = self.create_publisher(Twist, 'cmd_vel1', 1)

        self.create_subscription(Range, 'left_sensor1', self.__left_sensor_callback, 1)
        self.create_subscription(Range, 'right_sensor1', self.__right_sensor_callback, 1)
        self.create_subscription(Point, '/robot1/collision', self.__obstacle_callback, 10)

        self.__left_sensor_value = MAX_RANGE
        self.__right_sensor_value = MAX_RANGE

        # State for obstacle handling
        self.state = 'idle'

    def __obstacle_callback(self, point):
        """
        Handles obstacle detection: stop, move backward, and turn.
        """
        if self.state != 'idle':  # Avoid processing multiple obstacle events simultaneously
            return

        self.get_logger().info(f"Obstacle detected at point: {point}")

        # Stop the robot
        self.__publish_command(0.0, 0.0)
        self.get_logger().info("Stopping the robot.")
        self.state = 'stopping'
        self.timer = self.create_timer(3.0, self.__move_backward)

    def __move_backward(self):
        if self.state != 'stopping':
            return

        # Move backward
        self.__publish_command(-0.1, 0.0)  # Negative speed for backward motion
        self.get_logger().info("Moving backward.")
        self.state = 'moving_backward'

        self.timer.cancel()
        self.timer = self.create_timer(2.0, self.__turn)

    def __turn(self):
        if self.state != 'moving_backward':
            return

        # Turn 15 degrees
        angular_speed = 0.5  # Adjust angular speed if needed
        turning_time = math.radians(45) / angular_speed  # Time required to turn 15 degrees
        self.__publish_command(0.0, angular_speed)
        self.get_logger().info("Turning 15 degrees.")
        self.state = 'turning'
        self.timer.cancel()
        self.timer = self.create_timer(turning_time, self.__stop)

    def __stop(self):
        if self.state != 'turning':
            return

        # Stop the robot
        self.__publish_command(0.0, 0.0)
        self.get_logger().info("Turn complete. Robot stopped.")
        self.state = 'idle'
        self.timer.cancel()

    def __left_sensor_callback(self, message):
        self.__left_sensor_value = message.range

    def __right_sensor_callback(self, message):
        self.__right_sensor_value = message.range

        # Avoid overriding obstacle avoidance behavior
        if self.state == 'idle':
            command_message = Twist()
            command_message.linear.x = 0.1
            #command_message.angular.z = 0

            #if self.__left_sensor_value < 0.9 * MAX_RANGE or self.__right_sensor_value < 0.9 * MAX_RANGE:
            #    command_message.angular.z = -2.0

            self.__publisher.publish(command_message)

    def __publish_command(self, linear_x, angular_z):
        command_message = Twist()
        command_message.linear.x = linear_x
        command_message.angular.z = angular_z
        self.__publisher.publish(command_message)


def main(args=None):
    rclpy.init(args=args)
    avoider = ObstacleAvoider()
    rclpy.spin(avoider)
    avoider.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
