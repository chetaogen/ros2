// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arm_hand_interface:msg/ArmStatus.idl
// generated code does not contain a copyright notice

#ifndef ARM_HAND_INTERFACE__MSG__DETAIL__ARM_STATUS__STRUCT_HPP_
#define ARM_HAND_INTERFACE__MSG__DETAIL__ARM_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'arm_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arm_hand_interface__msg__ArmStatus __attribute__((deprecated))
#else
# define DEPRECATED__arm_hand_interface__msg__ArmStatus __declspec(deprecated)
#endif

namespace arm_hand_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmStatus_
{
  using Type = ArmStatus_<ContainerAllocator>;

  explicit ArmStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time(_init),
    arm_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arm_no = 0l;
      std::fill<typename std::array<float, 6>::iterator, float>(this->arm_joint_angles.begin(), this->arm_joint_angles.end(), 0.0f);
      this->arm_motion_status = 0l;
      this->arm_collision_status = false;
      std::fill<typename std::array<float, 6>::iterator, float>(this->hand_angles.begin(), this->hand_angles.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->hand_forces.begin(), this->hand_forces.end(), 0.0f);
    }
  }

  explicit ArmStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time(_alloc, _init),
    arm_pose(_alloc, _init),
    arm_joint_angles(_alloc),
    hand_angles(_alloc),
    hand_forces(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arm_no = 0l;
      std::fill<typename std::array<float, 6>::iterator, float>(this->arm_joint_angles.begin(), this->arm_joint_angles.end(), 0.0f);
      this->arm_motion_status = 0l;
      this->arm_collision_status = false;
      std::fill<typename std::array<float, 6>::iterator, float>(this->hand_angles.begin(), this->hand_angles.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->hand_forces.begin(), this->hand_forces.end(), 0.0f);
    }
  }

  // field types and members
  using _arm_no_type =
    int32_t;
  _arm_no_type arm_no;
  using _time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _time_type time;
  using _arm_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _arm_pose_type arm_pose;
  using _arm_joint_angles_type =
    std::array<float, 6>;
  _arm_joint_angles_type arm_joint_angles;
  using _arm_motion_status_type =
    int32_t;
  _arm_motion_status_type arm_motion_status;
  using _arm_collision_status_type =
    bool;
  _arm_collision_status_type arm_collision_status;
  using _hand_angles_type =
    std::array<float, 6>;
  _hand_angles_type hand_angles;
  using _hand_forces_type =
    std::array<float, 6>;
  _hand_forces_type hand_forces;

  // setters for named parameter idiom
  Type & set__arm_no(
    const int32_t & _arg)
  {
    this->arm_no = _arg;
    return *this;
  }
  Type & set__time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__arm_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->arm_pose = _arg;
    return *this;
  }
  Type & set__arm_joint_angles(
    const std::array<float, 6> & _arg)
  {
    this->arm_joint_angles = _arg;
    return *this;
  }
  Type & set__arm_motion_status(
    const int32_t & _arg)
  {
    this->arm_motion_status = _arg;
    return *this;
  }
  Type & set__arm_collision_status(
    const bool & _arg)
  {
    this->arm_collision_status = _arg;
    return *this;
  }
  Type & set__hand_angles(
    const std::array<float, 6> & _arg)
  {
    this->hand_angles = _arg;
    return *this;
  }
  Type & set__hand_forces(
    const std::array<float, 6> & _arg)
  {
    this->hand_forces = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arm_hand_interface::msg::ArmStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const arm_hand_interface::msg::ArmStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arm_hand_interface::msg::ArmStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arm_hand_interface::msg::ArmStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arm_hand_interface::msg::ArmStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arm_hand_interface::msg::ArmStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arm_hand_interface::msg::ArmStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arm_hand_interface::msg::ArmStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arm_hand_interface::msg::ArmStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arm_hand_interface::msg::ArmStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arm_hand_interface__msg__ArmStatus
    std::shared_ptr<arm_hand_interface::msg::ArmStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arm_hand_interface__msg__ArmStatus
    std::shared_ptr<arm_hand_interface::msg::ArmStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmStatus_ & other) const
  {
    if (this->arm_no != other.arm_no) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    if (this->arm_pose != other.arm_pose) {
      return false;
    }
    if (this->arm_joint_angles != other.arm_joint_angles) {
      return false;
    }
    if (this->arm_motion_status != other.arm_motion_status) {
      return false;
    }
    if (this->arm_collision_status != other.arm_collision_status) {
      return false;
    }
    if (this->hand_angles != other.hand_angles) {
      return false;
    }
    if (this->hand_forces != other.hand_forces) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmStatus_

// alias to use template instance with default allocator
using ArmStatus =
  arm_hand_interface::msg::ArmStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace arm_hand_interface

#endif  // ARM_HAND_INTERFACE__MSG__DETAIL__ARM_STATUS__STRUCT_HPP_
