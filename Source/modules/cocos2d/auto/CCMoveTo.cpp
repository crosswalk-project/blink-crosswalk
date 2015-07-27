// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCMoveTo.h"

namespace blink {

    void CCMoveTo::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCMoveTo*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    bool CCMoveTo::initWithDuration(float arg0, CCPoint* arg1) {
        cocos2d::CCPoint* _arg1 = (cocos2d::CCPoint*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCMoveTo*)m_cocos2d_impl)->initWithDuration((float)(arg0),  *_arg1);
        
        
        return ret_impl;
    }

    ScriptValue CCMoveTo::createInternal(ScriptState* scriptState, float arg0, CCPoint* arg1) {
        cocos2d::CCPoint* _arg1 = (cocos2d::CCPoint*)(arg1->getCocos2dImpl());

        cocos2d::CCMoveTo* ret_impl = cocos2d::CCMoveTo::create((float)(arg0),  *_arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCMoveTo)
        
    }
    cocos2d::CCMoveTo* CCMoveTo::getCocos2dImpl() {
        return (cocos2d::CCMoveTo*)m_cocos2d_impl;
    }


    CCMoveTo::CCMoveTo() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCMoveTo> CCMoveTo::create()
    {
        RefPtrWillBeRawPtr<CCMoveTo> ret = adoptRefWillBeNoop(new CCMoveTo());
        cocos2d::CCMoveTo* impl = new cocos2d::CCMoveTo();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCMoveTo::~CCMoveTo() {
    }
} // namespace blink
