// Copyright (C) 2015 Intel Corporation All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#if ENABLE(WEBCL)

#include "bindings/modules/v8/V8WebCLCallback.h"
#include "bindings/modules/v8/V8WebCLDevice.h"
#include "bindings/modules/v8/V8WebCLProgram.h"

namespace blink {

void V8WebCLProgram::buildMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState es(ExceptionState::ExecutionContext, "build", "WebCLProgram", info.Holder(), info.GetIsolate());
    WebCLProgram* impl = V8WebCLProgram::toImpl(info.Holder());
    Vector<RefPtr<WebCLDevice>> devices;
    V8StringResource<TreatNullAndUndefinedAsNullString> options;
    WebCLCallback* whenFinished = nullptr;
    {
        if (info.Length() > 0 && !isUndefinedOrNull(info[0]))
            TONATIVE_VOID_EXCEPTIONSTATE_INTERNAL(devices, (toRefPtrNativeArray<WebCLDevice, V8WebCLDevice>(info[0], 1, info.GetIsolate(), es)), es);

        TOSTRING_VOID_INTERNAL(options, info[1]);
        if (!isUndefinedOrNull(info[2])) {
            if (!info[2]->IsFunction()) {
                es.throwTypeError("The callback provided as parameter 3 is not a function.");
                es.throwIfNeeded();
                return;
            }

            whenFinished = V8WebCLCallback::create(v8::Handle<v8::Function>::Cast(info[2]), ScriptState::current(info.GetIsolate()));
        }
    }

    if (!devices.isEmpty())
        impl->build(devices, options, whenFinished, es);
    else
        impl->build(options, whenFinished, es);

    if (es.hadException())
        es.throwIfNeeded();
}

}
#endif // ENABLE(WEBCL)
