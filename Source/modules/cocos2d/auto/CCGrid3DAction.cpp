// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCGrid3DAction.h"

namespace blink {

    ScriptValue CCGrid3DAction::getGrid(ScriptState* scriptState) {

        cocos2d::CCGridBase* ret_impl = ((cocos2d::CCGrid3DAction*)m_cocos2d_impl)->getGrid();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCGridBase)
        
    }
    cocos2d::CCGrid3DAction* CCGrid3DAction::getCocos2dImpl() {
        return (cocos2d::CCGrid3DAction*)m_cocos2d_impl;
    }


    CCGrid3DAction::CCGrid3DAction() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCGrid3DAction> CCGrid3DAction::create()
    {
        RefPtrWillBeRawPtr<CCGrid3DAction> ret = adoptRefWillBeNoop(new CCGrid3DAction());
        cocos2d::CCGrid3DAction* impl = new cocos2d::CCGrid3DAction();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCGrid3DAction::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCGrid3DAction::~CCGrid3DAction() {
    }
} // namespace blink
