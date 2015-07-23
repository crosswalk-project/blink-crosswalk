// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCHide.h"

namespace blink {

    ScriptValue CCHide::reverse(ScriptState* scriptState) {

        cocos2d::CCFiniteTimeAction* ret_impl = ((cocos2d::CCHide*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCFiniteTimeAction)
        
    }

    void CCHide::update(float arg0) {

        ((cocos2d::CCHide*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCHide::createInternal(ScriptState* scriptState) {

        cocos2d::CCHide* ret_impl = cocos2d::CCHide::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCHide)
        
    }
    cocos2d::CCHide* CCHide::getCocos2dImpl() {
        return (cocos2d::CCHide*)m_cocos2d_impl;
    }


    CCHide::CCHide() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCHide> CCHide::create()
    {
        RefPtrWillBeRawPtr<CCHide> ret = adoptRefWillBeNoop(new CCHide());
        cocos2d::CCHide* impl = new cocos2d::CCHide();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCHide::~CCHide() {
    }
} // namespace blink
