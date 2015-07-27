// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTransitionFadeUp.h"

namespace blink {

    ScriptValue CCTransitionFadeUp::actionWithSize(ScriptState* scriptState, CCSize* arg0) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCTransitionFadeUp*)m_cocos2d_impl)->actionWithSize( *_arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    ScriptValue CCTransitionFadeUp::createInternal(ScriptState* scriptState, float arg0, ScriptValue& arg1_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCScene, arg1_wrapper, arg1);
        cocos2d::CCScene* _arg1 = (cocos2d::CCScene*)(arg1->getCocos2dImpl());

        cocos2d::CCTransitionFadeUp* ret_impl = cocos2d::CCTransitionFadeUp::create((float)(arg0),  _arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTransitionFadeUp)
        
    }
    cocos2d::CCTransitionFadeUp* CCTransitionFadeUp::getCocos2dImpl() {
        return (cocos2d::CCTransitionFadeUp*)m_cocos2d_impl;
    }


    CCTransitionFadeUp::CCTransitionFadeUp() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTransitionFadeUp> CCTransitionFadeUp::create()
    {
        RefPtrWillBeRawPtr<CCTransitionFadeUp> ret = adoptRefWillBeNoop(new CCTransitionFadeUp());
        cocos2d::CCTransitionFadeUp* impl = new cocos2d::CCTransitionFadeUp();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCTransitionFadeUp::~CCTransitionFadeUp() {
    }
} // namespace blink
