// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gac_robot_task:action/NavigateTour.idl
// generated code does not contain a copyright notice

#ifndef GAC_ROBOT_TASK__ACTION__DETAIL__NAVIGATE_TOUR__STRUCT_H_
#define GAC_ROBOT_TASK__ACTION__DETAIL__NAVIGATE_TOUR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'task_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/NavigateTour in the package gac_robot_task.
typedef struct gac_robot_task__action__NavigateTour_Goal
{
  rosidl_runtime_c__String task_id;
} gac_robot_task__action__NavigateTour_Goal;

// Struct for a sequence of gac_robot_task__action__NavigateTour_Goal.
typedef struct gac_robot_task__action__NavigateTour_Goal__Sequence
{
  gac_robot_task__action__NavigateTour_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gac_robot_task__action__NavigateTour_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/NavigateTour in the package gac_robot_task.
typedef struct gac_robot_task__action__NavigateTour_Result
{
  bool success;
  rosidl_runtime_c__String error_message;
  int32_t completed_waypoints;
} gac_robot_task__action__NavigateTour_Result;

// Struct for a sequence of gac_robot_task__action__NavigateTour_Result.
typedef struct gac_robot_task__action__NavigateTour_Result__Sequence
{
  gac_robot_task__action__NavigateTour_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gac_robot_task__action__NavigateTour_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'current_action'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/NavigateTour in the package gac_robot_task.
typedef struct gac_robot_task__action__NavigateTour_Feedback
{
  int32_t current_waypoint_index;
  int32_t total_waypoints;
  rosidl_runtime_c__String current_action;
  float progress_percentage;
} gac_robot_task__action__NavigateTour_Feedback;

// Struct for a sequence of gac_robot_task__action__NavigateTour_Feedback.
typedef struct gac_robot_task__action__NavigateTour_Feedback__Sequence
{
  gac_robot_task__action__NavigateTour_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gac_robot_task__action__NavigateTour_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "gac_robot_task/action/detail/navigate_tour__struct.h"

/// Struct defined in action/NavigateTour in the package gac_robot_task.
typedef struct gac_robot_task__action__NavigateTour_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  gac_robot_task__action__NavigateTour_Goal goal;
} gac_robot_task__action__NavigateTour_SendGoal_Request;

// Struct for a sequence of gac_robot_task__action__NavigateTour_SendGoal_Request.
typedef struct gac_robot_task__action__NavigateTour_SendGoal_Request__Sequence
{
  gac_robot_task__action__NavigateTour_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gac_robot_task__action__NavigateTour_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/NavigateTour in the package gac_robot_task.
typedef struct gac_robot_task__action__NavigateTour_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} gac_robot_task__action__NavigateTour_SendGoal_Response;

// Struct for a sequence of gac_robot_task__action__NavigateTour_SendGoal_Response.
typedef struct gac_robot_task__action__NavigateTour_SendGoal_Response__Sequence
{
  gac_robot_task__action__NavigateTour_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gac_robot_task__action__NavigateTour_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/NavigateTour in the package gac_robot_task.
typedef struct gac_robot_task__action__NavigateTour_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} gac_robot_task__action__NavigateTour_GetResult_Request;

// Struct for a sequence of gac_robot_task__action__NavigateTour_GetResult_Request.
typedef struct gac_robot_task__action__NavigateTour_GetResult_Request__Sequence
{
  gac_robot_task__action__NavigateTour_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gac_robot_task__action__NavigateTour_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "gac_robot_task/action/detail/navigate_tour__struct.h"

/// Struct defined in action/NavigateTour in the package gac_robot_task.
typedef struct gac_robot_task__action__NavigateTour_GetResult_Response
{
  int8_t status;
  gac_robot_task__action__NavigateTour_Result result;
} gac_robot_task__action__NavigateTour_GetResult_Response;

// Struct for a sequence of gac_robot_task__action__NavigateTour_GetResult_Response.
typedef struct gac_robot_task__action__NavigateTour_GetResult_Response__Sequence
{
  gac_robot_task__action__NavigateTour_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gac_robot_task__action__NavigateTour_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "gac_robot_task/action/detail/navigate_tour__struct.h"

/// Struct defined in action/NavigateTour in the package gac_robot_task.
typedef struct gac_robot_task__action__NavigateTour_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  gac_robot_task__action__NavigateTour_Feedback feedback;
} gac_robot_task__action__NavigateTour_FeedbackMessage;

// Struct for a sequence of gac_robot_task__action__NavigateTour_FeedbackMessage.
typedef struct gac_robot_task__action__NavigateTour_FeedbackMessage__Sequence
{
  gac_robot_task__action__NavigateTour_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gac_robot_task__action__NavigateTour_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAC_ROBOT_TASK__ACTION__DETAIL__NAVIGATE_TOUR__STRUCT_H_
