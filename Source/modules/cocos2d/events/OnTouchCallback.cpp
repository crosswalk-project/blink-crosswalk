// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"
#include "bindings/modules/v8/V8OnTouchCallback.h"

#include "bindings/core/v8/ScriptController.h"
#include "bindings/core/v8/V8Binding.h"
#include "bindings/modules/v8/V8CCTouch.h"
#include "core/dom/ExecutionContext.h"
#include "wtf/Assertions.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

bool V8OnTouchCallback::handleEvent(CCTouch* touch)
{
    if (!canInvokeCallback())
        return true;

    if (m_scriptState->contextIsValid())
        return true;

    ScriptState::Scope scope(m_scriptState.get());
    v8::Handle<v8::Value> touchHandle = toV8(touch, m_scriptState->context()->Global(), m_scriptState->isolate());
    if (touchHandle.IsEmpty()) {
        if (!isScriptControllerTerminating())
            CRASH();
        return true;
    }
    v8::Handle<v8::Value> argv[] = { touchHandle };

    v8::TryCatch exceptionCatcher;
    exceptionCatcher.SetVerbose(true);
    v8::Handle<v8::Value> result = ScriptController::callFunction(m_scriptState->executionContext(), m_callback.newLocal(m_scriptState->isolate()), m_scriptState->context()->Global(), 1, argv, m_scriptState->isolate());
    if (!result.IsEmpty() && result->IsBoolean())
        return result->BooleanValue();
    else
        return false;
}

} // namespace blink
