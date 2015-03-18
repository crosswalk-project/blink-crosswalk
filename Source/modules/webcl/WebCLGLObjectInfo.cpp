// Copyright (C) 2015 Intel Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#if ENABLE(WEBCL)

#include "bindings/core/v8/V8WebGLBuffer.h"
#include "bindings/core/v8/V8WebGLRenderbuffer.h"
#include "bindings/core/v8/V8WebGLTexture.h"
#include "core/html/canvas/WebGLSharedObject.h"
#include "WebCLGLObjectInfo.h"

namespace blink {

PassRefPtr<WebCLGLObjectInfo> WebCLGLObjectInfo::create(unsigned textureTarget, int mipmapLevel, WebGLSharedObject* glObject)
{
    return adoptRef(new WebCLGLObjectInfo(textureTarget, mipmapLevel, glObject));
}

WebCLGLObjectInfo::WebCLGLObjectInfo(unsigned textureTarget, int mipmapLevel, WebGLSharedObject* glObject)
    : m_textureTarget(textureTarget)
    , m_mipmapLevel(mipmapLevel)
    , m_glObject(glObject)
{
}

ScriptValue WebCLGLObjectInfo::type(ScriptState* scriptState) const
{
    v8::Isolate* isolate = scriptState->isolate();
    if (m_glObject->isBuffer()) {
        return ScriptValue(scriptState, v8::Integer::NewFromUnsigned(isolate, static_cast<unsigned>(CL_GL_OBJECT_BUFFER)));
    } else if (m_glObject->isRenderbuffer()) {
        return ScriptValue(scriptState, v8::Integer::NewFromUnsigned(isolate, static_cast<unsigned>(CL_GL_OBJECT_RENDERBUFFER)));
    } else if (m_glObject->isTexture()) {
        return ScriptValue(scriptState, v8::Integer::NewFromUnsigned(isolate, static_cast<unsigned>(CL_GL_OBJECT_TEXTURE2D)));
    }

    return ScriptValue(scriptState, v8::Undefined(isolate));
}

ScriptValue WebCLGLObjectInfo::textureTarget(ScriptState* scriptState) const
{
    v8::Isolate* isolate = scriptState->isolate();
    if (m_glObject->isTexture()) {
        return ScriptValue(scriptState, v8::Integer::NewFromUnsigned(isolate, m_textureTarget));
    }

    return ScriptValue(scriptState, v8::Undefined(isolate));
}

ScriptValue WebCLGLObjectInfo::mipmapLevel(ScriptState* scriptState) const
{
    v8::Isolate* isolate = scriptState->isolate();
    if (m_glObject->isTexture()) {
        return ScriptValue(scriptState, v8::Integer::New(isolate, m_mipmapLevel));
    }

    return ScriptValue(scriptState, v8::Undefined(isolate));
}

ScriptValue WebCLGLObjectInfo::glObject(ScriptState* scriptState) const
{
    v8::Handle<v8::Object> creationContext = scriptState->context()->Global();
    v8::Isolate* isolate = scriptState->isolate();
    if (m_glObject->isBuffer()) {
        return ScriptValue(scriptState, toV8(static_cast<WebGLBuffer*>(m_glObject), creationContext, isolate));
    } else if (m_glObject->isRenderbuffer()) {
        return ScriptValue(scriptState, toV8(static_cast<WebGLRenderbuffer*>(m_glObject), creationContext, isolate));
    } else if (m_glObject->isTexture()) {
        return ScriptValue(scriptState, toV8(static_cast<WebGLTexture*>(m_glObject), creationContext, isolate));
    }

    return ScriptValue(scriptState, v8::Undefined(isolate));
}

} // namespace blink
#endif // ENABLE(WEBCL)
