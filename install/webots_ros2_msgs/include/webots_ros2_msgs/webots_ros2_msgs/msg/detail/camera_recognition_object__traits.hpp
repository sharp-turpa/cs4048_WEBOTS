// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from webots_ros2_msgs:msg/CameraRecognitionObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "webots_ros2_msgs/msg/camera_recognition_object.hpp"


#ifndef WEBOTS_ROS2_MSGS__MSG__DETAIL__CAMERA_RECOGNITION_OBJECT__TRAITS_HPP_
#define WEBOTS_ROS2_MSGS__MSG__DETAIL__CAMERA_RECOGNITION_OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "webots_ros2_msgs/msg/detail/camera_recognition_object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"
// Member 'bbox'
#include "vision_msgs/msg/detail/bounding_box2_d__traits.hpp"
// Member 'colors'
#include "std_msgs/msg/detail/color_rgba__traits.hpp"

namespace webots_ros2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CameraRecognitionObject & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: bbox
  {
    out << "bbox: ";
    to_flow_style_yaml(msg.bbox, out);
    out << ", ";
  }

  // member: colors
  {
    if (msg.colors.size() == 0) {
      out << "colors: []";
    } else {
      out << "colors: [";
      size_t pending_items = msg.colors.size();
      for (auto item : msg.colors) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: model
  {
    out << "model: ";
    rosidl_generator_traits::value_to_yaml(msg.model, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraRecognitionObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: bbox
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bbox:\n";
    to_block_style_yaml(msg.bbox, out, indentation + 2);
  }

  // member: colors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.colors.size() == 0) {
      out << "colors: []\n";
    } else {
      out << "colors:\n";
      for (auto item : msg.colors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model: ";
    rosidl_generator_traits::value_to_yaml(msg.model, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraRecognitionObject & msg, bool use_flow_style = false)
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
  const webots_ros2_msgs::msg::CameraRecognitionObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  webots_ros2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use webots_ros2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const webots_ros2_msgs::msg::CameraRecognitionObject & msg)
{
  return webots_ros2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<webots_ros2_msgs::msg::CameraRecognitionObject>()
{
  return "webots_ros2_msgs::msg::CameraRecognitionObject";
}

template<>
inline const char * name<webots_ros2_msgs::msg::CameraRecognitionObject>()
{
  return "webots_ros2_msgs/msg/CameraRecognitionObject";
}

template<>
struct has_fixed_size<webots_ros2_msgs::msg::CameraRecognitionObject>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<webots_ros2_msgs::msg::CameraRecognitionObject>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<webots_ros2_msgs::msg::CameraRecognitionObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WEBOTS_ROS2_MSGS__MSG__DETAIL__CAMERA_RECOGNITION_OBJECT__TRAITS_HPP_
