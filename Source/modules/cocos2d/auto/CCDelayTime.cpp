// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCDelayTime.h"

namespace blink {

    void CCDelayTime::update(float arg0) {

        ((cocos2d::CCDelayTime*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCDelayTime::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCDelayTime*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    ScriptValue CCDelayTime::createInternal(ScriptState* scriptState, float arg0) {

        cocos2d::CCDelayTime* ret_impl = cocos2d::CCDelayTime::create((float)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCDelayTime)
        
    }
    cocos2d::CCDelayTime* CCDelayTime::getCocos2dImpl() {
        return (cocos2d::CCDelayTime*)m_cocos2d_impl;
    }


    CCDelayTime::CCDelayTime() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCDelayTime> CCDelayTime::create()
    {
        RefPtrWillBeRawPtr<CCDelayTime> ret = adoptRefWillBeNoop(new CCDelayTime());
        cocos2d::CCDelayTime* impl = new cocos2d::CCDelayTime();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCDelayTime::~CCDelayTime() {
    }
} // namespace blink
