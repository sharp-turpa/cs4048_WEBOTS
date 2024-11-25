// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from webots_ros2_msgs:msg/BoolStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "webots_ros2_msgs/msg/bool_stamped.hpp"


#ifndef WEBOTS_ROS2_MSGS__MSG__DETAIL__BOOL_STAMPED__STRUCT_HPP_
#define WEBOTS_ROS2_MSGS__MSG__DETAIL__BOOL_STAMPED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__webots_ros2_msgs__msg__BoolStamped __attribute__((deprecated))
#else
# define DEPRECATED__webots_ros2_msgs__msg__BoolStamped __declspec(deprecated)
#endif

namespace webots_ros2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BoolStamped_
{
  using Type = BoolStamped_<ContainerAllocator>;

  explicit BoolStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = false;
    }
  }

  explicit BoolStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _data_type =
    bool;
  _data_type data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__data(
    const bool & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    webots_ros2_msgs::msg::BoolStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const webots_ros2_msgs::msg::BoolStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<webots_ros2_msgs::msg::BoolStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<webots_ros2_msgs::msg::BoolStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      webots_ros2_msgs::msg::BoolStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<webots_ros2_msgs::msg::BoolStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      webots_ros2_msgs::msg::BoolStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<webots_ros2_msgs::msg::BoolStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<webots_ros2_msgs::msg::BoolStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<webots_ros2_msgs::msg::BoolStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__webots_ros2_msgs__msg__BoolStamped
    std::shared_ptr<webots_ros2_msgs::msg::BoolStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__webots_ros2_msgs__msg__BoolStamped
    std::shared_ptr<webots_ros2_msgs::msg::BoolStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoolStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoolStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoolStamped_

// alias to use template instance with default allocator
using BoolStamped =
  webots_ros2_msgs::msg::BoolStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace webots_ros2_msgs

#endif  // WEBOTS_ROS2_MSGS__MSG__DETAIL__BOOL_STAMPED__STRUCT_HPP_
