
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "gac_robot_task__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gac_robot_task__action__NavigateTour_Goal() -> *const std::ffi::c_void;
}

#[link(name = "gac_robot_task__rosidl_generator_c")]
extern "C" {
    fn gac_robot_task__action__NavigateTour_Goal__init(msg: *mut NavigateTour_Goal) -> bool;
    fn gac_robot_task__action__NavigateTour_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateTour_Goal>, size: usize) -> bool;
    fn gac_robot_task__action__NavigateTour_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateTour_Goal>);
    fn gac_robot_task__action__NavigateTour_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateTour_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateTour_Goal>) -> bool;
}

// Corresponds to gac_robot_task__action__NavigateTour_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateTour_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: rosidl_runtime_rs::String,

}



impl Default for NavigateTour_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gac_robot_task__action__NavigateTour_Goal__init(&mut msg as *mut _) {
        panic!("Call to gac_robot_task__action__NavigateTour_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateTour_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gac_robot_task__action__NavigateTour_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gac_robot_task__action__NavigateTour_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gac_robot_task__action__NavigateTour_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateTour_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateTour_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "gac_robot_task/action/NavigateTour_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gac_robot_task__action__NavigateTour_Goal() }
  }
}


#[link(name = "gac_robot_task__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gac_robot_task__action__NavigateTour_Result() -> *const std::ffi::c_void;
}

#[link(name = "gac_robot_task__rosidl_generator_c")]
extern "C" {
    fn gac_robot_task__action__NavigateTour_Result__init(msg: *mut NavigateTour_Result) -> bool;
    fn gac_robot_task__action__NavigateTour_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateTour_Result>, size: usize) -> bool;
    fn gac_robot_task__action__NavigateTour_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateTour_Result>);
    fn gac_robot_task__action__NavigateTour_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateTour_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateTour_Result>) -> bool;
}

// Corresponds to gac_robot_task__action__NavigateTour_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateTour_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub completed_waypoints: i32,

}



impl Default for NavigateTour_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gac_robot_task__action__NavigateTour_Result__init(&mut msg as *mut _) {
        panic!("Call to gac_robot_task__action__NavigateTour_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateTour_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gac_robot_task__action__NavigateTour_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gac_robot_task__action__NavigateTour_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gac_robot_task__action__NavigateTour_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateTour_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateTour_Result where Self: Sized {
  const TYPE_NAME: &'static str = "gac_robot_task/action/NavigateTour_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gac_robot_task__action__NavigateTour_Result() }
  }
}


#[link(name = "gac_robot_task__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gac_robot_task__action__NavigateTour_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "gac_robot_task__rosidl_generator_c")]
extern "C" {
    fn gac_robot_task__action__NavigateTour_Feedback__init(msg: *mut NavigateTour_Feedback) -> bool;
    fn gac_robot_task__action__NavigateTour_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateTour_Feedback>, size: usize) -> bool;
    fn gac_robot_task__action__NavigateTour_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateTour_Feedback>);
    fn gac_robot_task__action__NavigateTour_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateTour_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateTour_Feedback>) -> bool;
}

// Corresponds to gac_robot_task__action__NavigateTour_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateTour_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_waypoint_index: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub total_waypoints: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_action: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub progress_percentage: f32,

}



impl Default for NavigateTour_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gac_robot_task__action__NavigateTour_Feedback__init(&mut msg as *mut _) {
        panic!("Call to gac_robot_task__action__NavigateTour_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateTour_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gac_robot_task__action__NavigateTour_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gac_robot_task__action__NavigateTour_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gac_robot_task__action__NavigateTour_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateTour_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateTour_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "gac_robot_task/action/NavigateTour_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gac_robot_task__action__NavigateTour_Feedback() }
  }
}


#[link(name = "gac_robot_task__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gac_robot_task__action__NavigateTour_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "gac_robot_task__rosidl_generator_c")]
extern "C" {
    fn gac_robot_task__action__NavigateTour_FeedbackMessage__init(msg: *mut NavigateTour_FeedbackMessage) -> bool;
    fn gac_robot_task__action__NavigateTour_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateTour_FeedbackMessage>, size: usize) -> bool;
    fn gac_robot_task__action__NavigateTour_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateTour_FeedbackMessage>);
    fn gac_robot_task__action__NavigateTour_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateTour_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateTour_FeedbackMessage>) -> bool;
}

// Corresponds to gac_robot_task__action__NavigateTour_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateTour_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::NavigateTour_Feedback,

}



impl Default for NavigateTour_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gac_robot_task__action__NavigateTour_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to gac_robot_task__action__NavigateTour_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateTour_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gac_robot_task__action__NavigateTour_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gac_robot_task__action__NavigateTour_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gac_robot_task__action__NavigateTour_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateTour_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateTour_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "gac_robot_task/action/NavigateTour_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gac_robot_task__action__NavigateTour_FeedbackMessage() }
  }
}




#[link(name = "gac_robot_task__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gac_robot_task__action__NavigateTour_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "gac_robot_task__rosidl_generator_c")]
extern "C" {
    fn gac_robot_task__action__NavigateTour_SendGoal_Request__init(msg: *mut NavigateTour_SendGoal_Request) -> bool;
    fn gac_robot_task__action__NavigateTour_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateTour_SendGoal_Request>, size: usize) -> bool;
    fn gac_robot_task__action__NavigateTour_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateTour_SendGoal_Request>);
    fn gac_robot_task__action__NavigateTour_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateTour_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateTour_SendGoal_Request>) -> bool;
}

// Corresponds to gac_robot_task__action__NavigateTour_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateTour_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::NavigateTour_Goal,

}



impl Default for NavigateTour_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gac_robot_task__action__NavigateTour_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to gac_robot_task__action__NavigateTour_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateTour_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gac_robot_task__action__NavigateTour_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gac_robot_task__action__NavigateTour_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gac_robot_task__action__NavigateTour_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateTour_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateTour_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "gac_robot_task/action/NavigateTour_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gac_robot_task__action__NavigateTour_SendGoal_Request() }
  }
}


#[link(name = "gac_robot_task__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gac_robot_task__action__NavigateTour_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "gac_robot_task__rosidl_generator_c")]
extern "C" {
    fn gac_robot_task__action__NavigateTour_SendGoal_Response__init(msg: *mut NavigateTour_SendGoal_Response) -> bool;
    fn gac_robot_task__action__NavigateTour_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateTour_SendGoal_Response>, size: usize) -> bool;
    fn gac_robot_task__action__NavigateTour_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateTour_SendGoal_Response>);
    fn gac_robot_task__action__NavigateTour_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateTour_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateTour_SendGoal_Response>) -> bool;
}

// Corresponds to gac_robot_task__action__NavigateTour_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateTour_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for NavigateTour_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gac_robot_task__action__NavigateTour_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to gac_robot_task__action__NavigateTour_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateTour_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gac_robot_task__action__NavigateTour_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gac_robot_task__action__NavigateTour_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gac_robot_task__action__NavigateTour_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateTour_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateTour_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "gac_robot_task/action/NavigateTour_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gac_robot_task__action__NavigateTour_SendGoal_Response() }
  }
}


#[link(name = "gac_robot_task__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gac_robot_task__action__NavigateTour_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "gac_robot_task__rosidl_generator_c")]
extern "C" {
    fn gac_robot_task__action__NavigateTour_GetResult_Request__init(msg: *mut NavigateTour_GetResult_Request) -> bool;
    fn gac_robot_task__action__NavigateTour_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateTour_GetResult_Request>, size: usize) -> bool;
    fn gac_robot_task__action__NavigateTour_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateTour_GetResult_Request>);
    fn gac_robot_task__action__NavigateTour_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateTour_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateTour_GetResult_Request>) -> bool;
}

// Corresponds to gac_robot_task__action__NavigateTour_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateTour_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for NavigateTour_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gac_robot_task__action__NavigateTour_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to gac_robot_task__action__NavigateTour_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateTour_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gac_robot_task__action__NavigateTour_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gac_robot_task__action__NavigateTour_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gac_robot_task__action__NavigateTour_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateTour_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateTour_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "gac_robot_task/action/NavigateTour_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gac_robot_task__action__NavigateTour_GetResult_Request() }
  }
}


#[link(name = "gac_robot_task__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__gac_robot_task__action__NavigateTour_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "gac_robot_task__rosidl_generator_c")]
extern "C" {
    fn gac_robot_task__action__NavigateTour_GetResult_Response__init(msg: *mut NavigateTour_GetResult_Response) -> bool;
    fn gac_robot_task__action__NavigateTour_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateTour_GetResult_Response>, size: usize) -> bool;
    fn gac_robot_task__action__NavigateTour_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateTour_GetResult_Response>);
    fn gac_robot_task__action__NavigateTour_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateTour_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateTour_GetResult_Response>) -> bool;
}

// Corresponds to gac_robot_task__action__NavigateTour_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateTour_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::NavigateTour_Result,

}



impl Default for NavigateTour_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !gac_robot_task__action__NavigateTour_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to gac_robot_task__action__NavigateTour_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateTour_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gac_robot_task__action__NavigateTour_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gac_robot_task__action__NavigateTour_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { gac_robot_task__action__NavigateTour_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateTour_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateTour_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "gac_robot_task/action/NavigateTour_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__gac_robot_task__action__NavigateTour_GetResult_Response() }
  }
}






#[link(name = "gac_robot_task__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__gac_robot_task__action__NavigateTour_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to gac_robot_task__action__NavigateTour_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct NavigateTour_SendGoal;

impl rosidl_runtime_rs::Service for NavigateTour_SendGoal {
    type Request = NavigateTour_SendGoal_Request;
    type Response = NavigateTour_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__gac_robot_task__action__NavigateTour_SendGoal() }
    }
}




#[link(name = "gac_robot_task__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__gac_robot_task__action__NavigateTour_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to gac_robot_task__action__NavigateTour_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct NavigateTour_GetResult;

impl rosidl_runtime_rs::Service for NavigateTour_GetResult {
    type Request = NavigateTour_GetResult_Request;
    type Response = NavigateTour_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__gac_robot_task__action__NavigateTour_GetResult() }
    }
}


