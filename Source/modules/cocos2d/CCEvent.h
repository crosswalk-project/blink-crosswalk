// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CCEvent_h
#define CCEvent_h

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"

#include "modules/cocos2d/cocos2d_class.hpp"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"


namespace blink {

class CCEvent : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    static PassRefPtrWillBeRawPtr<CCEvent> create()
    {
        RefPtrWillBeRawPtr<CCEvent> ret = adoptRefWillBeNoop(new CCEvent());
        return ret.release();
    }

    ~CCEvent() {};

    cocos2d::CCEvent* getCocos2dImpl() {return (cocos2d::CCEvent*)(m_cocos2d_impl);}
    void setCocos2dImpl(cocos2d::CCEvent* impl) {m_cocos2d_impl = impl;}
    void setCocos2dImpl(cocos2d::CCEvent impl) {m_cocos2d_impl = new cocos2d::CCEvent(impl);}

protected:
    cocos2d::CCEvent* m_cocos2d_impl;

public:
    CCEvent();
};

DEFINE_TYPE_CASTS(CCEvent, CCObject, pCCEvent, true, true);

}

#endif // CCAction_h
