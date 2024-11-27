from controller import Robot, TouchSensor

class FlagController:
    def __init__(self): 
        self.robot = Robot()
        self.time_step = int(self.robot.getBasicTimeStep())
    
        self.touch_sensor = self.robot.getDevice('flagtouch')
        self.touch_sensor.enable(self.time_step)

    def run(self):
        while self.robot.step(self.time_step) != -1:
            if self.touch_sensor.getValue() > 0:
                self.__node.get_logger().info('Flag touched!')


def main():
    controller = FlagController()
    controller.run()

if __name__ == '__main__':
    main()

    