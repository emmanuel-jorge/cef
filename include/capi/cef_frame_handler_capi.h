// Copyright (c) 2025 Marshall A. Greenblatt. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//    * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//    * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//    * Neither the name of Google Inc. nor the name Chromium Embedded
// Framework nor the names of its contributors may be used to endorse
// or promote products derived from this software without specific prior
// written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool and should not edited
// by hand. See the translator.README.txt file in the tools directory for
// more information.
//
// $hash=5b34d6cb46ae29d2934b0f3eeecac8e03a9654dd$
//

#ifndef CEF_INCLUDE_CAPI_CEF_FRAME_HANDLER_CAPI_H_
#define CEF_INCLUDE_CAPI_CEF_FRAME_HANDLER_CAPI_H_
#pragma once

#include "include/capi/cef_base_capi.h"
#include "include/capi/cef_browser_capi.h"
#include "include/capi/cef_frame_capi.h"

#ifdef __cplusplus
extern "C" {
#endif

///
/// Implement this structure to handle events related to cef_frame_t life span.
/// The order of callbacks is:
///
/// (1) During initial cef_browser_host_t creation and navigation of the main
/// frame:
/// - cef_frame_handler_t::OnFrameCreated => The initial main frame object has
///   been created. Any commands will be queued until the frame is attached.
/// - cef_frame_handler_t::OnMainFrameChanged => The initial main frame object
///   has been assigned to the browser.
/// - cef_life_span_handler_t::OnAfterCreated => The browser is now valid and
///   can be used.
/// - cef_frame_handler_t::OnFrameAttached => The initial main frame object is
///   now connected to its peer in the renderer process. Commands can be routed.
///
/// (2) During further cef_browser_host_t navigation/loading of the main frame
///     and/or sub-frames:
/// - cef_frame_handler_t::OnFrameCreated => A new main frame or sub-frame
///   object has been created. Any commands will be queued until the frame is
///   attached.
/// - cef_frame_handler_t::OnFrameAttached => A new main frame or sub-frame
///   object is now connected to its peer in the renderer process. Commands can
///   be routed.
/// - cef_frame_handler_t::OnFrameDetached => An existing main frame or sub-
///   frame object has lost its connection to the renderer process. If multiple
///   objects are detached at the same time then notifications will be sent for
///   any sub-frame objects before the main frame object. Commands can no longer
///   be routed and will be discarded.
/// - CefFremeHadler::OnFrameDestroyed => An existing main frame or sub-frame
///   object has been destroyed.
/// - cef_frame_handler_t::OnMainFrameChanged => A new main frame object has
///   been assigned to the browser. This will only occur with cross-origin
///   navigation or re-navigation after renderer process termination (due to
///   crashes, etc).
///
/// (3) During final cef_browser_host_t destruction of the main frame:
/// - cef_frame_handler_t::OnFrameDetached => Any sub-frame objects have lost
///   their connection to the renderer process. Commands can no longer be routed
///   and will be discarded.
/// - CefFreameHandler::OnFrameDestroyed => Any sub-frame objects have been
///   destroyed.
/// - cef_life_span_handler_t::OnBeforeClose => The browser has been destroyed.
/// - cef_frame_handler_t::OnFrameDetached => The main frame object have lost
///   its connection to the renderer process. Notifications will be sent for any
///   sub-frame objects before the main frame object. Commands can no longer be
///   routed and will be discarded.
/// - CefFreameHandler::OnFrameDestroyed => The main frame object has been
///   destroyed.
/// - cef_frame_handler_t::OnMainFrameChanged => The final main frame object has
///   been removed from the browser.
///
/// Special handling applies for cross-origin loading on creation/navigation of
/// sub-frames, and cross-origin loading on creation of new popup browsers. A
/// temporary frame will first be created in the parent frame's renderer
/// process. This temporary frame will never attach and will be discarded after
/// the real cross-origin frame is created in the new/target renderer process.
/// The client will receive creation callbacks for the temporary frame, followed
/// by cross-origin navigation callbacks (2) for the transition from the
/// temporary frame to the real frame. The temporary frame will not receive or
/// execute commands during this transitional period (any sent commands will be
/// discarded).
///
/// When the main frame navigates to a different origin the OnMainFrameChanged
/// callback (2) will be executed with the old and new main frame objects.
///
/// Callbacks will not be executed for placeholders that may be created during
/// pre-commit navigation for sub-frames that do not yet exist in the renderer
/// process. Placeholders will have cef_frame_t::get_identifier() == -4.
///
/// The functions of this structure will be called on the UI thread unless
/// otherwise indicated.
///
typedef struct _cef_frame_handler_t {
  ///
  /// Base structure.
  ///
  cef_base_ref_counted_t base;

  ///
  /// Called when a new frame is created. This will be the first notification
  /// that references |frame|. Any commands that require transport to the
  /// associated renderer process (LoadRequest, SendProcessMessage, GetSource,
  /// etc.) will be queued. The queued commands will be sent before
  /// OnFrameAttached or discarded before OnFrameDestroyed if the frame never
  /// attaches.
  ///
  void(CEF_CALLBACK* on_frame_created)(struct _cef_frame_handler_t* self,
                                       struct _cef_browser_t* browser,
                                       struct _cef_frame_t* frame);

  ///
  /// Called when an existing frame is destroyed. This will be the last
  /// notification that references |frame| and cef_frame_t::is_valid() will
  /// return false (0) for |frame|. If called during browser destruction and
  /// after cef_life_span_handler_t::on_before_close() then
  /// cef_browser_t::is_valid() will return false (0) for |browser|. Any queued
  /// commands that have not been sent will be discarded before this callback.
  ///
  void(CEF_CALLBACK* on_frame_destroyed)(struct _cef_frame_handler_t* self,
                                         struct _cef_browser_t* browser,
                                         struct _cef_frame_t* frame);

  ///
  /// Called when a frame can begin routing commands to/from the associated
  /// renderer process. |reattached| will be true (1) if the frame was re-
  /// attached after exiting the BackForwardCache or after encountering a
  /// recoverable connection error. Any queued commands will now have been
  /// dispatched. This function will not be called for temporary frames created
  /// during cross-origin navigation.
  ///
  void(CEF_CALLBACK* on_frame_attached)(struct _cef_frame_handler_t* self,
                                        struct _cef_browser_t* browser,
                                        struct _cef_frame_t* frame,
                                        int reattached);

  ///
  /// Called when a frame loses its connection to the renderer process. This may
  /// occur when a frame is destroyed, enters the BackForwardCache, or
  /// encounters a rare connection error. In the case of frame destruction this
  /// call will be followed by a (potentially async) call to OnFrameDestroyed.
  /// If frame destruction is occuring synchronously then
  /// cef_frame_t::is_valid() will return false (0) for |frame|. If called
  /// during browser destruction and after
  /// cef_life_span_handler_t::on_before_close() then cef_browser_t::is_valid()
  /// will return false (0) for |browser|. If, in the non-destruction case, the
  /// same frame later exits the BackForwardCache or recovers from a connection
  /// error then there will be a follow-up call to OnFrameAttached. This
  /// function will not be called for temporary frames created during cross-
  /// origin navigation.
  ///
  void(CEF_CALLBACK* on_frame_detached)(struct _cef_frame_handler_t* self,
                                        struct _cef_browser_t* browser,
                                        struct _cef_frame_t* frame);

  ///
  /// Called when the main frame changes due to (a) initial browser creation,
  /// (b) final browser destruction, (c) cross-origin navigation or (d) re-
  /// navigation after renderer process termination (due to crashes, etc).
  /// |old_frame| will be NULL and |new_frame| will be non-NULL when a main
  /// frame is assigned to |browser| for the first time. |old_frame| will be
  /// non-NULL and |new_frame| will be NULL when a main frame is removed from
  /// |browser| for the last time. Both |old_frame| and |new_frame| will be non-
  /// NULL for cross-origin navigations or re-navigation after renderer process
  /// termination. This function will be called after on_frame_created() for
  /// |new_frame| and/or after on_frame_destroyed() for |old_frame|. If called
  /// during browser destruction and after
  /// cef_life_span_handler_t::on_before_close() then cef_browser_t::is_valid()
  /// will return false (0) for |browser|.
  ///
  void(CEF_CALLBACK* on_main_frame_changed)(struct _cef_frame_handler_t* self,
                                            struct _cef_browser_t* browser,
                                            struct _cef_frame_t* old_frame,
                                            struct _cef_frame_t* new_frame);
} cef_frame_handler_t;

#ifdef __cplusplus
}
#endif

#endif  // CEF_INCLUDE_CAPI_CEF_FRAME_HANDLER_CAPI_H_
