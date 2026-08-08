// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gac_robot_task:action/NavigateTour.idl
// generated code does not contain a copyright notice

#ifndef GAC_ROBOT_TASK__ACTION__DETAIL__NAVIGATE_TOUR__STRUCT_HPP_
#define GAC_ROBOT_TASK__ACTION__DETAIL__NAVIGATE_TOUR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gac_robot_task__action__NavigateTour_Goal __attribute__((deprecated))
#else
# define DEPRECATED__gac_robot_task__action__NavigateTour_Goal __declspec(deprecated)
#endif

namespace gac_robot_task
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateTour_Goal_
{
  using Type = NavigateTour_Goal_<ContainerAllocator>;

  explicit NavigateTour_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = "";
    }
  }

  explicit NavigateTour_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = "";
    }
  }

  // field types and members
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;

  // setters for named parameter idiom
  Type & set__task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gac_robot_task::action::NavigateTour_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const gac_robot_task::action::NavigateTour_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gac_robot_task::action::NavigateTour_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gac_robot_task::action::NavigateTour_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gac_robot_task::action::NavigateTour_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gac_robot_task::action::NavigateTour_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gac_robot_task::action::NavigateTour_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gac_robot_task::action::NavigateTour_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gac_robot_task::action::NavigateTour_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gac_robot_task::action::NavigateTour_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gac_robot_task__action__NavigateTour_Goal
    std::shared_ptr<gac_robot_task::action::NavigateTour_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gac_robot_task__action__NavigateTour_Goal
    std::shared_ptr<gac_robot_task::action::NavigateTour_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateTour_Goal_ & other) const
  {
    if (this->task_id != other.task_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateTour_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateTour_Goal_

// alias to use template instance with default allocator
using NavigateTour_Goal =
  gac_robot_task::action::NavigateTour_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace gac_robot_task


#ifndef _WIN32
# define DEPRECATED__gac_robot_task__action__NavigateTour_Result __attribute__((deprecated))
#else
# define DEPRECATED__gac_robot_task__action__NavigateTour_Result __declspec(deprecated)
#endif

namespace gac_robot_task
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateTour_Result_
{
  using Type = NavigateTour_Result_<ContainerAllocator>;

  explicit NavigateTour_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_message = "";
      this->completed_waypoints = 0l;
    }
  }

  explicit NavigateTour_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_message = "";
      this->completed_waypoints = 0l;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _error_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_message_type error_message;
  using _completed_waypoints_type =
    int32_t;
  _completed_waypoints_type completed_waypoints;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__error_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_message = _arg;
    return *this;
  }
  Type & set__completed_waypoints(
    const int32_t & _arg)
  {
    this->completed_waypoints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gac_robot_task::action::NavigateTour_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const gac_robot_task::action::NavigateTour_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gac_robot_task::action::NavigateTour_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gac_robot_task::action::NavigateTour_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gac_robot_task::action::NavigateTour_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gac_robot_task::action::NavigateTour_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gac_robot_task::action::NavigateTour_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gac_robot_task::action::NavigateTour_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gac_robot_task::action::NavigateTour_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gac_robot_task::action::NavigateTour_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gac_robot_task__action__NavigateTour_Result
    std::shared_ptr<gac_robot_task::action::NavigateTour_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gac_robot_task__action__NavigateTour_Result
    std::shared_ptr<gac_robot_task::action::NavigateTour_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateTour_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->error_message != other.error_message) {
      return false;
    }
    if (this->completed_waypoints != other.completed_waypoints) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateTour_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateTour_Result_

// alias to use template instance with default allocator
using NavigateTour_Result =
  gac_robot_task::action::NavigateTour_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace gac_robot_task


#ifndef _WIN32
# define DEPRECATED__gac_robot_task__action__NavigateTour_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__gac_robot_task__action__NavigateTour_Feedback __declspec(deprecated)
#endif

namespace gac_robot_task
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateTour_Feedback_
{
  using Type = NavigateTour_Feedback_<ContainerAllocator>;

  explicit NavigateTour_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_waypoint_index = 0l;
      this->total_waypoints = 0l;
      this->current_action = "";
      this->progress_percentage = 0.0f;
    }
  }

  explicit NavigateTour_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_action(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_waypoint_index = 0l;
      this->total_waypoints = 0l;
      this->current_action = "";
      this->progress_percentage = 0.0f;
    }
  }

  // field types and members
  using _current_waypoint_index_type =
    int32_t;
  _current_waypoint_index_type current_waypoint_index;
  using _total_waypoints_type =
    int32_t;
  _total_waypoints_type total_waypoints;
  using _current_action_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_action_type current_action;
  using _progress_percentage_type =
    float;
  _progress_percentage_type progress_percentage;

  // setters for named parameter idiom
  Type & set__current_waypoint_index(
    const int32_t & _arg)
  {
    this->current_waypoint_index = _arg;
    return *this;
  }
  Type & set__total_waypoints(
    const int32_t & _arg)
  {
    this->total_waypoints = _arg;
    return *this;
  }
  Type & set__current_action(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_action = _arg;
    return *this;
  }
  Type & set__progress_percentage(
    const float & _arg)
  {
    this->progress_percentage = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gac_robot_task::action::NavigateTour_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const gac_robot_task::action::NavigateTour_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gac_robot_task::action::NavigateTour_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gac_robot_task::action::NavigateTour_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gac_robot_task::action::NavigateTour_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gac_robot_task::action::NavigateTour_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gac_robot_task::action::NavigateTour_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gac_robot_task::action::NavigateTour_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gac_robot_task::action::NavigateTour_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gac_robot_task::action::NavigateTour_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gac_robot_task__action__NavigateTour_Feedback
    std::shared_ptr<gac_robot_task::action::NavigateTour_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gac_robot_task__action__NavigateTour_Feedback
    std::shared_ptr<gac_robot_task::action::NavigateTour_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateTour_Feedback_ & other) const
  {
    if (this->current_waypoint_index != other.current_waypoint_index) {
      return false;
    }
    if (this->total_waypoints != other.total_waypoints) {
      return false;
    }
    if (this->current_action != other.current_action) {
      return false;
    }
    if (this->progress_percentage != other.progress_percentage) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateTour_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateTour_Feedback_

// alias to use template instance with default allocator
using NavigateTour_Feedback =
  gac_robot_task::action::NavigateTour_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace gac_robot_task


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "gac_robot_task/action/detail/navigate_tour__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gac_robot_task__action__NavigateTour_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__gac_robot_task__action__NavigateTour_SendGoal_Request __declspec(deprecated)
#endif

namespace gac_robot_task
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateTour_SendGoal_Request_
{
  using Type = NavigateTour_SendGoal_Request_<ContainerAllocator>;

  explicit NavigateTour_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit NavigateTour_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    gac_robot_task::action::NavigateTour_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const gac_robot_task::action::NavigateTour_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gac_robot_task::action::NavigateTour_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gac_robot_task::action::NavigateTour_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gac_robot_task::action::NavigateTour_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gac_robot_task::action::NavigateTour_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gac_robot_task::action::NavigateTour_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gac_robot_task::action::NavigateTour_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gac_robot_task::action::NavigateTour_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gac_robot_task::action::NavigateTour_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gac_robot_task::action::NavigateTour_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gac_robot_task::action::NavigateTour_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gac_robot_task__action__NavigateTour_SendGoal_Request
    std::shared_ptr<gac_robot_task::action::NavigateTour_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gac_robot_task__action__NavigateTour_SendGoal_Request
    std::shared_ptr<gac_robot_task::action::NavigateTour_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateTour_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateTour_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateTour_SendGoal_Request_

// alias to use template instance with default allocator
using NavigateTour_SendGoal_Request =
  gac_robot_task::action::NavigateTour_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace gac_robot_task


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gac_robot_task__action__NavigateTour_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__gac_robot_task__action__NavigateTour_SendGoal_Response __declspec(deprecated)
#endif

namespace gac_robot_task
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateTour_SendGoal_Response_
{
  using Type = NavigateTour_SendGoal_Response_<ContainerAllocator>;

  explicit NavigateTour_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit NavigateTour_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    gac_robot_task::action::NavigateTour_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gac_robot_task::action::NavigateTour_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gac_robot_task::action::NavigateTour_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gac_robot_task::action::NavigateTour_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gac_robot_task::action::NavigateTour_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gac_robot_task::action::NavigateTour_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gac_robot_task::action::NavigateTour_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gac_robot_task::action::NavigateTour_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gac_robot_task::action::NavigateTour_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gac_robot_task::action::NavigateTour_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gac_robot_task__action__NavigateTour_SendGoal_Response
    std::shared_ptr<gac_robot_task::action::NavigateTour_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gac_robot_task__action__NavigateTour_SendGoal_Response
    std::shared_ptr<gac_robot_task::action::NavigateTour_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateTour_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateTour_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateTour_SendGoal_Response_

// alias to use template instance with default allocator
using NavigateTour_SendGoal_Response =
  gac_robot_task::action::NavigateTour_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace gac_robot_task

namespace gac_robot_task
{

namespace action
{

struct NavigateTour_SendGoal
{
  using Request = gac_robot_task::action::NavigateTour_SendGoal_Request;
  using Response = gac_robot_task::action::NavigateTour_SendGoal_Response;
};

}  // namespace action

}  // namespace gac_robot_task


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gac_robot_task__action__NavigateTour_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__gac_robot_task__action__NavigateTour_GetResult_Request __declspec(deprecated)
#endif

namespace gac_robot_task
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateTour_GetResult_Request_
{
  using Type = NavigateTour_GetResult_Request_<ContainerAllocator>;

  explicit NavigateTour_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit NavigateTour_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    gac_robot_task::action::NavigateTour_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gac_robot_task::action::NavigateTour_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gac_robot_task::action::NavigateTour_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gac_robot_task::action::NavigateTour_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gac_robot_task::action::NavigateTour_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gac_robot_task::action::NavigateTour_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gac_robot_task::action::NavigateTour_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gac_robot_task::action::NavigateTour_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gac_robot_task::action::NavigateTour_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gac_robot_task::action::NavigateTour_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gac_robot_task__action__NavigateTour_GetResult_Request
    std::shared_ptr<gac_robot_task::action::NavigateTour_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gac_robot_task__action__NavigateTour_GetResult_Request
    std::shared_ptr<gac_robot_task::action::NavigateTour_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateTour_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateTour_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateTour_GetResult_Request_

// alias to use template instance with default allocator
using NavigateTour_GetResult_Request =
  gac_robot_task::action::NavigateTour_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace gac_robot_task


// Include directives for member types
// Member 'result'
// already included above
// #include "gac_robot_task/action/detail/navigate_tour__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gac_robot_task__action__NavigateTour_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__gac_robot_task__action__NavigateTour_GetResult_Response __declspec(deprecated)
#endif

namespace gac_robot_task
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateTour_GetResult_Response_
{
  using Type = NavigateTour_GetResult_Response_<ContainerAllocator>;

  explicit NavigateTour_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit NavigateTour_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    gac_robot_task::action::NavigateTour_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const gac_robot_task::action::NavigateTour_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gac_robot_task::action::NavigateTour_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gac_robot_task::action::NavigateTour_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gac_robot_task::action::NavigateTour_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gac_robot_task::action::NavigateTour_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gac_robot_task::action::NavigateTour_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gac_robot_task::action::NavigateTour_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gac_robot_task::action::NavigateTour_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gac_robot_task::action::NavigateTour_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gac_robot_task::action::NavigateTour_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gac_robot_task::action::NavigateTour_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gac_robot_task__action__NavigateTour_GetResult_Response
    std::shared_ptr<gac_robot_task::action::NavigateTour_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gac_robot_task__action__NavigateTour_GetResult_Response
    std::shared_ptr<gac_robot_task::action::NavigateTour_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateTour_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateTour_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateTour_GetResult_Response_

// alias to use template instance with default allocator
using NavigateTour_GetResult_Response =
  gac_robot_task::action::NavigateTour_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace gac_robot_task

namespace gac_robot_task
{

namespace action
{

struct NavigateTour_GetResult
{
  using Request = gac_robot_task::action::NavigateTour_GetResult_Request;
  using Response = gac_robot_task::action::NavigateTour_GetResult_Response;
};

}  // namespace action

}  // namespace gac_robot_task


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "gac_robot_task/action/detail/navigate_tour__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gac_robot_task__action__NavigateTour_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__gac_robot_task__action__NavigateTour_FeedbackMessage __declspec(deprecated)
#endif

namespace gac_robot_task
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateTour_FeedbackMessage_
{
  using Type = NavigateTour_FeedbackMessage_<ContainerAllocator>;

  explicit NavigateTour_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit NavigateTour_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    gac_robot_task::action::NavigateTour_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const gac_robot_task::action::NavigateTour_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gac_robot_task::action::NavigateTour_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const gac_robot_task::action::NavigateTour_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gac_robot_task::action::NavigateTour_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gac_robot_task::action::NavigateTour_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gac_robot_task::action::NavigateTour_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gac_robot_task::action::NavigateTour_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gac_robot_task::action::NavigateTour_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gac_robot_task::action::NavigateTour_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gac_robot_task::action::NavigateTour_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gac_robot_task::action::NavigateTour_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gac_robot_task__action__NavigateTour_FeedbackMessage
    std::shared_ptr<gac_robot_task::action::NavigateTour_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gac_robot_task__action__NavigateTour_FeedbackMessage
    std::shared_ptr<gac_robot_task::action::NavigateTour_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateTour_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateTour_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateTour_FeedbackMessage_

// alias to use template instance with default allocator
using NavigateTour_FeedbackMessage =
  gac_robot_task::action::NavigateTour_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace gac_robot_task

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace gac_robot_task
{

namespace action
{

struct NavigateTour
{
  /// The goal message defined in the action definition.
  using Goal = gac_robot_task::action::NavigateTour_Goal;
  /// The result message defined in the action definition.
  using Result = gac_robot_task::action::NavigateTour_Result;
  /// The feedback message defined in the action definition.
  using Feedback = gac_robot_task::action::NavigateTour_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = gac_robot_task::action::NavigateTour_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = gac_robot_task::action::NavigateTour_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = gac_robot_task::action::NavigateTour_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct NavigateTour NavigateTour;

}  // namespace action

}  // namespace gac_robot_task

#endif  // GAC_ROBOT_TASK__ACTION__DETAIL__NAVIGATE_TOUR__STRUCT_HPP_
