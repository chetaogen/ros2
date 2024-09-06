// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arm_hand_interface:action/DexterousHand.idl
// generated code does not contain a copyright notice

#ifndef ARM_HAND_INTERFACE__ACTION__DETAIL__DEXTEROUS_HAND__BUILDER_HPP_
#define ARM_HAND_INTERFACE__ACTION__DETAIL__DEXTEROUS_HAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arm_hand_interface/action/detail/dexterous_hand__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arm_hand_interface
{

namespace action
{

namespace builder
{

class Init_DexterousHand_Goal_hand
{
public:
  explicit Init_DexterousHand_Goal_hand(::arm_hand_interface::action::DexterousHand_Goal & msg)
  : msg_(msg)
  {}
  ::arm_hand_interface::action::DexterousHand_Goal hand(::arm_hand_interface::action::DexterousHand_Goal::_hand_type arg)
  {
    msg_.hand = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arm_hand_interface::action::DexterousHand_Goal msg_;
};

class Init_DexterousHand_Goal_hand_no
{
public:
  Init_DexterousHand_Goal_hand_no()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DexterousHand_Goal_hand hand_no(::arm_hand_interface::action::DexterousHand_Goal::_hand_no_type arg)
  {
    msg_.hand_no = std::move(arg);
    return Init_DexterousHand_Goal_hand(msg_);
  }

private:
  ::arm_hand_interface::action::DexterousHand_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arm_hand_interface::action::DexterousHand_Goal>()
{
  return arm_hand_interface::action::builder::Init_DexterousHand_Goal_hand_no();
}

}  // namespace arm_hand_interface


namespace arm_hand_interface
{

namespace action
{

namespace builder
{

class Init_DexterousHand_Result_info
{
public:
  explicit Init_DexterousHand_Result_info(::arm_hand_interface::action::DexterousHand_Result & msg)
  : msg_(msg)
  {}
  ::arm_hand_interface::action::DexterousHand_Result info(::arm_hand_interface::action::DexterousHand_Result::_info_type arg)
  {
    msg_.info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arm_hand_interface::action::DexterousHand_Result msg_;
};

class Init_DexterousHand_Result_success
{
public:
  explicit Init_DexterousHand_Result_success(::arm_hand_interface::action::DexterousHand_Result & msg)
  : msg_(msg)
  {}
  Init_DexterousHand_Result_info success(::arm_hand_interface::action::DexterousHand_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_DexterousHand_Result_info(msg_);
  }

private:
  ::arm_hand_interface::action::DexterousHand_Result msg_;
};

class Init_DexterousHand_Result_hand_pose
{
public:
  explicit Init_DexterousHand_Result_hand_pose(::arm_hand_interface::action::DexterousHand_Result & msg)
  : msg_(msg)
  {}
  Init_DexterousHand_Result_success hand_pose(::arm_hand_interface::action::DexterousHand_Result::_hand_pose_type arg)
  {
    msg_.hand_pose = std::move(arg);
    return Init_DexterousHand_Result_success(msg_);
  }

private:
  ::arm_hand_interface::action::DexterousHand_Result msg_;
};

class Init_DexterousHand_Result_hand_no
{
public:
  Init_DexterousHand_Result_hand_no()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DexterousHand_Result_hand_pose hand_no(::arm_hand_interface::action::DexterousHand_Result::_hand_no_type arg)
  {
    msg_.hand_no = std::move(arg);
    return Init_DexterousHand_Result_hand_pose(msg_);
  }

private:
  ::arm_hand_interface::action::DexterousHand_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arm_hand_interface::action::DexterousHand_Result>()
{
  return arm_hand_interface::action::builder::Init_DexterousHand_Result_hand_no();
}

}  // namespace arm_hand_interface


namespace arm_hand_interface
{

namespace action
{

namespace builder
{

class Init_DexterousHand_Feedback_hand_pose
{
public:
  explicit Init_DexterousHand_Feedback_hand_pose(::arm_hand_interface::action::DexterousHand_Feedback & msg)
  : msg_(msg)
  {}
  ::arm_hand_interface::action::DexterousHand_Feedback hand_pose(::arm_hand_interface::action::DexterousHand_Feedback::_hand_pose_type arg)
  {
    msg_.hand_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arm_hand_interface::action::DexterousHand_Feedback msg_;
};

class Init_DexterousHand_Feedback_hand_no
{
public:
  Init_DexterousHand_Feedback_hand_no()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DexterousHand_Feedback_hand_pose hand_no(::arm_hand_interface::action::DexterousHand_Feedback::_hand_no_type arg)
  {
    msg_.hand_no = std::move(arg);
    return Init_DexterousHand_Feedback_hand_pose(msg_);
  }

private:
  ::arm_hand_interface::action::DexterousHand_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arm_hand_interface::action::DexterousHand_Feedback>()
{
  return arm_hand_interface::action::builder::Init_DexterousHand_Feedback_hand_no();
}

}  // namespace arm_hand_interface


namespace arm_hand_interface
{

namespace action
{

namespace builder
{

class Init_DexterousHand_SendGoal_Request_goal
{
public:
  explicit Init_DexterousHand_SendGoal_Request_goal(::arm_hand_interface::action::DexterousHand_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::arm_hand_interface::action::DexterousHand_SendGoal_Request goal(::arm_hand_interface::action::DexterousHand_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arm_hand_interface::action::DexterousHand_SendGoal_Request msg_;
};

class Init_DexterousHand_SendGoal_Request_goal_id
{
public:
  Init_DexterousHand_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DexterousHand_SendGoal_Request_goal goal_id(::arm_hand_interface::action::DexterousHand_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DexterousHand_SendGoal_Request_goal(msg_);
  }

private:
  ::arm_hand_interface::action::DexterousHand_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arm_hand_interface::action::DexterousHand_SendGoal_Request>()
{
  return arm_hand_interface::action::builder::Init_DexterousHand_SendGoal_Request_goal_id();
}

}  // namespace arm_hand_interface


namespace arm_hand_interface
{

namespace action
{

namespace builder
{

class Init_DexterousHand_SendGoal_Response_stamp
{
public:
  explicit Init_DexterousHand_SendGoal_Response_stamp(::arm_hand_interface::action::DexterousHand_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::arm_hand_interface::action::DexterousHand_SendGoal_Response stamp(::arm_hand_interface::action::DexterousHand_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arm_hand_interface::action::DexterousHand_SendGoal_Response msg_;
};

class Init_DexterousHand_SendGoal_Response_accepted
{
public:
  Init_DexterousHand_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DexterousHand_SendGoal_Response_stamp accepted(::arm_hand_interface::action::DexterousHand_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_DexterousHand_SendGoal_Response_stamp(msg_);
  }

private:
  ::arm_hand_interface::action::DexterousHand_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arm_hand_interface::action::DexterousHand_SendGoal_Response>()
{
  return arm_hand_interface::action::builder::Init_DexterousHand_SendGoal_Response_accepted();
}

}  // namespace arm_hand_interface


namespace arm_hand_interface
{

namespace action
{

namespace builder
{

class Init_DexterousHand_GetResult_Request_goal_id
{
public:
  Init_DexterousHand_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::arm_hand_interface::action::DexterousHand_GetResult_Request goal_id(::arm_hand_interface::action::DexterousHand_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arm_hand_interface::action::DexterousHand_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arm_hand_interface::action::DexterousHand_GetResult_Request>()
{
  return arm_hand_interface::action::builder::Init_DexterousHand_GetResult_Request_goal_id();
}

}  // namespace arm_hand_interface


namespace arm_hand_interface
{

namespace action
{

namespace builder
{

class Init_DexterousHand_GetResult_Response_result
{
public:
  explicit Init_DexterousHand_GetResult_Response_result(::arm_hand_interface::action::DexterousHand_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::arm_hand_interface::action::DexterousHand_GetResult_Response result(::arm_hand_interface::action::DexterousHand_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arm_hand_interface::action::DexterousHand_GetResult_Response msg_;
};

class Init_DexterousHand_GetResult_Response_status
{
public:
  Init_DexterousHand_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DexterousHand_GetResult_Response_result status(::arm_hand_interface::action::DexterousHand_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DexterousHand_GetResult_Response_result(msg_);
  }

private:
  ::arm_hand_interface::action::DexterousHand_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arm_hand_interface::action::DexterousHand_GetResult_Response>()
{
  return arm_hand_interface::action::builder::Init_DexterousHand_GetResult_Response_status();
}

}  // namespace arm_hand_interface


namespace arm_hand_interface
{

namespace action
{

namespace builder
{

class Init_DexterousHand_FeedbackMessage_feedback
{
public:
  explicit Init_DexterousHand_FeedbackMessage_feedback(::arm_hand_interface::action::DexterousHand_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::arm_hand_interface::action::DexterousHand_FeedbackMessage feedback(::arm_hand_interface::action::DexterousHand_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arm_hand_interface::action::DexterousHand_FeedbackMessage msg_;
};

class Init_DexterousHand_FeedbackMessage_goal_id
{
public:
  Init_DexterousHand_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DexterousHand_FeedbackMessage_feedback goal_id(::arm_hand_interface::action::DexterousHand_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DexterousHand_FeedbackMessage_feedback(msg_);
  }

private:
  ::arm_hand_interface::action::DexterousHand_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arm_hand_interface::action::DexterousHand_FeedbackMessage>()
{
  return arm_hand_interface::action::builder::Init_DexterousHand_FeedbackMessage_goal_id();
}

}  // namespace arm_hand_interface

#endif  // ARM_HAND_INTERFACE__ACTION__DETAIL__DEXTEROUS_HAND__BUILDER_HPP_
