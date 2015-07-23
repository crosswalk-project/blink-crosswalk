// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCFollow.h"

namespace blink {

    bool CCFollow::initWithTarget(ScriptValue& arg0_wrapper, CCRect* arg1) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());
        cocos2d::CCRect* _arg1 = (cocos2d::CCRect*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCFollow*)m_cocos2d_impl)->initWithTarget( _arg0,  *_arg1);
        
        
        return ret_impl;
    }

    void CCFollow::stop() {

        ((cocos2d::CCFollow*)m_cocos2d_impl)->stop();
    }

    void CCFollow::setBoudarySet(bool arg0) {

        ((cocos2d::CCFollow*)m_cocos2d_impl)->setBoudarySet((bool)(arg0));
    }

    void CCFollow::step(float arg0) {

        ((cocos2d::CCFollow*)m_cocos2d_impl)->step((float)(arg0));
    }

    bool CCFollow::isDone() {

        bool ret_impl = ((cocos2d::CCFollow*)m_cocos2d_impl)->isDone();
        
        
        return ret_impl;
    }

    bool CCFollow::isBoundarySet() {

        bool ret_impl = ((cocos2d::CCFollow*)m_cocos2d_impl)->isBoundarySet();
        
        
        return ret_impl;
    }

    ScriptValue CCFollow::createInternal(ScriptState* scriptState, ScriptValue& arg0_wrapper, CCRect* arg1) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());
        cocos2d::CCRect* _arg1 = (cocos2d::CCRect*)(arg1->getCocos2dImpl());

        cocos2d::CCFollow* ret_impl = cocos2d::CCFollow::create( _arg0,  *_arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCFollow)
        
    }
    cocos2d::CCFollow* CCFollow::getCocos2dImpl() {
        return (cocos2d::CCFollow*)m_cocos2d_impl;
    }


    CCFollow::CCFollow() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCFollow> CCFollow::create()
    {
        RefPtrWillBeRawPtr<CCFollow> ret = adoptRefWillBeNoop(new CCFollow());
        cocos2d::CCFollow* impl = new cocos2d::CCFollow();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCFollow::~CCFollow() {
    }
} // namespace blink
