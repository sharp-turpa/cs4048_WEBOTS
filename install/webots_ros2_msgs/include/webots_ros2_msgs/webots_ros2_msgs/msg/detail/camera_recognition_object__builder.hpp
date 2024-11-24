// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from webots_ros2_msgs:msg/CameraRecognitionObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "webots_ros2_msgs/msg/camera_recognition_object.hpp"


#ifndef WEBOTS_ROS2_MSGS__MSG__DETAIL__CAMERA_RECOGNITION_OBJECT__BUILDER_HPP_
#define WEBOTS_ROS2_MSGS__MSG__DETAIL__CAMERA_RECOGNITION_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "webots_ros2_msgs/msg/detail/camera_recognition_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace webots_ros2_msgs
{

namespace msg
{

namespace builder
{

class Init_CameraRecognitionObject_model
{
public:
  explicit Init_CameraRecognitionObject_model(::webots_ros2_msgs::msg::CameraRecognitionObject & msg)
  : msg_(msg)
  {}
  ::webots_ros2_msgs::msg::CameraRecognitionObject model(::webots_ros2_msgs::msg::CameraRecognitionObject::_model_type arg)
  {
    msg_.model = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_ros2_msgs::msg::CameraRecognitionObject msg_;
};

class Init_CameraRecognitionObject_colors
{
public:
  explicit Init_CameraRecognitionObject_colors(::webots_ros2_msgs::msg::CameraRecognitionObject & msg)
  : msg_(msg)
  {}
  Init_CameraRecognitionObject_model colors(::webots_ros2_msgs::msg::CameraRecognitionObject::_colors_type arg)
  {
    msg_.colors = std::move(arg);
    return Init_CameraRecognitionObject_model(msg_);
  }

private:
  ::webots_ros2_msgs::msg::CameraRecognitionObject msg_;
};

class Init_CameraRecognitionObject_bbox
{
public:
  explicit Init_CameraRecognitionObject_bbox(::webots_ros2_msgs::msg::CameraRecognitionObject & msg)
  : msg_(msg)
  {}
  Init_CameraRecognitionObject_colors bbox(::webots_ros2_msgs::msg::CameraRecognitionObject::_bbox_type arg)
  {
    msg_.bbox = std::move(arg);
    return Init_CameraRecognitionObject_colors(msg_);
  }

private:
  ::webots_ros2_msgs::msg::CameraRecognitionObject msg_;
};

class Init_CameraRecognitionObject_pose
{
public:
  explicit Init_CameraRecognitionObject_pose(::webots_ros2_msgs::msg::CameraRecognitionObject & msg)
  : msg_(msg)
  {}
  Init_CameraRecognitionObject_bbox pose(::webots_ros2_msgs::msg::CameraRecognitionObject::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_CameraRecognitionObject_bbox(msg_);
  }

private:
  ::webots_ros2_msgs::msg::CameraRecognitionObject msg_;
};

class Init_CameraRecognitionObject_id
{
public:
  Init_CameraRecognitionObject_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraRecognitionObject_pose id(::webots_ros2_msgs::msg::CameraRecognitionObject::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_CameraRecognitionObject_pose(msg_);
  }

private:
  ::webots_ros2_msgs::msg::CameraRecognitionObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_ros2_msgs::msg::CameraRecognitionObject>()
{
  return webots_ros2_msgs::msg::builder::Init_CameraRecognitionObject_id();
}

}  // namespace webots_ros2_msgs

#endif  // WEBOTS_ROS2_MSGS__MSG__DETAIL__CAMERA_RECOGNITION_OBJECT__BUILDER_HPP_
