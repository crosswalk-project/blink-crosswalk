// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCFadeIn.h"

namespace blink {

    void CCFadeIn::update(float arg0) {

        ((cocos2d::CCFadeIn*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCFadeIn::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCFadeIn*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    ScriptValue CCFadeIn::createInternal(ScriptState* scriptState, float arg0) {

        cocos2d::CCFadeIn* ret_impl = cocos2d::CCFadeIn::create((float)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCFadeIn)
        
    }
    cocos2d::CCFadeIn* CCFadeIn::getCocos2dImpl() {
        return (cocos2d::CCFadeIn*)m_cocos2d_impl;
    }


    CCFadeIn::CCFadeIn() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCFadeIn> CCFadeIn::create()
    {
        RefPtrWillBeRawPtr<CCFadeIn> ret = adoptRefWillBeNoop(new CCFadeIn());
        cocos2d::CCFadeIn* impl = new cocos2d::CCFadeIn();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCFadeIn::~CCFadeIn() {
    }
} // namespace blink
