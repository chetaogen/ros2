// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arm_hand_interface:action/ArmVisionPlanning.idl
// generated code does not contain a copyright notice

#ifndef ARM_HAND_INTERFACE__ACTION__DETAIL__ARM_VISION_PLANNING__STRUCT_HPP_
#define ARM_HAND_INTERFACE__ACTION__DETAIL__ARM_VISION_PLANNING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'arm_target_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arm_hand_interface__action__ArmVisionPlanning_Goal __attribute__((deprecated))
#else
# define DEPRECATED__arm_hand_interface__action__ArmVisionPlanning_Goal __declspec(deprecated)
#endif

namespace arm_hand_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ArmVisionPlanning_Goal_
{
  using Type = ArmVisionPlanning_Goal_<ContainerAllocator>;

  explicit ArmVisionPlanning_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : arm_target_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arm_no = 0l;
    }
  }

  explicit ArmVisionPlanning_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : arm_target_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arm_no = 0l;
    }
  }

  // field types and members
  using _arm_no_type =
    int32_t;
  _arm_no_type arm_no;
  using _arm_target_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _arm_target_pose_type arm_target_pose;

  // setters for named parameter idiom
  Type & set__arm_no(
    const int32_t & _arg)
  {
    this->arm_no = _arg;
    return *this;
  }
  Type & set__arm_target_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->arm_target_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arm_hand_interface::action::ArmVisionPlanning_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const arm_hand_interface::action::ArmVisionPlanning_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arm_hand_interface::action::ArmVisionPlanning_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arm_hand_interface::action::ArmVisionPlanning_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arm_hand_interface::action::ArmVisionPlanning_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arm_hand_interface::action::ArmVisionPlanning_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arm_hand_interface::action::ArmVisionPlanning_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arm_hand_interface::action::ArmVisionPlanning_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arm_hand_interface::action::ArmVisionPlanning_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arm_hand_interface::action::ArmVisionPlanning_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arm_hand_interface__action__ArmVisionPlanning_Goal
    std::shared_ptr<arm_hand_interface::action::ArmVisionPlanning_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arm_hand_interface__action__ArmVisionPlanning_Goal
    std::shared_ptr<arm_hand_interface::action::ArmVisionPlanning_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmVisionPlanning_Goal_ & other) const
  {
    if (this->arm_no != other.arm_no) {
      return false;
    }
    if (this->arm_target_pose != other.arm_target_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmVisionPlanning_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmVisionPlanning_Goal_

// alias to use template instance with default allocator
using ArmVisionPlanning_Goal =
  arm_hand_interface::action::ArmVisionPlanning_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arm_hand_interface


// Include directives for member types
// Member 'arm_pose'
// already included above
// #include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arm_hand_interface__action__ArmVisionPlanning_Result __attribute__((deprecated))
#else
# define DEPRECATED__arm_hand_interface__action__ArmVisionPlanning_Result __declspec(deprecated)
#endif

namespace arm_hand_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ArmVisionPlanning_Result_
{
  using Type = ArmVisionPlanning_Result_<ContainerAllocator>;

  explicit ArmVisionPlanning_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : arm_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arm_no = 0l;
      this->time_from_start = 0.0f;
      this->success = false;
      this->info = "";
    }
  }

  explicit ArmVisionPlanning_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : arm_pose(_alloc, _init),
    info(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arm_no = 0l;
      this->time_from_start = 0.0f;
      this->success = false;
      this->info = "";
    }
  }

  // field types and members
  using _arm_no_type =
    int32_t;
  _arm_no_type arm_no;
  using _time_from_start_type =
    float;
  _time_from_start_type time_from_start;
  using _arm_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _arm_pose_type arm_pose;
  using _success_type =
    bool;
  _success_type success;
  using _info_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _info_type info;

  // setters for named parameter idiom
  Type & set__arm_no(
    const int32_t & _arg)
  {
    this->arm_no = _arg;
    return *this;
  }
  Type & set__time_from_start(
    const float & _arg)
  {
    this->time_from_start = _arg;
    return *this;
  }
  Type & set__arm_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->arm_pose = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__info(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arm_hand_interface::action::ArmVisionPlanning_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const arm_hand_interface::action::ArmVisionPlanning_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arm_hand_interface::action::ArmVisionPlanning_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arm_hand_interface::action::ArmVisionPlanning_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arm_hand_interface::action::ArmVisionPlanning_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arm_hand_interface::action::ArmVisionPlanning_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arm_hand_interface::action::ArmVisionPlanning_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arm_hand_interface::action::ArmVisionPlanning_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arm_hand_interface::action::ArmVisionPlanning_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arm_hand_interface::action::ArmVisionPlanning_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arm_hand_interface__action__ArmVisionPlanning_Result
    std::shared_ptr<arm_hand_interface::action::ArmVisionPlanning_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arm_hand_interface__action__ArmVisionPlanning_Result
    std::shared_ptr<arm_hand_interface::action::ArmVisionPlanning_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmVisionPlanning_Result_ & other) const
  {
    if (this->arm_no != other.arm_no) {
      return false;
    }
    if (this->time_from_start != other.time_from_start) {
      return false;
    }
    if (this->arm_pose != other.arm_pose) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->info != other.info) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmVisionPlanning_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmVisionPlanning_Result_

// alias to use template instance with default allocator
using ArmVisionPlanning_Result =
  arm_hand_interface::action::ArmVisionPlanning_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arm_hand_interface


// Include directives for member types
// Member 'arm_pose'
// already included above
// #include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arm_hand_interface__action__ArmVisionPlanning_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__arm_hand_interface__action__ArmVisionPlanning_Feedback __declspec(deprecated)
#endif

namespace arm_hand_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ArmVisionPlanning_Feedback_
{
  using Type = ArmVisionPlanning_Feedback_<ContainerAllocator>;

  explicit ArmVisionPlanning_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : arm_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arm_no = 0l;
      this->plan_success = false;
      this->time_from_start = 0.0f;
      std::fill<typename std::array<float, 6>::iterator, float>(this->arm_joint_angles.begin(), this->arm_joint_angles.end(), 0.0f);
    }
  }

  explicit ArmVisionPlanning_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : arm_pose(_alloc, _init),
    arm_joint_angles(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arm_no = 0l;
      this->plan_success = false;
      this->time_from_start = 0.0f;
      std::fill<typename std::array<float, 6>::iterator, float>(this->arm_joint_angles.begin(), this->arm_joint_angles.end(), 0.0f);
    }
  }

  // field types and members
  using _arm_no_type =
    int32_t;
  _arm_no_type arm_no;
  using _plan_success_type =
    bool;
  _plan_success_type plan_success;
  using _time_from_start_type =
    float;
  _time_from_start_type time_from_start;
  using _arm_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _arm_pose_type arm_pose;
  using _arm_joint_angles_type =
    std::array<float, 6>;
  _arm_joint_angles_type arm_joint_angles;

  // setters for named parameter idiom
  Type & set__arm_no(
    const int32_t & _arg)
  {
    this->arm_no = _arg;
    return *this;
  }
  Type & set__plan_success(
    const bool & _arg)
  {
    this->plan_success = _arg;
    return *this;
  }
  Type & set__time_from_start(
    const float & _arg)
  {
    this->time_from_start = _arg;
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

  // constant declarations

  // pointer types
  using RawPtr =
    arm_hand_interface::action::ArmVisionPlanning_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const arm_hand_interface::action::ArmVisionPlanning_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arm_hand_interface::action::ArmVisionPlanning_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arm_hand_interface::action::ArmVisionPlanning_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arm_hand_interface::action::ArmVisionPlanning_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arm_hand_interface::action::ArmVisionPlanning_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arm_hand_interface::action::ArmVisionPlanning_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arm_hand_interface::action::ArmVisionPlanning_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arm_hand_interface::action::ArmVisionPlanning_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arm_hand_interface::action::ArmVisionPlanning_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arm_hand_interface__action__ArmVisionPlanning_Feedback
    std::shared_ptr<arm_hand_interface::action::ArmVisionPlanning_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arm_hand_interface__action__ArmVisionPlanning_Feedback
    std::shared_ptr<arm_hand_interface::action::ArmVisionPlanning_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmVisionPlanning_Feedback_ & other) const
  {
    if (this->arm_no != other.arm_no) {
      return false;
    }
    if (this->plan_success != other.plan_success) {
      return false;
    }
    if (this->time_from_start != other.time_from_start) {
      return false;
    }
    if (this->arm_pose != other.arm_pose) {
      return false;
    }
    if (this->arm_joint_angles != other.arm_joint_angles) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmVisionPlanning_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmVisionPlanning_Feedback_

// alias to use template instance with default allocator
using ArmVisionPlanning_Feedback =
  arm_hand_interface::action::ArmVisionPlanning_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arm_hand_interface


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "arm_hand_interface/action/detail/arm_vision_planning__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arm_hand_interface__action__ArmVisionPlanning_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__arm_hand_interface__action__ArmVisionPlanning_SendGoal_Request __declspec(deprecated)
#endif

namespace arm_hand_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ArmVisionPlanning_SendGoal_Request_
{
  using Type = ArmVisionPlanning_SendGoal_Request_<ContainerAllocator>;

  explicit ArmVisionPlanning_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit ArmVisionPlanning_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    arm_hand_interface::action::ArmVisionPlanning_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const arm_hand_interface::action::ArmVisionPlanning_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arm_hand_interface::action::ArmVisionPlanning_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const arm_hand_interface::action::ArmVisionPlanning_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arm_hand_interface::action::ArmVisionPlanning_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arm_hand_interface::action::ArmVisionPlanning_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arm_hand_interface::action::ArmVisionPlanning_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arm_hand_interface::action::ArmVisionPlanning_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arm_hand_interface::action::ArmVisionPlanning_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arm_hand_interface::action::ArmVisionPlanning_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arm_hand_interface::action::ArmVisionPlanning_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arm_hand_interface::action::ArmVisionPlanning_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arm_hand_interface__action__ArmVisionPlanning_SendGoal_Request
    std::shared_ptr<arm_hand_interface::action::ArmVisionPlanning_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arm_hand_interface__action__ArmVisionPlanning_SendGoal_Request
    std::shared_ptr<arm_hand_interface::action::ArmVisionPlanning_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmVisionPlanning_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmVisionPlanning_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmVisionPlanning_SendGoal_Request_

// alias to use template instance with default allocator
using ArmVisionPlanning_SendGoal_Request =
  arm_hand_interface::action::ArmVisionPlanning_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arm_hand_interface


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arm_hand_interface__action__ArmVisionPlanning_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__arm_hand_interface__action__ArmVisionPlanning_SendGoal_Response __declspec(deprecated)
#endif

namespace arm_hand_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ArmVisionPlanning_SendGoal_Response_
{
  using Type = ArmVisionPlanning_SendGoal_Response_<ContainerAllocator>;

  explicit ArmVisionPlanning_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit ArmVisionPlanning_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arm_hand_interface::action::ArmVisionPlanning_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const arm_hand_interface::action::ArmVisionPlanning_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arm_hand_interface::action::ArmVisionPlanning_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arm_hand_interface::action::ArmVisionPlanning_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arm_hand_interface::action::ArmVisionPlanning_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arm_hand_interface::action::ArmVisionPlanning_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arm_hand_interface::action::ArmVisionPlanning_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arm_hand_interface::action::ArmVisionPlanning_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arm_hand_interface::action::ArmVisionPlanning_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arm_hand_interface::action::ArmVisionPlanning_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arm_hand_interface__action__ArmVisionPlanning_SendGoal_Response
    std::shared_ptr<arm_hand_interface::action::ArmVisionPlanning_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arm_hand_interface__action__ArmVisionPlanning_SendGoal_Response
    std::shared_ptr<arm_hand_interface::action::ArmVisionPlanning_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmVisionPlanning_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmVisionPlanning_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmVisionPlanning_SendGoal_Response_

// alias to use template instance with default allocator
using ArmVisionPlanning_SendGoal_Response =
  arm_hand_interface::action::ArmVisionPlanning_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arm_hand_interface

namespace arm_hand_interface
{

namespace action
{

struct ArmVisionPlanning_SendGoal
{
  using Request = arm_hand_interface::action::ArmVisionPlanning_SendGoal_Request;
  using Response = arm_hand_interface::action::ArmVisionPlanning_SendGoal_Response;
};

}  // namespace action

}  // namespace arm_hand_interface


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arm_hand_interface__action__ArmVisionPlanning_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__arm_hand_interface__action__ArmVisionPlanning_GetResult_Request __declspec(deprecated)
#endif

namespace arm_hand_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ArmVisionPlanning_GetResult_Request_
{
  using Type = ArmVisionPlanning_GetResult_Request_<ContainerAllocator>;

  explicit ArmVisionPlanning_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit ArmVisionPlanning_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arm_hand_interface::action::ArmVisionPlanning_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const arm_hand_interface::action::ArmVisionPlanning_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arm_hand_interface::action::ArmVisionPlanning_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arm_hand_interface::action::ArmVisionPlanning_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arm_hand_interface::action::ArmVisionPlanning_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arm_hand_interface::action::ArmVisionPlanning_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arm_hand_interface::action::ArmVisionPlanning_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arm_hand_interface::action::ArmVisionPlanning_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arm_hand_interface::action::ArmVisionPlanning_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arm_hand_interface::action::ArmVisionPlanning_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arm_hand_interface__action__ArmVisionPlanning_GetResult_Request
    std::shared_ptr<arm_hand_interface::action::ArmVisionPlanning_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arm_hand_interface__action__ArmVisionPlanning_GetResult_Request
    std::shared_ptr<arm_hand_interface::action::ArmVisionPlanning_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmVisionPlanning_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmVisionPlanning_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmVisionPlanning_GetResult_Request_

// alias to use template instance with default allocator
using ArmVisionPlanning_GetResult_Request =
  arm_hand_interface::action::ArmVisionPlanning_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arm_hand_interface


// Include directives for member types
// Member 'result'
// already included above
// #include "arm_hand_interface/action/detail/arm_vision_planning__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arm_hand_interface__action__ArmVisionPlanning_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__arm_hand_interface__action__ArmVisionPlanning_GetResult_Response __declspec(deprecated)
#endif

namespace arm_hand_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ArmVisionPlanning_GetResult_Response_
{
  using Type = ArmVisionPlanning_GetResult_Response_<ContainerAllocator>;

  explicit ArmVisionPlanning_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit ArmVisionPlanning_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    arm_hand_interface::action::ArmVisionPlanning_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const arm_hand_interface::action::ArmVisionPlanning_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arm_hand_interface::action::ArmVisionPlanning_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const arm_hand_interface::action::ArmVisionPlanning_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arm_hand_interface::action::ArmVisionPlanning_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arm_hand_interface::action::ArmVisionPlanning_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arm_hand_interface::action::ArmVisionPlanning_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arm_hand_interface::action::ArmVisionPlanning_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arm_hand_interface::action::ArmVisionPlanning_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arm_hand_interface::action::ArmVisionPlanning_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arm_hand_interface::action::ArmVisionPlanning_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arm_hand_interface::action::ArmVisionPlanning_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arm_hand_interface__action__ArmVisionPlanning_GetResult_Response
    std::shared_ptr<arm_hand_interface::action::ArmVisionPlanning_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arm_hand_interface__action__ArmVisionPlanning_GetResult_Response
    std::shared_ptr<arm_hand_interface::action::ArmVisionPlanning_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmVisionPlanning_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmVisionPlanning_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmVisionPlanning_GetResult_Response_

// alias to use template instance with default allocator
using ArmVisionPlanning_GetResult_Response =
  arm_hand_interface::action::ArmVisionPlanning_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arm_hand_interface

namespace arm_hand_interface
{

namespace action
{

struct ArmVisionPlanning_GetResult
{
  using Request = arm_hand_interface::action::ArmVisionPlanning_GetResult_Request;
  using Response = arm_hand_interface::action::ArmVisionPlanning_GetResult_Response;
};

}  // namespace action

}  // namespace arm_hand_interface


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "arm_hand_interface/action/detail/arm_vision_planning__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arm_hand_interface__action__ArmVisionPlanning_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__arm_hand_interface__action__ArmVisionPlanning_FeedbackMessage __declspec(deprecated)
#endif

namespace arm_hand_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ArmVisionPlanning_FeedbackMessage_
{
  using Type = ArmVisionPlanning_FeedbackMessage_<ContainerAllocator>;

  explicit ArmVisionPlanning_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit ArmVisionPlanning_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    arm_hand_interface::action::ArmVisionPlanning_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const arm_hand_interface::action::ArmVisionPlanning_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arm_hand_interface::action::ArmVisionPlanning_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const arm_hand_interface::action::ArmVisionPlanning_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arm_hand_interface::action::ArmVisionPlanning_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arm_hand_interface::action::ArmVisionPlanning_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arm_hand_interface::action::ArmVisionPlanning_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arm_hand_interface::action::ArmVisionPlanning_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arm_hand_interface::action::ArmVisionPlanning_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arm_hand_interface::action::ArmVisionPlanning_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arm_hand_interface::action::ArmVisionPlanning_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arm_hand_interface::action::ArmVisionPlanning_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arm_hand_interface__action__ArmVisionPlanning_FeedbackMessage
    std::shared_ptr<arm_hand_interface::action::ArmVisionPlanning_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arm_hand_interface__action__ArmVisionPlanning_FeedbackMessage
    std::shared_ptr<arm_hand_interface::action::ArmVisionPlanning_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmVisionPlanning_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmVisionPlanning_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmVisionPlanning_FeedbackMessage_

// alias to use template instance with default allocator
using ArmVisionPlanning_FeedbackMessage =
  arm_hand_interface::action::ArmVisionPlanning_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arm_hand_interface

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace arm_hand_interface
{

namespace action
{

struct ArmVisionPlanning
{
  /// The goal message defined in the action definition.
  using Goal = arm_hand_interface::action::ArmVisionPlanning_Goal;
  /// The result message defined in the action definition.
  using Result = arm_hand_interface::action::ArmVisionPlanning_Result;
  /// The feedback message defined in the action definition.
  using Feedback = arm_hand_interface::action::ArmVisionPlanning_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = arm_hand_interface::action::ArmVisionPlanning_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = arm_hand_interface::action::ArmVisionPlanning_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = arm_hand_interface::action::ArmVisionPlanning_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct ArmVisionPlanning ArmVisionPlanning;

}  // namespace action

}  // namespace arm_hand_interface

#endif  // ARM_HAND_INTERFACE__ACTION__DETAIL__ARM_VISION_PLANNING__STRUCT_HPP_
