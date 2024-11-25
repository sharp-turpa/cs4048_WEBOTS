// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from webots_ros2_msgs:msg/CameraRecognitionObjects.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "webots_ros2_msgs/msg/camera_recognition_objects.hpp"


#ifndef WEBOTS_ROS2_MSGS__MSG__DETAIL__CAMERA_RECOGNITION_OBJECTS__TRAITS_HPP_
#define WEBOTS_ROS2_MSGS__MSG__DETAIL__CAMERA_RECOGNITION_OBJECTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "webots_ros2_msgs/msg/detail/camera_recognition_objects__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'objects'
#include "webots_ros2_msgs/msg/detail/camera_recognition_object__traits.hpp"

namespace webots_ros2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CameraRecognitionObjects & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: objects
  {
    if (msg.objects.size() == 0) {
      out << "objects: []";
    } else {
      out << "objects: [";
      size_t pending_items = msg.objects.size();
      for (auto item : msg.objects) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraRecognitionObjects & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.objects.size() == 0) {
      out << "objects: []\n";
    } else {
      out << "objects:\n";
      for (auto item : msg.objects) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraRecognitionObjects & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace webots_ros2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use webots_ros2_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const webots_ros2_msgs::msg::CameraRecognitionObjects & msg,
  std::ostream & out, size_t indentation = 0)
{
  webots_ros2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use webots_ros2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const webots_ros2_msgs::msg::CameraRecognitionObjects & msg)
{
  return webots_ros2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<webots_ros2_msgs::msg::CameraRecognitionObjects>()
{
  return "webots_ros2_msgs::msg::CameraRecognitionObjects";
}

template<>
inline const char * name<webots_ros2_msgs::msg::CameraRecognitionObjects>()
{
  return "webots_ros2_msgs/msg/CameraRecognitionObjects";
}

template<>
struct has_fixed_size<webots_ros2_msgs::msg::CameraRecognitionObjects>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<webots_ros2_msgs::msg::CameraRecognitionObjects>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<webots_ros2_msgs::msg::CameraRecognitionObjects>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WEBOTS_ROS2_MSGS__MSG__DETAIL__CAMERA_RECOGNITION_OBJECTS__TRAITS_HPP_
