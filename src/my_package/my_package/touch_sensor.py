from controller import Robot, TouchSensor, Motor
import time
import rclpy 
from rclpy.node import Node
from sensor_msgs.msg import Range


class TouchSensor(Node):
    def __init__(self):
        super().__init__('touch_sensor')
        self.time_step = int(self.robot.getBasicTimeStep())

        self.touch_sensor = self.robot.getDevice('touch_sensor')
        self.touch_sensor.enable(self.time_step)
        while self.robot.step(self.time_step) != -1:
            touch_value = self.touch_sensor.getValue()

            if touch_value > 0:  # Touch sensor value greater than 0 indicates contact
                self.__node.get_logger().info('Bump detected')
    
    def callback(self, message):
        self.__touch_sensor = message.range


                
def main(args=None):
    rclpy.init(args=None)
    touch_sensor = TouchSensor()
    rclpy.spin(touch_sensor)
    touch_sensor.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
