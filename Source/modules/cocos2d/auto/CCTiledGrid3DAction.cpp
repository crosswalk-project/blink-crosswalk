// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTiledGrid3DAction.h"

namespace blink {

    ScriptValue CCTiledGrid3DAction::getGrid(ScriptState* scriptState) {

        cocos2d::CCGridBase* ret_impl = ((cocos2d::CCTiledGrid3DAction*)m_cocos2d_impl)->getGrid();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCGridBase)
        
    }
    cocos2d::CCTiledGrid3DAction* CCTiledGrid3DAction::getCocos2dImpl() {
        return (cocos2d::CCTiledGrid3DAction*)m_cocos2d_impl;
    }


    CCTiledGrid3DAction::CCTiledGrid3DAction() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTiledGrid3DAction> CCTiledGrid3DAction::create()
    {
        RefPtrWillBeRawPtr<CCTiledGrid3DAction> ret = adoptRefWillBeNoop(new CCTiledGrid3DAction());
        cocos2d::CCTiledGrid3DAction* impl = new cocos2d::CCTiledGrid3DAction();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCTiledGrid3DAction::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCTiledGrid3DAction::~CCTiledGrid3DAction() {
    }
} // namespace blink
