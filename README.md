# cs4048_WEBOTS
This is an initial sample of ros+WEBOTS with sample code from "https://docs.ros.org/en/jazzy/Tutorials/Advanced/Simulators/Webots/Setting-Up-Simulation-Webots-Basic.html"
# Setup
Clone this repository to your working directory and it's good to go. For example my layout is like

```
ros2_ws (my working directory)
  |-src (<)
    |-my_package (<)
      |-launch (<)
      |-worlds(<)
        |-my_world.wbt
      |-package.xml
      |-resource(<)
        |-my_robot.urdf
      |-my_package(<)
        |-my_robot_driver.py
      |-launch(<)
        |-robot_launch.py
      ...
    |-webots_ros2 (<)
      ...

```
1. **mypackage** All code work should be done here.
2. **webots_ros2** Includes all API components for ros2 and WEBOTS.
3. **worlds** The map's build file, which can be edited in webots. Tutorial address: https://cyberbotics.com/doc/guide/tutorial-2-modification-of-the-environment
4. **my_robot_driver.py** Main script for controlling the robot
5. **my_robot.urdf** urdf file for passing parameters to scripts
6. **robot_launch.py** Used to start the ROS node and also tell the script which bot to connect to in the worlds file

## How to run
1. Create a working directory, for example mine is ros_ws.
2. Clone the repo
3. Install WEBOTS https://cyberbotics.com/#download
4. Change you directory,using: `cd <your_working_space>/src`
5. source ros with `source /opt/ros/jazzy/setup.bash` then build and run `colcon build && source install/local_setup.bash && ros2 launch pyrobosim_ros demo_commands_multirobot.launch.py`


