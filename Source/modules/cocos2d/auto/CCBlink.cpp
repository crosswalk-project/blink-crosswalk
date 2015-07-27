// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCBlink.h"

namespace blink {

    void CCBlink::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCBlink*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    ScriptValue CCBlink::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCBlink*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    bool CCBlink::initWithDuration(float arg0, unsigned int arg1) {

        bool ret_impl = ((cocos2d::CCBlink*)m_cocos2d_impl)->initWithDuration((float)(arg0), (unsigned int)(arg1));
        
        
        return ret_impl;
    }

    void CCBlink::stop() {

        ((cocos2d::CCBlink*)m_cocos2d_impl)->stop();
    }

    void CCBlink::update(float arg0) {

        ((cocos2d::CCBlink*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCBlink::createInternal(ScriptState* scriptState, float arg0, unsigned int arg1) {

        cocos2d::CCBlink* ret_impl = cocos2d::CCBlink::create((float)(arg0), (unsigned int)(arg1));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCBlink)
        
    }
    cocos2d::CCBlink* CCBlink::getCocos2dImpl() {
        return (cocos2d::CCBlink*)m_cocos2d_impl;
    }


    CCBlink::CCBlink() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCBlink> CCBlink::create()
    {
        RefPtrWillBeRawPtr<CCBlink> ret = adoptRefWillBeNoop(new CCBlink());
        cocos2d::CCBlink* impl = new cocos2d::CCBlink();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCBlink::~CCBlink() {
    }
} // namespace blink
