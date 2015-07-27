// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCMoveBy.h"

namespace blink {

    void CCMoveBy::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCMoveBy*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    void CCMoveBy::update(float arg0) {

        ((cocos2d::CCMoveBy*)m_cocos2d_impl)->update((float)(arg0));
    }

    bool CCMoveBy::initWithDuration(float arg0, CCPoint* arg1) {
        cocos2d::CCPoint* _arg1 = (cocos2d::CCPoint*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCMoveBy*)m_cocos2d_impl)->initWithDuration((float)(arg0),  *_arg1);
        
        
        return ret_impl;
    }

    ScriptValue CCMoveBy::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCMoveBy*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    ScriptValue CCMoveBy::createInternal(ScriptState* scriptState, float arg0, CCPoint* arg1) {
        cocos2d::CCPoint* _arg1 = (cocos2d::CCPoint*)(arg1->getCocos2dImpl());

        cocos2d::CCMoveBy* ret_impl = cocos2d::CCMoveBy::create((float)(arg0),  *_arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCMoveBy)
        
    }
    cocos2d::CCMoveBy* CCMoveBy::getCocos2dImpl() {
        return (cocos2d::CCMoveBy*)m_cocos2d_impl;
    }


    CCMoveBy::CCMoveBy() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCMoveBy> CCMoveBy::create()
    {
        RefPtrWillBeRawPtr<CCMoveBy> ret = adoptRefWillBeNoop(new CCMoveBy());
        cocos2d::CCMoveBy* impl = new cocos2d::CCMoveBy();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCMoveBy::~CCMoveBy() {
    }
} // namespace blink
