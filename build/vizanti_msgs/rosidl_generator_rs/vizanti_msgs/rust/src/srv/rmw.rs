#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "vizanti_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__GetNodeParameters_Request() -> *const std::ffi::c_void;
}

#[link(name = "vizanti_msgs__rosidl_generator_c")]
extern "C" {
    fn vizanti_msgs__srv__GetNodeParameters_Request__init(msg: *mut GetNodeParameters_Request) -> bool;
    fn vizanti_msgs__srv__GetNodeParameters_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetNodeParameters_Request>, size: usize) -> bool;
    fn vizanti_msgs__srv__GetNodeParameters_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetNodeParameters_Request>);
    fn vizanti_msgs__srv__GetNodeParameters_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetNodeParameters_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetNodeParameters_Request>) -> bool;
}

// Corresponds to vizanti_msgs__srv__GetNodeParameters_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetNodeParameters_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub node: rosidl_runtime_rs::String,

}



impl Default for GetNodeParameters_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vizanti_msgs__srv__GetNodeParameters_Request__init(&mut msg as *mut _) {
        panic!("Call to vizanti_msgs__srv__GetNodeParameters_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetNodeParameters_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__GetNodeParameters_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__GetNodeParameters_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__GetNodeParameters_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetNodeParameters_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetNodeParameters_Request where Self: Sized {
  const TYPE_NAME: &'static str = "vizanti_msgs/srv/GetNodeParameters_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__GetNodeParameters_Request() }
  }
}


#[link(name = "vizanti_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__GetNodeParameters_Response() -> *const std::ffi::c_void;
}

#[link(name = "vizanti_msgs__rosidl_generator_c")]
extern "C" {
    fn vizanti_msgs__srv__GetNodeParameters_Response__init(msg: *mut GetNodeParameters_Response) -> bool;
    fn vizanti_msgs__srv__GetNodeParameters_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetNodeParameters_Response>, size: usize) -> bool;
    fn vizanti_msgs__srv__GetNodeParameters_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetNodeParameters_Response>);
    fn vizanti_msgs__srv__GetNodeParameters_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetNodeParameters_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetNodeParameters_Response>) -> bool;
}

// Corresponds to vizanti_msgs__srv__GetNodeParameters_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetNodeParameters_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub parameters: rosidl_runtime_rs::String,

}



impl Default for GetNodeParameters_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vizanti_msgs__srv__GetNodeParameters_Response__init(&mut msg as *mut _) {
        panic!("Call to vizanti_msgs__srv__GetNodeParameters_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetNodeParameters_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__GetNodeParameters_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__GetNodeParameters_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__GetNodeParameters_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetNodeParameters_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetNodeParameters_Response where Self: Sized {
  const TYPE_NAME: &'static str = "vizanti_msgs/srv/GetNodeParameters_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__GetNodeParameters_Response() }
  }
}


#[link(name = "vizanti_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__SetNodeParameter_Request() -> *const std::ffi::c_void;
}

#[link(name = "vizanti_msgs__rosidl_generator_c")]
extern "C" {
    fn vizanti_msgs__srv__SetNodeParameter_Request__init(msg: *mut SetNodeParameter_Request) -> bool;
    fn vizanti_msgs__srv__SetNodeParameter_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetNodeParameter_Request>, size: usize) -> bool;
    fn vizanti_msgs__srv__SetNodeParameter_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetNodeParameter_Request>);
    fn vizanti_msgs__srv__SetNodeParameter_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetNodeParameter_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetNodeParameter_Request>) -> bool;
}

// Corresponds to vizanti_msgs__srv__SetNodeParameter_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetNodeParameter_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub node: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub param: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: rosidl_runtime_rs::String,

}



impl Default for SetNodeParameter_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vizanti_msgs__srv__SetNodeParameter_Request__init(&mut msg as *mut _) {
        panic!("Call to vizanti_msgs__srv__SetNodeParameter_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetNodeParameter_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__SetNodeParameter_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__SetNodeParameter_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__SetNodeParameter_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetNodeParameter_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetNodeParameter_Request where Self: Sized {
  const TYPE_NAME: &'static str = "vizanti_msgs/srv/SetNodeParameter_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__SetNodeParameter_Request() }
  }
}


#[link(name = "vizanti_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__SetNodeParameter_Response() -> *const std::ffi::c_void;
}

#[link(name = "vizanti_msgs__rosidl_generator_c")]
extern "C" {
    fn vizanti_msgs__srv__SetNodeParameter_Response__init(msg: *mut SetNodeParameter_Response) -> bool;
    fn vizanti_msgs__srv__SetNodeParameter_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetNodeParameter_Response>, size: usize) -> bool;
    fn vizanti_msgs__srv__SetNodeParameter_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetNodeParameter_Response>);
    fn vizanti_msgs__srv__SetNodeParameter_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetNodeParameter_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetNodeParameter_Response>) -> bool;
}

// Corresponds to vizanti_msgs__srv__SetNodeParameter_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetNodeParameter_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: rosidl_runtime_rs::String,

}



impl Default for SetNodeParameter_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vizanti_msgs__srv__SetNodeParameter_Response__init(&mut msg as *mut _) {
        panic!("Call to vizanti_msgs__srv__SetNodeParameter_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetNodeParameter_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__SetNodeParameter_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__SetNodeParameter_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__SetNodeParameter_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetNodeParameter_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetNodeParameter_Response where Self: Sized {
  const TYPE_NAME: &'static str = "vizanti_msgs/srv/SetNodeParameter_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__SetNodeParameter_Response() }
  }
}


#[link(name = "vizanti_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__SaveMap_Request() -> *const std::ffi::c_void;
}

#[link(name = "vizanti_msgs__rosidl_generator_c")]
extern "C" {
    fn vizanti_msgs__srv__SaveMap_Request__init(msg: *mut SaveMap_Request) -> bool;
    fn vizanti_msgs__srv__SaveMap_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SaveMap_Request>, size: usize) -> bool;
    fn vizanti_msgs__srv__SaveMap_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SaveMap_Request>);
    fn vizanti_msgs__srv__SaveMap_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SaveMap_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SaveMap_Request>) -> bool;
}

// Corresponds to vizanti_msgs__srv__SaveMap_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SaveMap_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub file_path: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub topic: rosidl_runtime_rs::String,

}



impl Default for SaveMap_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vizanti_msgs__srv__SaveMap_Request__init(&mut msg as *mut _) {
        panic!("Call to vizanti_msgs__srv__SaveMap_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SaveMap_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__SaveMap_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__SaveMap_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__SaveMap_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SaveMap_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SaveMap_Request where Self: Sized {
  const TYPE_NAME: &'static str = "vizanti_msgs/srv/SaveMap_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__SaveMap_Request() }
  }
}


#[link(name = "vizanti_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__SaveMap_Response() -> *const std::ffi::c_void;
}

#[link(name = "vizanti_msgs__rosidl_generator_c")]
extern "C" {
    fn vizanti_msgs__srv__SaveMap_Response__init(msg: *mut SaveMap_Response) -> bool;
    fn vizanti_msgs__srv__SaveMap_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SaveMap_Response>, size: usize) -> bool;
    fn vizanti_msgs__srv__SaveMap_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SaveMap_Response>);
    fn vizanti_msgs__srv__SaveMap_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SaveMap_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SaveMap_Response>) -> bool;
}

// Corresponds to vizanti_msgs__srv__SaveMap_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SaveMap_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for SaveMap_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vizanti_msgs__srv__SaveMap_Response__init(&mut msg as *mut _) {
        panic!("Call to vizanti_msgs__srv__SaveMap_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SaveMap_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__SaveMap_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__SaveMap_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__SaveMap_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SaveMap_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SaveMap_Response where Self: Sized {
  const TYPE_NAME: &'static str = "vizanti_msgs/srv/SaveMap_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__SaveMap_Response() }
  }
}


#[link(name = "vizanti_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__LoadMap_Request() -> *const std::ffi::c_void;
}

#[link(name = "vizanti_msgs__rosidl_generator_c")]
extern "C" {
    fn vizanti_msgs__srv__LoadMap_Request__init(msg: *mut LoadMap_Request) -> bool;
    fn vizanti_msgs__srv__LoadMap_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LoadMap_Request>, size: usize) -> bool;
    fn vizanti_msgs__srv__LoadMap_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LoadMap_Request>);
    fn vizanti_msgs__srv__LoadMap_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LoadMap_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<LoadMap_Request>) -> bool;
}

// Corresponds to vizanti_msgs__srv__LoadMap_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LoadMap_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub file_path: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub topic: rosidl_runtime_rs::String,

}



impl Default for LoadMap_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vizanti_msgs__srv__LoadMap_Request__init(&mut msg as *mut _) {
        panic!("Call to vizanti_msgs__srv__LoadMap_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LoadMap_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__LoadMap_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__LoadMap_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__LoadMap_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LoadMap_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LoadMap_Request where Self: Sized {
  const TYPE_NAME: &'static str = "vizanti_msgs/srv/LoadMap_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__LoadMap_Request() }
  }
}


#[link(name = "vizanti_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__LoadMap_Response() -> *const std::ffi::c_void;
}

#[link(name = "vizanti_msgs__rosidl_generator_c")]
extern "C" {
    fn vizanti_msgs__srv__LoadMap_Response__init(msg: *mut LoadMap_Response) -> bool;
    fn vizanti_msgs__srv__LoadMap_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LoadMap_Response>, size: usize) -> bool;
    fn vizanti_msgs__srv__LoadMap_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LoadMap_Response>);
    fn vizanti_msgs__srv__LoadMap_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LoadMap_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<LoadMap_Response>) -> bool;
}

// Corresponds to vizanti_msgs__srv__LoadMap_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LoadMap_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for LoadMap_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vizanti_msgs__srv__LoadMap_Response__init(&mut msg as *mut _) {
        panic!("Call to vizanti_msgs__srv__LoadMap_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LoadMap_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__LoadMap_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__LoadMap_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__LoadMap_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LoadMap_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LoadMap_Response where Self: Sized {
  const TYPE_NAME: &'static str = "vizanti_msgs/srv/LoadMap_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__LoadMap_Response() }
  }
}


#[link(name = "vizanti_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__RecordRosbag_Request() -> *const std::ffi::c_void;
}

#[link(name = "vizanti_msgs__rosidl_generator_c")]
extern "C" {
    fn vizanti_msgs__srv__RecordRosbag_Request__init(msg: *mut RecordRosbag_Request) -> bool;
    fn vizanti_msgs__srv__RecordRosbag_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RecordRosbag_Request>, size: usize) -> bool;
    fn vizanti_msgs__srv__RecordRosbag_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RecordRosbag_Request>);
    fn vizanti_msgs__srv__RecordRosbag_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RecordRosbag_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<RecordRosbag_Request>) -> bool;
}

// Corresponds to vizanti_msgs__srv__RecordRosbag_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RecordRosbag_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub topics: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub start: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub path: rosidl_runtime_rs::String,

}



impl Default for RecordRosbag_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vizanti_msgs__srv__RecordRosbag_Request__init(&mut msg as *mut _) {
        panic!("Call to vizanti_msgs__srv__RecordRosbag_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RecordRosbag_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__RecordRosbag_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__RecordRosbag_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__RecordRosbag_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RecordRosbag_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RecordRosbag_Request where Self: Sized {
  const TYPE_NAME: &'static str = "vizanti_msgs/srv/RecordRosbag_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__RecordRosbag_Request() }
  }
}


#[link(name = "vizanti_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__RecordRosbag_Response() -> *const std::ffi::c_void;
}

#[link(name = "vizanti_msgs__rosidl_generator_c")]
extern "C" {
    fn vizanti_msgs__srv__RecordRosbag_Response__init(msg: *mut RecordRosbag_Response) -> bool;
    fn vizanti_msgs__srv__RecordRosbag_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RecordRosbag_Response>, size: usize) -> bool;
    fn vizanti_msgs__srv__RecordRosbag_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RecordRosbag_Response>);
    fn vizanti_msgs__srv__RecordRosbag_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RecordRosbag_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<RecordRosbag_Response>) -> bool;
}

// Corresponds to vizanti_msgs__srv__RecordRosbag_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RecordRosbag_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for RecordRosbag_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vizanti_msgs__srv__RecordRosbag_Response__init(&mut msg as *mut _) {
        panic!("Call to vizanti_msgs__srv__RecordRosbag_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RecordRosbag_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__RecordRosbag_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__RecordRosbag_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__RecordRosbag_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RecordRosbag_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RecordRosbag_Response where Self: Sized {
  const TYPE_NAME: &'static str = "vizanti_msgs/srv/RecordRosbag_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__RecordRosbag_Response() }
  }
}


#[link(name = "vizanti_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__ManageNode_Request() -> *const std::ffi::c_void;
}

#[link(name = "vizanti_msgs__rosidl_generator_c")]
extern "C" {
    fn vizanti_msgs__srv__ManageNode_Request__init(msg: *mut ManageNode_Request) -> bool;
    fn vizanti_msgs__srv__ManageNode_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ManageNode_Request>, size: usize) -> bool;
    fn vizanti_msgs__srv__ManageNode_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ManageNode_Request>);
    fn vizanti_msgs__srv__ManageNode_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ManageNode_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ManageNode_Request>) -> bool;
}

// Corresponds to vizanti_msgs__srv__ManageNode_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ManageNode_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub node: rosidl_runtime_rs::String,

}



impl Default for ManageNode_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vizanti_msgs__srv__ManageNode_Request__init(&mut msg as *mut _) {
        panic!("Call to vizanti_msgs__srv__ManageNode_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ManageNode_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__ManageNode_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__ManageNode_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__ManageNode_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ManageNode_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ManageNode_Request where Self: Sized {
  const TYPE_NAME: &'static str = "vizanti_msgs/srv/ManageNode_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__ManageNode_Request() }
  }
}


#[link(name = "vizanti_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__ManageNode_Response() -> *const std::ffi::c_void;
}

#[link(name = "vizanti_msgs__rosidl_generator_c")]
extern "C" {
    fn vizanti_msgs__srv__ManageNode_Response__init(msg: *mut ManageNode_Response) -> bool;
    fn vizanti_msgs__srv__ManageNode_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ManageNode_Response>, size: usize) -> bool;
    fn vizanti_msgs__srv__ManageNode_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ManageNode_Response>);
    fn vizanti_msgs__srv__ManageNode_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ManageNode_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ManageNode_Response>) -> bool;
}

// Corresponds to vizanti_msgs__srv__ManageNode_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ManageNode_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for ManageNode_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vizanti_msgs__srv__ManageNode_Response__init(&mut msg as *mut _) {
        panic!("Call to vizanti_msgs__srv__ManageNode_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ManageNode_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__ManageNode_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__ManageNode_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__ManageNode_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ManageNode_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ManageNode_Response where Self: Sized {
  const TYPE_NAME: &'static str = "vizanti_msgs/srv/ManageNode_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__ManageNode_Response() }
  }
}


#[link(name = "vizanti_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__ListPackages_Request() -> *const std::ffi::c_void;
}

#[link(name = "vizanti_msgs__rosidl_generator_c")]
extern "C" {
    fn vizanti_msgs__srv__ListPackages_Request__init(msg: *mut ListPackages_Request) -> bool;
    fn vizanti_msgs__srv__ListPackages_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ListPackages_Request>, size: usize) -> bool;
    fn vizanti_msgs__srv__ListPackages_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ListPackages_Request>);
    fn vizanti_msgs__srv__ListPackages_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ListPackages_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ListPackages_Request>) -> bool;
}

// Corresponds to vizanti_msgs__srv__ListPackages_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListPackages_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for ListPackages_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vizanti_msgs__srv__ListPackages_Request__init(&mut msg as *mut _) {
        panic!("Call to vizanti_msgs__srv__ListPackages_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ListPackages_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__ListPackages_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__ListPackages_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__ListPackages_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ListPackages_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ListPackages_Request where Self: Sized {
  const TYPE_NAME: &'static str = "vizanti_msgs/srv/ListPackages_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__ListPackages_Request() }
  }
}


#[link(name = "vizanti_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__ListPackages_Response() -> *const std::ffi::c_void;
}

#[link(name = "vizanti_msgs__rosidl_generator_c")]
extern "C" {
    fn vizanti_msgs__srv__ListPackages_Response__init(msg: *mut ListPackages_Response) -> bool;
    fn vizanti_msgs__srv__ListPackages_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ListPackages_Response>, size: usize) -> bool;
    fn vizanti_msgs__srv__ListPackages_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ListPackages_Response>);
    fn vizanti_msgs__srv__ListPackages_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ListPackages_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ListPackages_Response>) -> bool;
}

// Corresponds to vizanti_msgs__srv__ListPackages_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListPackages_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub packages: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for ListPackages_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vizanti_msgs__srv__ListPackages_Response__init(&mut msg as *mut _) {
        panic!("Call to vizanti_msgs__srv__ListPackages_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ListPackages_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__ListPackages_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__ListPackages_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__ListPackages_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ListPackages_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ListPackages_Response where Self: Sized {
  const TYPE_NAME: &'static str = "vizanti_msgs/srv/ListPackages_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__ListPackages_Response() }
  }
}


#[link(name = "vizanti_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__ListExecutables_Request() -> *const std::ffi::c_void;
}

#[link(name = "vizanti_msgs__rosidl_generator_c")]
extern "C" {
    fn vizanti_msgs__srv__ListExecutables_Request__init(msg: *mut ListExecutables_Request) -> bool;
    fn vizanti_msgs__srv__ListExecutables_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ListExecutables_Request>, size: usize) -> bool;
    fn vizanti_msgs__srv__ListExecutables_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ListExecutables_Request>);
    fn vizanti_msgs__srv__ListExecutables_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ListExecutables_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ListExecutables_Request>) -> bool;
}

// Corresponds to vizanti_msgs__srv__ListExecutables_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListExecutables_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub package: rosidl_runtime_rs::String,

}



impl Default for ListExecutables_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vizanti_msgs__srv__ListExecutables_Request__init(&mut msg as *mut _) {
        panic!("Call to vizanti_msgs__srv__ListExecutables_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ListExecutables_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__ListExecutables_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__ListExecutables_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__ListExecutables_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ListExecutables_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ListExecutables_Request where Self: Sized {
  const TYPE_NAME: &'static str = "vizanti_msgs/srv/ListExecutables_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__ListExecutables_Request() }
  }
}


#[link(name = "vizanti_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__ListExecutables_Response() -> *const std::ffi::c_void;
}

#[link(name = "vizanti_msgs__rosidl_generator_c")]
extern "C" {
    fn vizanti_msgs__srv__ListExecutables_Response__init(msg: *mut ListExecutables_Response) -> bool;
    fn vizanti_msgs__srv__ListExecutables_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ListExecutables_Response>, size: usize) -> bool;
    fn vizanti_msgs__srv__ListExecutables_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ListExecutables_Response>);
    fn vizanti_msgs__srv__ListExecutables_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ListExecutables_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ListExecutables_Response>) -> bool;
}

// Corresponds to vizanti_msgs__srv__ListExecutables_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListExecutables_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub executables: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for ListExecutables_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vizanti_msgs__srv__ListExecutables_Response__init(&mut msg as *mut _) {
        panic!("Call to vizanti_msgs__srv__ListExecutables_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ListExecutables_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__ListExecutables_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__ListExecutables_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__ListExecutables_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ListExecutables_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ListExecutables_Response where Self: Sized {
  const TYPE_NAME: &'static str = "vizanti_msgs/srv/ListExecutables_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__ListExecutables_Response() }
  }
}


#[link(name = "vizanti_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__ListLifecycles_Request() -> *const std::ffi::c_void;
}

#[link(name = "vizanti_msgs__rosidl_generator_c")]
extern "C" {
    fn vizanti_msgs__srv__ListLifecycles_Request__init(msg: *mut ListLifecycles_Request) -> bool;
    fn vizanti_msgs__srv__ListLifecycles_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ListLifecycles_Request>, size: usize) -> bool;
    fn vizanti_msgs__srv__ListLifecycles_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ListLifecycles_Request>);
    fn vizanti_msgs__srv__ListLifecycles_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ListLifecycles_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ListLifecycles_Request>) -> bool;
}

// Corresponds to vizanti_msgs__srv__ListLifecycles_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListLifecycles_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for ListLifecycles_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vizanti_msgs__srv__ListLifecycles_Request__init(&mut msg as *mut _) {
        panic!("Call to vizanti_msgs__srv__ListLifecycles_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ListLifecycles_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__ListLifecycles_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__ListLifecycles_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__ListLifecycles_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ListLifecycles_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ListLifecycles_Request where Self: Sized {
  const TYPE_NAME: &'static str = "vizanti_msgs/srv/ListLifecycles_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__ListLifecycles_Request() }
  }
}


#[link(name = "vizanti_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__ListLifecycles_Response() -> *const std::ffi::c_void;
}

#[link(name = "vizanti_msgs__rosidl_generator_c")]
extern "C" {
    fn vizanti_msgs__srv__ListLifecycles_Response__init(msg: *mut ListLifecycles_Response) -> bool;
    fn vizanti_msgs__srv__ListLifecycles_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ListLifecycles_Response>, size: usize) -> bool;
    fn vizanti_msgs__srv__ListLifecycles_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ListLifecycles_Response>);
    fn vizanti_msgs__srv__ListLifecycles_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ListLifecycles_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ListLifecycles_Response>) -> bool;
}

// Corresponds to vizanti_msgs__srv__ListLifecycles_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListLifecycles_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub nodes: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub states: rosidl_runtime_rs::Sequence<i8>,

}



impl Default for ListLifecycles_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vizanti_msgs__srv__ListLifecycles_Response__init(&mut msg as *mut _) {
        panic!("Call to vizanti_msgs__srv__ListLifecycles_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ListLifecycles_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__ListLifecycles_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__ListLifecycles_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_msgs__srv__ListLifecycles_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ListLifecycles_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ListLifecycles_Response where Self: Sized {
  const TYPE_NAME: &'static str = "vizanti_msgs/srv/ListLifecycles_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vizanti_msgs__srv__ListLifecycles_Response() }
  }
}






#[link(name = "vizanti_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__vizanti_msgs__srv__GetNodeParameters() -> *const std::ffi::c_void;
}

// Corresponds to vizanti_msgs__srv__GetNodeParameters
#[allow(missing_docs, non_camel_case_types)]
pub struct GetNodeParameters;

impl rosidl_runtime_rs::Service for GetNodeParameters {
    type Request = GetNodeParameters_Request;
    type Response = GetNodeParameters_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__vizanti_msgs__srv__GetNodeParameters() }
    }
}




#[link(name = "vizanti_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__vizanti_msgs__srv__SetNodeParameter() -> *const std::ffi::c_void;
}

// Corresponds to vizanti_msgs__srv__SetNodeParameter
#[allow(missing_docs, non_camel_case_types)]
pub struct SetNodeParameter;

impl rosidl_runtime_rs::Service for SetNodeParameter {
    type Request = SetNodeParameter_Request;
    type Response = SetNodeParameter_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__vizanti_msgs__srv__SetNodeParameter() }
    }
}




#[link(name = "vizanti_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__vizanti_msgs__srv__SaveMap() -> *const std::ffi::c_void;
}

// Corresponds to vizanti_msgs__srv__SaveMap
#[allow(missing_docs, non_camel_case_types)]
pub struct SaveMap;

impl rosidl_runtime_rs::Service for SaveMap {
    type Request = SaveMap_Request;
    type Response = SaveMap_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__vizanti_msgs__srv__SaveMap() }
    }
}




#[link(name = "vizanti_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__vizanti_msgs__srv__LoadMap() -> *const std::ffi::c_void;
}

// Corresponds to vizanti_msgs__srv__LoadMap
#[allow(missing_docs, non_camel_case_types)]
pub struct LoadMap;

impl rosidl_runtime_rs::Service for LoadMap {
    type Request = LoadMap_Request;
    type Response = LoadMap_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__vizanti_msgs__srv__LoadMap() }
    }
}




#[link(name = "vizanti_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__vizanti_msgs__srv__RecordRosbag() -> *const std::ffi::c_void;
}

// Corresponds to vizanti_msgs__srv__RecordRosbag
#[allow(missing_docs, non_camel_case_types)]
pub struct RecordRosbag;

impl rosidl_runtime_rs::Service for RecordRosbag {
    type Request = RecordRosbag_Request;
    type Response = RecordRosbag_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__vizanti_msgs__srv__RecordRosbag() }
    }
}




#[link(name = "vizanti_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__vizanti_msgs__srv__ManageNode() -> *const std::ffi::c_void;
}

// Corresponds to vizanti_msgs__srv__ManageNode
#[allow(missing_docs, non_camel_case_types)]
pub struct ManageNode;

impl rosidl_runtime_rs::Service for ManageNode {
    type Request = ManageNode_Request;
    type Response = ManageNode_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__vizanti_msgs__srv__ManageNode() }
    }
}




#[link(name = "vizanti_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__vizanti_msgs__srv__ListPackages() -> *const std::ffi::c_void;
}

// Corresponds to vizanti_msgs__srv__ListPackages
#[allow(missing_docs, non_camel_case_types)]
pub struct ListPackages;

impl rosidl_runtime_rs::Service for ListPackages {
    type Request = ListPackages_Request;
    type Response = ListPackages_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__vizanti_msgs__srv__ListPackages() }
    }
}




#[link(name = "vizanti_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__vizanti_msgs__srv__ListExecutables() -> *const std::ffi::c_void;
}

// Corresponds to vizanti_msgs__srv__ListExecutables
#[allow(missing_docs, non_camel_case_types)]
pub struct ListExecutables;

impl rosidl_runtime_rs::Service for ListExecutables {
    type Request = ListExecutables_Request;
    type Response = ListExecutables_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__vizanti_msgs__srv__ListExecutables() }
    }
}




#[link(name = "vizanti_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__vizanti_msgs__srv__ListLifecycles() -> *const std::ffi::c_void;
}

// Corresponds to vizanti_msgs__srv__ListLifecycles
#[allow(missing_docs, non_camel_case_types)]
pub struct ListLifecycles;

impl rosidl_runtime_rs::Service for ListLifecycles {
    type Request = ListLifecycles_Request;
    type Response = ListLifecycles_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__vizanti_msgs__srv__ListLifecycles() }
    }
}


