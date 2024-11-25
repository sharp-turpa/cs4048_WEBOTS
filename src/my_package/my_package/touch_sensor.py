from controller import Robot, TouchSensor, Motor
import time
import rclpy 
from rclpy.node import Node
from sensor_msgs.msg import Range


class TouchSensor(Node):
    def __init__(self):
        super().__init__('touch_sensor')
        self.robot = Robot()
        self.time_step = int(self.robot.getBasicTimeStep())

        self.touch_sensor = self.robot.getDevice('touch_sensor')
        self.touch_sensor.enable(self.time_step)

        self.timer = self.create_timer(0.1, self.check_touch_sensor)

    def check_touch_sensor(self):
        if self.robot.step(self.time_step) == -1:
            self.get_logger().info("Simulation ended")
            rclpy.shutdown()

        touch_value = self.touch_sensor.getValue()

        if touch_value > 0:
            self.get_logger().info("Bump Detected")

                
def main(args=None):
    rclpy.init(args=None)
    touch_sensor = TouchSensor()
    try:
        rclpy.spin(touch_sensor)
    except KeyboardInterrupt:
        pass
    finally:
        touch_sensor.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
