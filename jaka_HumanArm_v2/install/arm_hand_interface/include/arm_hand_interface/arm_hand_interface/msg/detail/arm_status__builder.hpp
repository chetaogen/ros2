// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arm_hand_interface:msg/ArmStatus.idl
// generated code does not contain a copyright notice

#ifndef ARM_HAND_INTERFACE__MSG__DETAIL__ARM_STATUS__BUILDER_HPP_
#define ARM_HAND_INTERFACE__MSG__DETAIL__ARM_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arm_hand_interface/msg/detail/arm_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arm_hand_interface
{

namespace msg
{

namespace builder
{

class Init_ArmStatus_hand_forces
{
public:
  explicit Init_ArmStatus_hand_forces(::arm_hand_interface::msg::ArmStatus & msg)
  : msg_(msg)
  {}
  ::arm_hand_interface::msg::ArmStatus hand_forces(::arm_hand_interface::msg::ArmStatus::_hand_forces_type arg)
  {
    msg_.hand_forces = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arm_hand_interface::msg::ArmStatus msg_;
};

class Init_ArmStatus_hand_angles
{
public:
  explicit Init_ArmStatus_hand_angles(::arm_hand_interface::msg::ArmStatus & msg)
  : msg_(msg)
  {}
  Init_ArmStatus_hand_forces hand_angles(::arm_hand_interface::msg::ArmStatus::_hand_angles_type arg)
  {
    msg_.hand_angles = std::move(arg);
    return Init_ArmStatus_hand_forces(msg_);
  }

private:
  ::arm_hand_interface::msg::ArmStatus msg_;
};

class Init_ArmStatus_arm_collision_status
{
public:
  explicit Init_ArmStatus_arm_collision_status(::arm_hand_interface::msg::ArmStatus & msg)
  : msg_(msg)
  {}
  Init_ArmStatus_hand_angles arm_collision_status(::arm_hand_interface::msg::ArmStatus::_arm_collision_status_type arg)
  {
    msg_.arm_collision_status = std::move(arg);
    return Init_ArmStatus_hand_angles(msg_);
  }

private:
  ::arm_hand_interface::msg::ArmStatus msg_;
};

class Init_ArmStatus_arm_motion_status
{
public:
  explicit Init_ArmStatus_arm_motion_status(::arm_hand_interface::msg::ArmStatus & msg)
  : msg_(msg)
  {}
  Init_ArmStatus_arm_collision_status arm_motion_status(::arm_hand_interface::msg::ArmStatus::_arm_motion_status_type arg)
  {
    msg_.arm_motion_status = std::move(arg);
    return Init_ArmStatus_arm_collision_status(msg_);
  }

private:
  ::arm_hand_interface::msg::ArmStatus msg_;
};

class Init_ArmStatus_arm_joint_angles
{
public:
  explicit Init_ArmStatus_arm_joint_angles(::arm_hand_interface::msg::ArmStatus & msg)
  : msg_(msg)
  {}
  Init_ArmStatus_arm_motion_status arm_joint_angles(::arm_hand_interface::msg::ArmStatus::_arm_joint_angles_type arg)
  {
    msg_.arm_joint_angles = std::move(arg);
    return Init_ArmStatus_arm_motion_status(msg_);
  }

private:
  ::arm_hand_interface::msg::ArmStatus msg_;
};

class Init_ArmStatus_arm_pose
{
public:
  explicit Init_ArmStatus_arm_pose(::arm_hand_interface::msg::ArmStatus & msg)
  : msg_(msg)
  {}
  Init_ArmStatus_arm_joint_angles arm_pose(::arm_hand_interface::msg::ArmStatus::_arm_pose_type arg)
  {
    msg_.arm_pose = std::move(arg);
    return Init_ArmStatus_arm_joint_angles(msg_);
  }

private:
  ::arm_hand_interface::msg::ArmStatus msg_;
};

class Init_ArmStatus_time
{
public:
  explicit Init_ArmStatus_time(::arm_hand_interface::msg::ArmStatus & msg)
  : msg_(msg)
  {}
  Init_ArmStatus_arm_pose time(::arm_hand_interface::msg::ArmStatus::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_ArmStatus_arm_pose(msg_);
  }

private:
  ::arm_hand_interface::msg::ArmStatus msg_;
};

class Init_ArmStatus_arm_no
{
public:
  Init_ArmStatus_arm_no()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmStatus_time arm_no(::arm_hand_interface::msg::ArmStatus::_arm_no_type arg)
  {
    msg_.arm_no = std::move(arg);
    return Init_ArmStatus_time(msg_);
  }

private:
  ::arm_hand_interface::msg::ArmStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::arm_hand_interface::msg::ArmStatus>()
{
  return arm_hand_interface::msg::builder::Init_ArmStatus_arm_no();
}

}  // namespace arm_hand_interface

#endif  // ARM_HAND_INTERFACE__MSG__DETAIL__ARM_STATUS__BUILDER_HPP_
