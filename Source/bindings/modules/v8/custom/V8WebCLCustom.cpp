// Copyright (C) 2015 Intel Corporation All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#if ENABLE(WEBCL)

#include "bindings/core/v8/V8WebGLRenderingContext.h"
#include "bindings/modules/v8/V8WebCL.h"
#include "bindings/modules/v8/V8WebCLDevice.h"
#include "bindings/modules/v8/V8WebCLPlatform.h"

namespace blink {

static void createContext1Method(const v8::FunctionCallbackInfo<v8::Value>& info, bool hasGLContext)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "createContext", "WebCL", info.Holder(), info.GetIsolate());
    WebCL* impl = V8WebCL::toImpl(info.Holder());
    Vector<RefPtr<WebCLDevice>> devices;
    WebGLRenderingContext* glContext = nullptr;
    unsigned preIndex = hasGLContext ? 1:0;
    {
        if (hasGLContext)
            glContext = V8WebGLRenderingContext::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        TONATIVE_VOID_EXCEPTIONSTATE_INTERNAL(devices, (toRefPtrNativeArray<WebCLDevice, V8WebCLDevice>(info[preIndex + 0], 1, info.GetIsolate(), exceptionState)), exceptionState);
    }
    RefPtr<WebCLContext> result = impl->createContext(glContext, devices, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void createContext2Method(const v8::FunctionCallbackInfo<v8::Value>& info, bool hasGLContext)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "createContext", "WebCL", info.Holder(), info.GetIsolate());
    WebCL* impl = V8WebCL::toImpl(info.Holder());
    WebCLDevice* device;
    WebGLRenderingContext* glContext = nullptr;
    unsigned preIndex = hasGLContext ? 1:0;
    {
        if (hasGLContext)
            glContext = V8WebGLRenderingContext::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        device = V8WebCLDevice::toImplWithTypeCheck(info.GetIsolate(), info[preIndex + 0]);
    }
    RefPtr<WebCLContext> result = impl->createContext(glContext, device, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void createContext3Method(const v8::FunctionCallbackInfo<v8::Value>& info, bool hasGLContext)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "createContext", "WebCL", info.Holder(), info.GetIsolate());
    WebCL* impl = V8WebCL::toImpl(info.Holder());
    WebCLPlatform* platform;
    WebGLRenderingContext* glContext = nullptr;
    unsigned preIndex = hasGLContext ? 1:0;
    {
        if (hasGLContext)
            glContext = V8WebGLRenderingContext::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        platform = V8WebCLPlatform::toImplWithTypeCheck(info.GetIsolate(), info[preIndex + 0]);
    }
    RefPtr<WebCLContext> result = impl->createContext(glContext, platform, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void createContext4Method(const v8::FunctionCallbackInfo<v8::Value>& info, bool hasGLContext)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "createContext", "WebCL", info.Holder(), info.GetIsolate());
    WebCL* impl = V8WebCL::toImpl(info.Holder());
    unsigned deviceType;
    WebGLRenderingContext* glContext = nullptr;
    unsigned preIndex = hasGLContext ? 1:0;
    {
        if (hasGLContext)
            glContext = V8WebGLRenderingContext::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        TONATIVE_VOID_EXCEPTIONSTATE_INTERNAL(deviceType, toUInt32(info[preIndex + 0], exceptionState), exceptionState);
    }
    RefPtr<WebCLContext> result = impl->createContext(glContext, deviceType, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void createContext5Method(const v8::FunctionCallbackInfo<v8::Value>& info, bool hasGLContext)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "createContext", "WebCL", info.Holder(), info.GetIsolate());
    WebCL* impl = V8WebCL::toImpl(info.Holder());
    WebCLPlatform* platform;
    unsigned deviceType;
    WebGLRenderingContext* glContext = nullptr;
    unsigned preIndex = hasGLContext ? 1:0;
    {
        if (hasGLContext)
            glContext = V8WebGLRenderingContext::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        platform = V8WebCLPlatform::toImplWithTypeCheck(info.GetIsolate(), info[preIndex + 0]);
        TONATIVE_VOID_EXCEPTIONSTATE_INTERNAL(deviceType, toUInt32(info[preIndex + 1], exceptionState), exceptionState);
    }
    RefPtr<WebCLContext> result = impl->createContext(glContext, platform, deviceType, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void createContext6Method(const v8::FunctionCallbackInfo<v8::Value>& info, bool hasGLContext)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "createContext", "WebCL", info.Holder(), info.GetIsolate());
    WebCL* impl = V8WebCL::toImpl(info.Holder());
    WebGLRenderingContext* glContext = nullptr;
    {
        if (hasGLContext)
            glContext = V8WebGLRenderingContext::toImplWithTypeCheck(info.GetIsolate(), info[0]);
    }
    RefPtr<WebCLContext> result = impl->createContext(glContext, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void createContextMethodWithGL(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "createContext", "WebCL", info.Holder(), info.GetIsolate());
    switch (info.Length()) {
    case 1:
        createContext6Method(info, true);
    case 2:
        if (info[1]->IsArray()) {
            createContext1Method(info, true);
            return;
        }
        if (V8WebCLDevice::hasInstance(info[1], info.GetIsolate())) {
            createContext2Method(info, true);
            return;
        }
        if (V8WebCLPlatform::hasInstance(info[1], info.GetIsolate())) {
            createContext3Method(info, true);
            return;
        }
        createContext4Method(info, true);
        return;
    case 3:
        createContext5Method(info, true);
        return;
    default:
        break;
    }
    exceptionState.throwTypeError("No function was found that matched the signature provided.");
    exceptionState.throwIfNeeded();
}

static void createContextMethodWithoutGL(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "createContext", "WebCL", info.Holder(), info.GetIsolate());
    switch (info.Length()) {
    case 1:
        if (info[0]->IsArray()) {
            createContext1Method(info, false);
            return;
        }
        if (V8WebCLDevice::hasInstance(info[0], info.GetIsolate())) {
            createContext2Method(info, false);
            return;
        }
        if (V8WebCLPlatform::hasInstance(info[0], info.GetIsolate())) {
            createContext3Method(info, false);
            return;
        }
        createContext4Method(info, false);
        return;
    case 2:
        createContext5Method(info, false);
        return;
    default:
        break;
    }
    exceptionState.throwTypeError("No function was found that matched the signature provided.");
    exceptionState.throwIfNeeded();
}

void V8WebCL::createContextMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "createContext", "WebCL", info.Holder(), info.GetIsolate());
    if (info.Length() == 0) {
        createContext6Method(info, false);
    } else {
        if (V8WebGLRenderingContext::hasInstance(info[0], info.GetIsolate())) {
            createContextMethodWithGL(info);
        } else {
            createContextMethodWithoutGL(info);
        }
    }
}

}
#endif // ENABLE(WEBCL)
