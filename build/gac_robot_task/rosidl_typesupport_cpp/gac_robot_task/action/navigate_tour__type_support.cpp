// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from gac_robot_task:action/NavigateTour.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "gac_robot_task/action/detail/navigate_tour__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace gac_robot_task
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _NavigateTour_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateTour_Goal_type_support_ids_t;

static const _NavigateTour_Goal_type_support_ids_t _NavigateTour_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NavigateTour_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateTour_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateTour_Goal_type_support_symbol_names_t _NavigateTour_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gac_robot_task, action, NavigateTour_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gac_robot_task, action, NavigateTour_Goal)),
  }
};

typedef struct _NavigateTour_Goal_type_support_data_t
{
  void * data[2];
} _NavigateTour_Goal_type_support_data_t;

static _NavigateTour_Goal_type_support_data_t _NavigateTour_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateTour_Goal_message_typesupport_map = {
  2,
  "gac_robot_task",
  &_NavigateTour_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateTour_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateTour_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateTour_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateTour_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace gac_robot_task

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gac_robot_task::action::NavigateTour_Goal>()
{
  return &::gac_robot_task::action::rosidl_typesupport_cpp::NavigateTour_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, gac_robot_task, action, NavigateTour_Goal)() {
  return get_message_type_support_handle<gac_robot_task::action::NavigateTour_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "gac_robot_task/action/detail/navigate_tour__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gac_robot_task
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _NavigateTour_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateTour_Result_type_support_ids_t;

static const _NavigateTour_Result_type_support_ids_t _NavigateTour_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NavigateTour_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateTour_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateTour_Result_type_support_symbol_names_t _NavigateTour_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gac_robot_task, action, NavigateTour_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gac_robot_task, action, NavigateTour_Result)),
  }
};

typedef struct _NavigateTour_Result_type_support_data_t
{
  void * data[2];
} _NavigateTour_Result_type_support_data_t;

static _NavigateTour_Result_type_support_data_t _NavigateTour_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateTour_Result_message_typesupport_map = {
  2,
  "gac_robot_task",
  &_NavigateTour_Result_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateTour_Result_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateTour_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateTour_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateTour_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace gac_robot_task

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gac_robot_task::action::NavigateTour_Result>()
{
  return &::gac_robot_task::action::rosidl_typesupport_cpp::NavigateTour_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, gac_robot_task, action, NavigateTour_Result)() {
  return get_message_type_support_handle<gac_robot_task::action::NavigateTour_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "gac_robot_task/action/detail/navigate_tour__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gac_robot_task
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _NavigateTour_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateTour_Feedback_type_support_ids_t;

static const _NavigateTour_Feedback_type_support_ids_t _NavigateTour_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NavigateTour_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateTour_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateTour_Feedback_type_support_symbol_names_t _NavigateTour_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gac_robot_task, action, NavigateTour_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gac_robot_task, action, NavigateTour_Feedback)),
  }
};

typedef struct _NavigateTour_Feedback_type_support_data_t
{
  void * data[2];
} _NavigateTour_Feedback_type_support_data_t;

static _NavigateTour_Feedback_type_support_data_t _NavigateTour_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateTour_Feedback_message_typesupport_map = {
  2,
  "gac_robot_task",
  &_NavigateTour_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateTour_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateTour_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateTour_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateTour_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace gac_robot_task

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gac_robot_task::action::NavigateTour_Feedback>()
{
  return &::gac_robot_task::action::rosidl_typesupport_cpp::NavigateTour_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, gac_robot_task, action, NavigateTour_Feedback)() {
  return get_message_type_support_handle<gac_robot_task::action::NavigateTour_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "gac_robot_task/action/detail/navigate_tour__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gac_robot_task
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _NavigateTour_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateTour_SendGoal_Request_type_support_ids_t;

static const _NavigateTour_SendGoal_Request_type_support_ids_t _NavigateTour_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NavigateTour_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateTour_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateTour_SendGoal_Request_type_support_symbol_names_t _NavigateTour_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gac_robot_task, action, NavigateTour_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gac_robot_task, action, NavigateTour_SendGoal_Request)),
  }
};

typedef struct _NavigateTour_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _NavigateTour_SendGoal_Request_type_support_data_t;

static _NavigateTour_SendGoal_Request_type_support_data_t _NavigateTour_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateTour_SendGoal_Request_message_typesupport_map = {
  2,
  "gac_robot_task",
  &_NavigateTour_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateTour_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateTour_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateTour_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateTour_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace gac_robot_task

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gac_robot_task::action::NavigateTour_SendGoal_Request>()
{
  return &::gac_robot_task::action::rosidl_typesupport_cpp::NavigateTour_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, gac_robot_task, action, NavigateTour_SendGoal_Request)() {
  return get_message_type_support_handle<gac_robot_task::action::NavigateTour_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "gac_robot_task/action/detail/navigate_tour__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gac_robot_task
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _NavigateTour_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateTour_SendGoal_Response_type_support_ids_t;

static const _NavigateTour_SendGoal_Response_type_support_ids_t _NavigateTour_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NavigateTour_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateTour_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateTour_SendGoal_Response_type_support_symbol_names_t _NavigateTour_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gac_robot_task, action, NavigateTour_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gac_robot_task, action, NavigateTour_SendGoal_Response)),
  }
};

typedef struct _NavigateTour_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _NavigateTour_SendGoal_Response_type_support_data_t;

static _NavigateTour_SendGoal_Response_type_support_data_t _NavigateTour_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateTour_SendGoal_Response_message_typesupport_map = {
  2,
  "gac_robot_task",
  &_NavigateTour_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateTour_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateTour_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateTour_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateTour_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace gac_robot_task

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gac_robot_task::action::NavigateTour_SendGoal_Response>()
{
  return &::gac_robot_task::action::rosidl_typesupport_cpp::NavigateTour_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, gac_robot_task, action, NavigateTour_SendGoal_Response)() {
  return get_message_type_support_handle<gac_robot_task::action::NavigateTour_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "gac_robot_task/action/detail/navigate_tour__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gac_robot_task
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _NavigateTour_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateTour_SendGoal_type_support_ids_t;

static const _NavigateTour_SendGoal_type_support_ids_t _NavigateTour_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NavigateTour_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateTour_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateTour_SendGoal_type_support_symbol_names_t _NavigateTour_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gac_robot_task, action, NavigateTour_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gac_robot_task, action, NavigateTour_SendGoal)),
  }
};

typedef struct _NavigateTour_SendGoal_type_support_data_t
{
  void * data[2];
} _NavigateTour_SendGoal_type_support_data_t;

static _NavigateTour_SendGoal_type_support_data_t _NavigateTour_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateTour_SendGoal_service_typesupport_map = {
  2,
  "gac_robot_task",
  &_NavigateTour_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_NavigateTour_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_NavigateTour_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t NavigateTour_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateTour_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace gac_robot_task

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<gac_robot_task::action::NavigateTour_SendGoal>()
{
  return &::gac_robot_task::action::rosidl_typesupport_cpp::NavigateTour_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, gac_robot_task, action, NavigateTour_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<gac_robot_task::action::NavigateTour_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "gac_robot_task/action/detail/navigate_tour__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gac_robot_task
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _NavigateTour_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateTour_GetResult_Request_type_support_ids_t;

static const _NavigateTour_GetResult_Request_type_support_ids_t _NavigateTour_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NavigateTour_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateTour_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateTour_GetResult_Request_type_support_symbol_names_t _NavigateTour_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gac_robot_task, action, NavigateTour_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gac_robot_task, action, NavigateTour_GetResult_Request)),
  }
};

typedef struct _NavigateTour_GetResult_Request_type_support_data_t
{
  void * data[2];
} _NavigateTour_GetResult_Request_type_support_data_t;

static _NavigateTour_GetResult_Request_type_support_data_t _NavigateTour_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateTour_GetResult_Request_message_typesupport_map = {
  2,
  "gac_robot_task",
  &_NavigateTour_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateTour_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateTour_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateTour_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateTour_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace gac_robot_task

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gac_robot_task::action::NavigateTour_GetResult_Request>()
{
  return &::gac_robot_task::action::rosidl_typesupport_cpp::NavigateTour_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, gac_robot_task, action, NavigateTour_GetResult_Request)() {
  return get_message_type_support_handle<gac_robot_task::action::NavigateTour_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "gac_robot_task/action/detail/navigate_tour__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gac_robot_task
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _NavigateTour_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateTour_GetResult_Response_type_support_ids_t;

static const _NavigateTour_GetResult_Response_type_support_ids_t _NavigateTour_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NavigateTour_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateTour_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateTour_GetResult_Response_type_support_symbol_names_t _NavigateTour_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gac_robot_task, action, NavigateTour_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gac_robot_task, action, NavigateTour_GetResult_Response)),
  }
};

typedef struct _NavigateTour_GetResult_Response_type_support_data_t
{
  void * data[2];
} _NavigateTour_GetResult_Response_type_support_data_t;

static _NavigateTour_GetResult_Response_type_support_data_t _NavigateTour_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateTour_GetResult_Response_message_typesupport_map = {
  2,
  "gac_robot_task",
  &_NavigateTour_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateTour_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateTour_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateTour_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateTour_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace gac_robot_task

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gac_robot_task::action::NavigateTour_GetResult_Response>()
{
  return &::gac_robot_task::action::rosidl_typesupport_cpp::NavigateTour_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, gac_robot_task, action, NavigateTour_GetResult_Response)() {
  return get_message_type_support_handle<gac_robot_task::action::NavigateTour_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "gac_robot_task/action/detail/navigate_tour__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gac_robot_task
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _NavigateTour_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateTour_GetResult_type_support_ids_t;

static const _NavigateTour_GetResult_type_support_ids_t _NavigateTour_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NavigateTour_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateTour_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateTour_GetResult_type_support_symbol_names_t _NavigateTour_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gac_robot_task, action, NavigateTour_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gac_robot_task, action, NavigateTour_GetResult)),
  }
};

typedef struct _NavigateTour_GetResult_type_support_data_t
{
  void * data[2];
} _NavigateTour_GetResult_type_support_data_t;

static _NavigateTour_GetResult_type_support_data_t _NavigateTour_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateTour_GetResult_service_typesupport_map = {
  2,
  "gac_robot_task",
  &_NavigateTour_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_NavigateTour_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_NavigateTour_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t NavigateTour_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateTour_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace gac_robot_task

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<gac_robot_task::action::NavigateTour_GetResult>()
{
  return &::gac_robot_task::action::rosidl_typesupport_cpp::NavigateTour_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, gac_robot_task, action, NavigateTour_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<gac_robot_task::action::NavigateTour_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "gac_robot_task/action/detail/navigate_tour__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gac_robot_task
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _NavigateTour_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateTour_FeedbackMessage_type_support_ids_t;

static const _NavigateTour_FeedbackMessage_type_support_ids_t _NavigateTour_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NavigateTour_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateTour_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateTour_FeedbackMessage_type_support_symbol_names_t _NavigateTour_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gac_robot_task, action, NavigateTour_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gac_robot_task, action, NavigateTour_FeedbackMessage)),
  }
};

typedef struct _NavigateTour_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _NavigateTour_FeedbackMessage_type_support_data_t;

static _NavigateTour_FeedbackMessage_type_support_data_t _NavigateTour_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateTour_FeedbackMessage_message_typesupport_map = {
  2,
  "gac_robot_task",
  &_NavigateTour_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateTour_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateTour_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateTour_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateTour_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace gac_robot_task

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gac_robot_task::action::NavigateTour_FeedbackMessage>()
{
  return &::gac_robot_task::action::rosidl_typesupport_cpp::NavigateTour_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, gac_robot_task, action, NavigateTour_FeedbackMessage)() {
  return get_message_type_support_handle<gac_robot_task::action::NavigateTour_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "gac_robot_task/action/detail/navigate_tour__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace gac_robot_task
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t NavigateTour_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace gac_robot_task

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<gac_robot_task::action::NavigateTour>()
{
  using ::gac_robot_task::action::rosidl_typesupport_cpp::NavigateTour_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  NavigateTour_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::gac_robot_task::action::NavigateTour::Impl::SendGoalService>();
  NavigateTour_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::gac_robot_task::action::NavigateTour::Impl::GetResultService>();
  NavigateTour_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::gac_robot_task::action::NavigateTour::Impl::CancelGoalService>();
  NavigateTour_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::gac_robot_task::action::NavigateTour::Impl::FeedbackMessage>();
  NavigateTour_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::gac_robot_task::action::NavigateTour::Impl::GoalStatusMessage>();
  return &NavigateTour_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, gac_robot_task, action, NavigateTour)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<gac_robot_task::action::NavigateTour>();
}

#ifdef __cplusplus
}
#endif
