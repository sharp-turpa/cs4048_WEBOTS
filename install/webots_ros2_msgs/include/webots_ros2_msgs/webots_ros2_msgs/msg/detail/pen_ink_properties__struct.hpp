// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from webots_ros2_msgs:msg/PenInkProperties.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "webots_ros2_msgs/msg/pen_ink_properties.hpp"


#ifndef WEBOTS_ROS2_MSGS__MSG__DETAIL__PEN_INK_PROPERTIES__STRUCT_HPP_
#define WEBOTS_ROS2_MSGS__MSG__DETAIL__PEN_INK_PROPERTIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__webots_ros2_msgs__msg__PenInkProperties __attribute__((deprecated))
#else
# define DEPRECATED__webots_ros2_msgs__msg__PenInkProperties __declspec(deprecated)
#endif

namespace webots_ros2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PenInkProperties_
{
  using Type = PenInkProperties_<ContainerAllocator>;

  explicit PenInkProperties_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = 0l;
      this->density = 0.0f;
    }
  }

  explicit PenInkProperties_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = 0l;
      this->density = 0.0f;
    }
  }

  // field types and members
  using _color_type =
    int32_t;
  _color_type color;
  using _density_type =
    float;
  _density_type density;

  // setters for named parameter idiom
  Type & set__color(
    const int32_t & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__density(
    const float & _arg)
  {
    this->density = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    webots_ros2_msgs::msg::PenInkProperties_<ContainerAllocator> *;
  using ConstRawPtr =
    const webots_ros2_msgs::msg::PenInkProperties_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<webots_ros2_msgs::msg::PenInkProperties_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<webots_ros2_msgs::msg::PenInkProperties_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      webots_ros2_msgs::msg::PenInkProperties_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<webots_ros2_msgs::msg::PenInkProperties_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      webots_ros2_msgs::msg::PenInkProperties_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<webots_ros2_msgs::msg::PenInkProperties_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<webots_ros2_msgs::msg::PenInkProperties_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<webots_ros2_msgs::msg::PenInkProperties_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__webots_ros2_msgs__msg__PenInkProperties
    std::shared_ptr<webots_ros2_msgs::msg::PenInkProperties_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__webots_ros2_msgs__msg__PenInkProperties
    std::shared_ptr<webots_ros2_msgs::msg::PenInkProperties_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PenInkProperties_ & other) const
  {
    if (this->color != other.color) {
      return false;
    }
    if (this->density != other.density) {
      return false;
    }
    return true;
  }
  bool operator!=(const PenInkProperties_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PenInkProperties_

// alias to use template instance with default allocator
using PenInkProperties =
  webots_ros2_msgs::msg::PenInkProperties_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace webots_ros2_msgs

#endif  // WEBOTS_ROS2_MSGS__MSG__DETAIL__PEN_INK_PROPERTIES__STRUCT_HPP_
