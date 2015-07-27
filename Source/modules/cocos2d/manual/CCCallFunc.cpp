// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"
#include "bindings/modules/v8/V8CCCallFunc.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/events/CallFuncCallback.h"
#include "modules/cocos2d/manual/CCCallFunc.h"

namespace blink {

    void CCCallFunc::execute() {

        ((cocos2d::CCCallFunc*)m_cocos2d_impl)->execute();
    }

    bool CCCallFunc::initWithTarget(CCObject* arg0) {
        cocos2d::CCObject* _arg0 = (cocos2d::CCObject*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCCallFunc*)m_cocos2d_impl)->initWithTarget( _arg0);
        
        
        return ret_impl;
    }

    void CCCallFunc::update(float arg0) {

        ((cocos2d::CCCallFunc*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCCallFunc::getTargetCallback(ScriptState* scriptState) {

        cocos2d::CCObject* ret_impl = ((cocos2d::CCCallFunc*)m_cocos2d_impl)->getTargetCallback();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCObject)
        
    }

    int CCCallFunc::getScriptHandler() {

        int ret_impl = ((cocos2d::CCCallFunc*)m_cocos2d_impl)->getScriptHandler();
        
        
        return ret_impl;
    }

    void CCCallFunc::setTargetCallback(CCObject* arg0) {
        cocos2d::CCObject* _arg0 = (cocos2d::CCObject*)(arg0->getCocos2dImpl());

        ((cocos2d::CCCallFunc*)m_cocos2d_impl)->setTargetCallback( _arg0);
    }
    cocos2d::CCCallFunc* CCCallFunc::getCocos2dImpl() {
        return (cocos2d::CCCallFunc*)m_cocos2d_impl;
    }


    CCCallFunc::CCCallFunc() {
        m_cocos2d_impl = NULL;
        m_callfunc_callback = nullptr;
    }

    PassRefPtrWillBeRawPtr<CCCallFunc> CCCallFunc::create()
    {
        RefPtrWillBeRawPtr<CCCallFunc> ret = adoptRefWillBeNoop(new CCCallFunc());
        cocos2d::CCCallFunc* impl = cocos2d::CCCallFuncN::create(1);
        //cocos2d::CCCallFunc* impl = new cocos2d::CCCallFuncN();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCCallFunc::~CCCallFunc() {
        m_callfunc_callback = nullptr;
    }

    // Manually added

    void CCCallFunc::trace(Visitor* visitor) {
        visitor->trace(m_callfunc_callback);
    }

    void CCCallFunc::setCallback(CallFuncCallback* callback) {
        m_callfunc_callback = callback;
    }

    void CCCallFunc::executeCallFuncActionEvent(CCNode* target) {
        if (m_callfunc_callback)
            m_callfunc_callback->handleEvent(target);
    }

} // namespace blink
