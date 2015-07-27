// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCFadeOut.h"

namespace blink {

    void CCFadeOut::update(float arg0) {

        ((cocos2d::CCFadeOut*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCFadeOut::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCFadeOut*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    ScriptValue CCFadeOut::createInternal(ScriptState* scriptState, float arg0) {

        cocos2d::CCFadeOut* ret_impl = cocos2d::CCFadeOut::create((float)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCFadeOut)
        
    }
    cocos2d::CCFadeOut* CCFadeOut::getCocos2dImpl() {
        return (cocos2d::CCFadeOut*)m_cocos2d_impl;
    }


    CCFadeOut::CCFadeOut() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCFadeOut> CCFadeOut::create()
    {
        RefPtrWillBeRawPtr<CCFadeOut> ret = adoptRefWillBeNoop(new CCFadeOut());
        cocos2d::CCFadeOut* impl = new cocos2d::CCFadeOut();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCFadeOut::~CCFadeOut() {
    }
} // namespace blink
