// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCToggleVisibility.h"

namespace blink {

    void CCToggleVisibility::update(float arg0) {

        ((cocos2d::CCToggleVisibility*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCToggleVisibility::createInternal(ScriptState* scriptState) {

        cocos2d::CCToggleVisibility* ret_impl = cocos2d::CCToggleVisibility::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCToggleVisibility)
        
    }
    cocos2d::CCToggleVisibility* CCToggleVisibility::getCocos2dImpl() {
        return (cocos2d::CCToggleVisibility*)m_cocos2d_impl;
    }


    CCToggleVisibility::CCToggleVisibility() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCToggleVisibility> CCToggleVisibility::create()
    {
        RefPtrWillBeRawPtr<CCToggleVisibility> ret = adoptRefWillBeNoop(new CCToggleVisibility());
        cocos2d::CCToggleVisibility* impl = new cocos2d::CCToggleVisibility();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCToggleVisibility::~CCToggleVisibility() {
    }
} // namespace blink
