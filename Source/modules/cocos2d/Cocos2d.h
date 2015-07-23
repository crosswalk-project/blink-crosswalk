// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef Cocos2d_h
#define Cocos2d_h

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"

#include "modules/cocos2d/cocos2d_class.hpp"
#include "CCGraphicsContext3DImpl.h"

namespace blink {

class CCGraphicsContext3DImpl;
class WebGLRenderingContext;
//class CCGraphicsContext3D;

class Cocos2d : public GarbageCollectedFinalized<Cocos2d>, public ScriptWrappable {
    DEFINE_WRAPPERTYPEINFO();
public:
    static Cocos2d* create()
    {
        return new Cocos2d();
    }

    ~Cocos2d();
    void trace(Visitor*);

    void setContext(WebGLRenderingContext* context);

    void glEnableVertexAttribs(unsigned int flags);

    void forceGC();
protected:
    Member<CCDirector>  m_director;
    Member<CCApplication>  m_application;

private:
    Cocos2d();

    CCGraphicsContext3D* m_pGraphicsContext3D;
};

} // namespace blink

#endif // Cocos2d_h
