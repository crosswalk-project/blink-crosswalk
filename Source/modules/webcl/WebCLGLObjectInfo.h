// Copyright (C) 2015 Intel Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef WebCLGLObjectInfo_h
#define WebCLGLObjectInfo_h

#if ENABLE(WEBCL)
#include "WebCLConfig.h"

#include <wtf/PassRefPtr.h>
#include <wtf/RefCounted.h>

namespace blink {

class ScriptState;
class ScriptValue;
class WebGLSharedObject;

class WebCLGLObjectInfo : public RefCounted<WebCLGLObjectInfo>, public ScriptWrappable {
    DEFINE_WRAPPERTYPEINFO();
public:
    ~WebCLGLObjectInfo() { }

    static PassRefPtr<WebCLGLObjectInfo> create(unsigned textureTarget, int mipmapLevel, WebGLSharedObject*);

    ScriptValue type(ScriptState*) const;
    ScriptValue textureTarget(ScriptState*) const;
    ScriptValue mipmapLevel(ScriptState*) const;
    ScriptValue glObject(ScriptState*) const;

private:
    WebCLGLObjectInfo(unsigned textureTarget, int mipmapLevel, WebGLSharedObject*);

    unsigned m_textureTarget;
    int m_mipmapLevel;
    WebGLSharedObject* m_glObject;
};

} // namespace blink

#endif // ENABLE(WEBCL)
#endif // WebCLGLObjectInfo_h

