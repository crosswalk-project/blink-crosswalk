// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTransitionPageTurn.h"

namespace blink {

    ScriptValue CCTransitionPageTurn::actionWithSize(ScriptState* scriptState, CCSize* arg0) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCTransitionPageTurn*)m_cocos2d_impl)->actionWithSize( *_arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    bool CCTransitionPageTurn::initWithDuration(float arg0, ScriptValue& arg1_wrapper, bool arg2) {
        SCRIPT_VALUE_WRAPPER(CCScene, arg1_wrapper, arg1);
        cocos2d::CCScene* _arg1 = (cocos2d::CCScene*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCTransitionPageTurn*)m_cocos2d_impl)->initWithDuration((float)(arg0),  _arg1, (bool)(arg2));
        
        
        return ret_impl;
    }

    ScriptValue CCTransitionPageTurn::createInternal(ScriptState* scriptState, float arg0, ScriptValue& arg1_wrapper, bool arg2) {
        SCRIPT_VALUE_WRAPPER(CCScene, arg1_wrapper, arg1);
        cocos2d::CCScene* _arg1 = (cocos2d::CCScene*)(arg1->getCocos2dImpl());

        cocos2d::CCTransitionPageTurn* ret_impl = cocos2d::CCTransitionPageTurn::create((float)(arg0),  _arg1, (bool)(arg2));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTransitionPageTurn)
        
    }
    cocos2d::CCTransitionPageTurn* CCTransitionPageTurn::getCocos2dImpl() {
        return (cocos2d::CCTransitionPageTurn*)m_cocos2d_impl;
    }


    CCTransitionPageTurn::CCTransitionPageTurn() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTransitionPageTurn> CCTransitionPageTurn::create()
    {
        RefPtrWillBeRawPtr<CCTransitionPageTurn> ret = adoptRefWillBeNoop(new CCTransitionPageTurn());
        cocos2d::CCTransitionPageTurn* impl = new cocos2d::CCTransitionPageTurn();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCTransitionPageTurn::~CCTransitionPageTurn() {
    }
} // namespace blink
