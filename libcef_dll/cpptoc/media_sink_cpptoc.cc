// Copyright (c) 2023 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=34cf5c3fde544a2f8a323ea3f55ed88db0010672$
//

#include "libcef_dll/cpptoc/media_sink_cpptoc.h"
#include "libcef_dll/cpptoc/media_source_cpptoc.h"
#include "libcef_dll/ctocpp/media_sink_device_info_callback_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

cef_string_userfree_t CEF_CALLBACK
media_sink_get_id(struct _cef_media_sink_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefString _retval = CefMediaSinkCppToC::Get(self)->GetId();

  // Return type: string
  return _retval.DetachToUserFree();
}

cef_string_userfree_t CEF_CALLBACK
media_sink_get_name(struct _cef_media_sink_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefString _retval = CefMediaSinkCppToC::Get(self)->GetName();

  // Return type: string
  return _retval.DetachToUserFree();
}

cef_media_sink_icon_type_t CEF_CALLBACK
media_sink_get_icon_type(struct _cef_media_sink_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CEF_MSIT_GENERIC;
  }

  // Execute
  cef_media_sink_icon_type_t _retval =
      CefMediaSinkCppToC::Get(self)->GetIconType();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK media_sink_get_device_info(
    struct _cef_media_sink_t* self,
    struct _cef_media_sink_device_info_callback_t* callback) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: callback; type: refptr_diff
  DCHECK(callback);
  if (!callback) {
    return;
  }

  // Execute
  CefMediaSinkCppToC::Get(self)->GetDeviceInfo(
      CefMediaSinkDeviceInfoCallbackCToCpp::Wrap(callback));
}

int CEF_CALLBACK media_sink_is_cast_sink(struct _cef_media_sink_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval = CefMediaSinkCppToC::Get(self)->IsCastSink();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK media_sink_is_dial_sink(struct _cef_media_sink_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval = CefMediaSinkCppToC::Get(self)->IsDialSink();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK
media_sink_is_compatible_with(struct _cef_media_sink_t* self,
                              struct _cef_media_source_t* source) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: source; type: refptr_same
  DCHECK(source);
  if (!source) {
    return 0;
  }

  // Execute
  bool _retval = CefMediaSinkCppToC::Get(self)->IsCompatibleWith(
      CefMediaSourceCppToC::Unwrap(source));

  // Return type: bool
  return _retval;
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefMediaSinkCppToC::CefMediaSinkCppToC() {
  GetStruct()->get_id = media_sink_get_id;
  GetStruct()->get_name = media_sink_get_name;
  GetStruct()->get_icon_type = media_sink_get_icon_type;
  GetStruct()->get_device_info = media_sink_get_device_info;
  GetStruct()->is_cast_sink = media_sink_is_cast_sink;
  GetStruct()->is_dial_sink = media_sink_is_dial_sink;
  GetStruct()->is_compatible_with = media_sink_is_compatible_with;
}

// DESTRUCTOR - Do not edit by hand.

CefMediaSinkCppToC::~CefMediaSinkCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefMediaSink>
CefCppToCRefCounted<CefMediaSinkCppToC, CefMediaSink, cef_media_sink_t>::
    UnwrapDerived(CefWrapperType type, cef_media_sink_t* s) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefMediaSinkCppToC,
                                   CefMediaSink,
                                   cef_media_sink_t>::kWrapperType =
    WT_MEDIA_SINK;
