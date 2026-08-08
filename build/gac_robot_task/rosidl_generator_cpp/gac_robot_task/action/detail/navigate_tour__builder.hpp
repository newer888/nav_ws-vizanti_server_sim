// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gac_robot_task:action/NavigateTour.idl
// generated code does not contain a copyright notice

#ifndef GAC_ROBOT_TASK__ACTION__DETAIL__NAVIGATE_TOUR__BUILDER_HPP_
#define GAC_ROBOT_TASK__ACTION__DETAIL__NAVIGATE_TOUR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gac_robot_task/action/detail/navigate_tour__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gac_robot_task
{

namespace action
{

namespace builder
{

class Init_NavigateTour_Goal_task_id
{
public:
  Init_NavigateTour_Goal_task_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gac_robot_task::action::NavigateTour_Goal task_id(::gac_robot_task::action::NavigateTour_Goal::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gac_robot_task::action::NavigateTour_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::gac_robot_task::action::NavigateTour_Goal>()
{
  return gac_robot_task::action::builder::Init_NavigateTour_Goal_task_id();
}

}  // namespace gac_robot_task


namespace gac_robot_task
{

namespace action
{

namespace builder
{

class Init_NavigateTour_Result_completed_waypoints
{
public:
  explicit Init_NavigateTour_Result_completed_waypoints(::gac_robot_task::action::NavigateTour_Result & msg)
  : msg_(msg)
  {}
  ::gac_robot_task::action::NavigateTour_Result completed_waypoints(::gac_robot_task::action::NavigateTour_Result::_completed_waypoints_type arg)
  {
    msg_.completed_waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gac_robot_task::action::NavigateTour_Result msg_;
};

class Init_NavigateTour_Result_error_message
{
public:
  explicit Init_NavigateTour_Result_error_message(::gac_robot_task::action::NavigateTour_Result & msg)
  : msg_(msg)
  {}
  Init_NavigateTour_Result_completed_waypoints error_message(::gac_robot_task::action::NavigateTour_Result::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return Init_NavigateTour_Result_completed_waypoints(msg_);
  }

private:
  ::gac_robot_task::action::NavigateTour_Result msg_;
};

class Init_NavigateTour_Result_success
{
public:
  Init_NavigateTour_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateTour_Result_error_message success(::gac_robot_task::action::NavigateTour_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_NavigateTour_Result_error_message(msg_);
  }

private:
  ::gac_robot_task::action::NavigateTour_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::gac_robot_task::action::NavigateTour_Result>()
{
  return gac_robot_task::action::builder::Init_NavigateTour_Result_success();
}

}  // namespace gac_robot_task


namespace gac_robot_task
{

namespace action
{

namespace builder
{

class Init_NavigateTour_Feedback_progress_percentage
{
public:
  explicit Init_NavigateTour_Feedback_progress_percentage(::gac_robot_task::action::NavigateTour_Feedback & msg)
  : msg_(msg)
  {}
  ::gac_robot_task::action::NavigateTour_Feedback progress_percentage(::gac_robot_task::action::NavigateTour_Feedback::_progress_percentage_type arg)
  {
    msg_.progress_percentage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gac_robot_task::action::NavigateTour_Feedback msg_;
};

class Init_NavigateTour_Feedback_current_action
{
public:
  explicit Init_NavigateTour_Feedback_current_action(::gac_robot_task::action::NavigateTour_Feedback & msg)
  : msg_(msg)
  {}
  Init_NavigateTour_Feedback_progress_percentage current_action(::gac_robot_task::action::NavigateTour_Feedback::_current_action_type arg)
  {
    msg_.current_action = std::move(arg);
    return Init_NavigateTour_Feedback_progress_percentage(msg_);
  }

private:
  ::gac_robot_task::action::NavigateTour_Feedback msg_;
};

class Init_NavigateTour_Feedback_total_waypoints
{
public:
  explicit Init_NavigateTour_Feedback_total_waypoints(::gac_robot_task::action::NavigateTour_Feedback & msg)
  : msg_(msg)
  {}
  Init_NavigateTour_Feedback_current_action total_waypoints(::gac_robot_task::action::NavigateTour_Feedback::_total_waypoints_type arg)
  {
    msg_.total_waypoints = std::move(arg);
    return Init_NavigateTour_Feedback_current_action(msg_);
  }

private:
  ::gac_robot_task::action::NavigateTour_Feedback msg_;
};

class Init_NavigateTour_Feedback_current_waypoint_index
{
public:
  Init_NavigateTour_Feedback_current_waypoint_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateTour_Feedback_total_waypoints current_waypoint_index(::gac_robot_task::action::NavigateTour_Feedback::_current_waypoint_index_type arg)
  {
    msg_.current_waypoint_index = std::move(arg);
    return Init_NavigateTour_Feedback_total_waypoints(msg_);
  }

private:
  ::gac_robot_task::action::NavigateTour_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::gac_robot_task::action::NavigateTour_Feedback>()
{
  return gac_robot_task::action::builder::Init_NavigateTour_Feedback_current_waypoint_index();
}

}  // namespace gac_robot_task


namespace gac_robot_task
{

namespace action
{

namespace builder
{

class Init_NavigateTour_SendGoal_Request_goal
{
public:
  explicit Init_NavigateTour_SendGoal_Request_goal(::gac_robot_task::action::NavigateTour_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::gac_robot_task::action::NavigateTour_SendGoal_Request goal(::gac_robot_task::action::NavigateTour_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gac_robot_task::action::NavigateTour_SendGoal_Request msg_;
};

class Init_NavigateTour_SendGoal_Request_goal_id
{
public:
  Init_NavigateTour_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateTour_SendGoal_Request_goal goal_id(::gac_robot_task::action::NavigateTour_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_NavigateTour_SendGoal_Request_goal(msg_);
  }

private:
  ::gac_robot_task::action::NavigateTour_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::gac_robot_task::action::NavigateTour_SendGoal_Request>()
{
  return gac_robot_task::action::builder::Init_NavigateTour_SendGoal_Request_goal_id();
}

}  // namespace gac_robot_task


namespace gac_robot_task
{

namespace action
{

namespace builder
{

class Init_NavigateTour_SendGoal_Response_stamp
{
public:
  explicit Init_NavigateTour_SendGoal_Response_stamp(::gac_robot_task::action::NavigateTour_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::gac_robot_task::action::NavigateTour_SendGoal_Response stamp(::gac_robot_task::action::NavigateTour_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gac_robot_task::action::NavigateTour_SendGoal_Response msg_;
};

class Init_NavigateTour_SendGoal_Response_accepted
{
public:
  Init_NavigateTour_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateTour_SendGoal_Response_stamp accepted(::gac_robot_task::action::NavigateTour_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_NavigateTour_SendGoal_Response_stamp(msg_);
  }

private:
  ::gac_robot_task::action::NavigateTour_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::gac_robot_task::action::NavigateTour_SendGoal_Response>()
{
  return gac_robot_task::action::builder::Init_NavigateTour_SendGoal_Response_accepted();
}

}  // namespace gac_robot_task


namespace gac_robot_task
{

namespace action
{

namespace builder
{

class Init_NavigateTour_GetResult_Request_goal_id
{
public:
  Init_NavigateTour_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gac_robot_task::action::NavigateTour_GetResult_Request goal_id(::gac_robot_task::action::NavigateTour_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gac_robot_task::action::NavigateTour_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::gac_robot_task::action::NavigateTour_GetResult_Request>()
{
  return gac_robot_task::action::builder::Init_NavigateTour_GetResult_Request_goal_id();
}

}  // namespace gac_robot_task


namespace gac_robot_task
{

namespace action
{

namespace builder
{

class Init_NavigateTour_GetResult_Response_result
{
public:
  explicit Init_NavigateTour_GetResult_Response_result(::gac_robot_task::action::NavigateTour_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::gac_robot_task::action::NavigateTour_GetResult_Response result(::gac_robot_task::action::NavigateTour_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gac_robot_task::action::NavigateTour_GetResult_Response msg_;
};

class Init_NavigateTour_GetResult_Response_status
{
public:
  Init_NavigateTour_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateTour_GetResult_Response_result status(::gac_robot_task::action::NavigateTour_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_NavigateTour_GetResult_Response_result(msg_);
  }

private:
  ::gac_robot_task::action::NavigateTour_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::gac_robot_task::action::NavigateTour_GetResult_Response>()
{
  return gac_robot_task::action::builder::Init_NavigateTour_GetResult_Response_status();
}

}  // namespace gac_robot_task


namespace gac_robot_task
{

namespace action
{

namespace builder
{

class Init_NavigateTour_FeedbackMessage_feedback
{
public:
  explicit Init_NavigateTour_FeedbackMessage_feedback(::gac_robot_task::action::NavigateTour_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::gac_robot_task::action::NavigateTour_FeedbackMessage feedback(::gac_robot_task::action::NavigateTour_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gac_robot_task::action::NavigateTour_FeedbackMessage msg_;
};

class Init_NavigateTour_FeedbackMessage_goal_id
{
public:
  Init_NavigateTour_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateTour_FeedbackMessage_feedback goal_id(::gac_robot_task::action::NavigateTour_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_NavigateTour_FeedbackMessage_feedback(msg_);
  }

private:
  ::gac_robot_task::action::NavigateTour_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::gac_robot_task::action::NavigateTour_FeedbackMessage>()
{
  return gac_robot_task::action::builder::Init_NavigateTour_FeedbackMessage_goal_id();
}

}  // namespace gac_robot_task

#endif  // GAC_ROBOT_TASK__ACTION__DETAIL__NAVIGATE_TOUR__BUILDER_HPP_
