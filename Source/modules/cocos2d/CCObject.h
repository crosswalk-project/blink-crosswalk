// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCObject_h__
#define __CCObject_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"

#include "modules/cocos2d/cocos2d_class.hpp"

#include <android/log.h>

namespace cocos2d {
    class CCObject;
}

namespace blink {
    class ScriptValue;
    class ScriptState;

class CCObject : public RefCountedWillBeGarbageCollectedFinalized <CCObject>, public ScriptWrappable {
    DEFINE_WRAPPERTYPEINFO();
public:
    static PassRefPtrWillBeRawPtr<CCObject> create()
    {
        return adoptRefWillBeNoop(new CCObject());
    }

    ~CCObject();
    cocos2d::CCObject* getCocos2dImpl();
    void setCocos2dImpl(cocos2d::CCObject* impl);

    void trace(Visitor* visitor);

    void retain();
    void release();
    ScriptValue copy(ScriptState* scriptState);
    ScriptValue clone(ScriptState* scriptState);
    void autorelease();

    long instanceId();

public:
    cocos2d::CCObject* m_cocos2d_impl;
    //TODO: Store JS extended instance
public:
    CCObject();
    static long s_count;
};

}

#endif // CCObject_h
