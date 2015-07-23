// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCShow.h"

namespace blink {

    ScriptValue CCShow::reverse(ScriptState* scriptState) {

        cocos2d::CCFiniteTimeAction* ret_impl = ((cocos2d::CCShow*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCFiniteTimeAction)
        
    }

    void CCShow::update(float arg0) {

        ((cocos2d::CCShow*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCShow::createInternal(ScriptState* scriptState) {

        cocos2d::CCShow* ret_impl = cocos2d::CCShow::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCShow)
        
    }
    cocos2d::CCShow* CCShow::getCocos2dImpl() {
        return (cocos2d::CCShow*)m_cocos2d_impl;
    }


    CCShow::CCShow() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCShow> CCShow::create()
    {
        RefPtrWillBeRawPtr<CCShow> ret = adoptRefWillBeNoop(new CCShow());
        cocos2d::CCShow* impl = new cocos2d::CCShow();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCShow::~CCShow() {
    }
} // namespace blink
