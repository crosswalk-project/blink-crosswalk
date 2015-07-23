// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTimer.h"

namespace blink {

    float CCTimer::getInterval() {

        float ret_impl = ((cocos2d::CCTimer*)m_cocos2d_impl)->getInterval();
        
        
        return ret_impl;
    }

    void CCTimer::setInterval(float arg0) {

        ((cocos2d::CCTimer*)m_cocos2d_impl)->setInterval((float)(arg0));
    }

    bool CCTimer::initWithScriptHandler(int arg0, float arg1) {

        bool ret_impl = ((cocos2d::CCTimer*)m_cocos2d_impl)->initWithScriptHandler((int)(arg0), (float)(arg1));
        
        
        return ret_impl;
    }

    void CCTimer::update(float arg0) {

        ((cocos2d::CCTimer*)m_cocos2d_impl)->update((float)(arg0));
    }

    int CCTimer::getScriptHandler() {

        int ret_impl = ((cocos2d::CCTimer*)m_cocos2d_impl)->getScriptHandler();
        
        
        return ret_impl;
    }

    ScriptValue CCTimer::timerWithScriptHandler(ScriptState* scriptState, int arg0, float arg1) {

        cocos2d::CCTimer* ret_impl = cocos2d::CCTimer::timerWithScriptHandler((int)(arg0), (float)(arg1));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTimer)
        
    }
    cocos2d::CCTimer* CCTimer::getCocos2dImpl() {
        return (cocos2d::CCTimer*)m_cocos2d_impl;
    }


    CCTimer::CCTimer() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTimer> CCTimer::create()
    {
        RefPtrWillBeRawPtr<CCTimer> ret = adoptRefWillBeNoop(new CCTimer());
        cocos2d::CCTimer* impl = new cocos2d::CCTimer();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCTimer::~CCTimer() {
    }
} // namespace blink
