// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from webots_ros2_msgs:msg/CameraRecognitionObjects.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "webots_ros2_msgs/msg/camera_recognition_objects.hpp"


#ifndef WEBOTS_ROS2_MSGS__MSG__DETAIL__CAMERA_RECOGNITION_OBJECTS__BUILDER_HPP_
#define WEBOTS_ROS2_MSGS__MSG__DETAIL__CAMERA_RECOGNITION_OBJECTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "webots_ros2_msgs/msg/detail/camera_recognition_objects__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace webots_ros2_msgs
{

namespace msg
{

namespace builder
{

class Init_CameraRecognitionObjects_objects
{
public:
  explicit Init_CameraRecognitionObjects_objects(::webots_ros2_msgs::msg::CameraRecognitionObjects & msg)
  : msg_(msg)
  {}
  ::webots_ros2_msgs::msg::CameraRecognitionObjects objects(::webots_ros2_msgs::msg::CameraRecognitionObjects::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_ros2_msgs::msg::CameraRecognitionObjects msg_;
};

class Init_CameraRecognitionObjects_header
{
public:
  Init_CameraRecognitionObjects_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraRecognitionObjects_objects header(::webots_ros2_msgs::msg::CameraRecognitionObjects::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CameraRecognitionObjects_objects(msg_);
  }

private:
  ::webots_ros2_msgs::msg::CameraRecognitionObjects msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_ros2_msgs::msg::CameraRecognitionObjects>()
{
  return webots_ros2_msgs::msg::builder::Init_CameraRecognitionObjects_header();
}

}  // namespace webots_ros2_msgs

#endif  // WEBOTS_ROS2_MSGS__MSG__DETAIL__CAMERA_RECOGNITION_OBJECTS__BUILDER_HPP_
