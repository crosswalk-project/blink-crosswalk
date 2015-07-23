// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCJumpTo.h"

namespace blink {

    void CCJumpTo::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCJumpTo*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    ScriptValue CCJumpTo::createInternal(ScriptState* scriptState, float arg0, CCPoint* arg1, float arg2, int arg3) {
        cocos2d::CCPoint* _arg1 = (cocos2d::CCPoint*)(arg1->getCocos2dImpl());

        cocos2d::CCJumpTo* ret_impl = cocos2d::CCJumpTo::create((float)(arg0),  *_arg1, (float)(arg2), (int)(arg3));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCJumpTo)
        
    }
    cocos2d::CCJumpTo* CCJumpTo::getCocos2dImpl() {
        return (cocos2d::CCJumpTo*)m_cocos2d_impl;
    }


    CCJumpTo::CCJumpTo() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCJumpTo> CCJumpTo::create()
    {
        RefPtrWillBeRawPtr<CCJumpTo> ret = adoptRefWillBeNoop(new CCJumpTo());
        cocos2d::CCJumpTo* impl = new cocos2d::CCJumpTo();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCJumpTo::~CCJumpTo() {
    }
} // namespace blink
