// Copyright (c) 2017 The Chromium Embedded Framework Authors. All rights
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

#include "libcef_dll/ctocpp/print_callback_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

void CefPrintCallbackCToCpp::OnPrintFinished(bool ok) {
  cef_print_callback_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_print_finished))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->on_print_finished(_struct,
      ok);
}


// CONSTRUCTOR - Do not edit by hand.

CefPrintCallbackCToCpp::CefPrintCallbackCToCpp() {
}

template<> cef_print_callback_t* CefCToCpp<CefPrintCallbackCToCpp,
    CefPrintCallback, cef_print_callback_t>::UnwrapDerived(CefWrapperType type,
    CefPrintCallback* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#ifndef NDEBUG
template<> base::AtomicRefCount CefCToCpp<CefPrintCallbackCToCpp,
    CefPrintCallback, cef_print_callback_t>::DebugObjCt = 0;
#endif

template<> CefWrapperType CefCToCpp<CefPrintCallbackCToCpp, CefPrintCallback,
    cef_print_callback_t>::kWrapperType = WT_PRINT_CALLBACK;
