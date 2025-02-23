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
// $hash=5e432e7dd8e10b681b96bad3694ba2d0bf79fad6$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_EXTENSION_HANDLER_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_EXTENSION_HANDLER_CTOCPP_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_client_capi.h"
#include "include/capi/cef_extension_handler_capi.h"
#include "include/cef_client.h"
#include "include/cef_extension_handler.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefExtensionHandlerCToCpp
    : public CefCToCppRefCounted<CefExtensionHandlerCToCpp,
                                 CefExtensionHandler,
                                 cef_extension_handler_t> {
 public:
  CefExtensionHandlerCToCpp();
  virtual ~CefExtensionHandlerCToCpp();

  // CefExtensionHandler methods.
  void OnExtensionLoadFailed(cef_errorcode_t result) override;
  void OnExtensionLoaded(CefRefPtr<CefExtension> extension) override;
  void OnExtensionUnloaded(CefRefPtr<CefExtension> extension) override;
  bool OnBeforeBackgroundBrowser(CefRefPtr<CefExtension> extension,
                                 const CefString& url,
                                 CefRefPtr<CefClient>& client,
                                 CefBrowserSettings& settings) override;
  bool OnBeforeBrowser(CefRefPtr<CefExtension> extension,
                       CefRefPtr<CefBrowser> browser,
                       CefRefPtr<CefBrowser> active_browser,
                       int index,
                       const CefString& url,
                       bool active,
                       CefWindowInfo& windowInfo,
                       CefRefPtr<CefClient>& client,
                       CefBrowserSettings& settings) override;
  CefRefPtr<CefBrowser> GetActiveBrowser(CefRefPtr<CefExtension> extension,
                                         CefRefPtr<CefBrowser> browser,
                                         bool include_incognito) override;
  bool CanAccessBrowser(CefRefPtr<CefExtension> extension,
                        CefRefPtr<CefBrowser> browser,
                        bool include_incognito,
                        CefRefPtr<CefBrowser> target_browser) override;
  bool GetExtensionResource(
      CefRefPtr<CefExtension> extension,
      CefRefPtr<CefBrowser> browser,
      const CefString& file,
      CefRefPtr<CefGetExtensionResourceCallback> callback) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_EXTENSION_HANDLER_CTOCPP_H_
