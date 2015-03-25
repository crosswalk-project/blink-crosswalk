// Copyright (C) 2013 Samsung Electronics Corporation. All rights reserved.
// Copyright (C) 2015 Intel Corporation All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef WebCLObject_h
#define WebCLObject_h

#if ENABLE(WEBCL)

#include "modules/webcl/WebCLException.h"

#include <wtf/RefCounted.h>
#include <wtf/WeakPtr.h>

namespace blink {
class ExceptionState;
class WebCLContext;

// WebCLObject is the base class of WebCommandQueue, WebCLProgram, WebCLKernel,
// WebCLMemoryObject/WebCLBuffer/WebCLImage, WebCLEvent/WebCLUserEvent, WebCLSampler.
// They are owned by WebCLContext through weakptr for lifecycle tracking.
class WebCLObject : public RefCounted<WebCLObject> {
public:
    virtual ~WebCLObject();
    WeakPtr<WebCLObject> createWeakPtr() { return m_weakFactory.createWeakPtr(); }
    WebCLContext* context();

    void setContext(WebCLContext* context);
    virtual void release() { ASSERT_NOT_REACHED(); }

protected:
    explicit WebCLObject(WebCLContext* context);
    // Some object isn't associated with WebContext in constructor by developer.
    // but at runtime by OpenCL. Such as: WebCLEvent
    WebCLObject();

    WeakPtrFactory<WebCLObject> m_weakFactory;
    WebCLContext* m_context;
};

} // namespace blink

#endif // ENABLE(WEBCL)
#endif // WebCLObject_h
