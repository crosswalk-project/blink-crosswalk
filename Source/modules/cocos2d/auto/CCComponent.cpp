// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCComponent.h"

namespace blink {

    void CCComponent::setEnabled(bool arg0) {

        ((cocos2d::CCComponent*)m_cocos2d_impl)->setEnabled((bool)(arg0));
    }

    void CCComponent::setName(String arg0) {

        ((cocos2d::CCComponent*)m_cocos2d_impl)->setName((char*)(arg0.utf8().data()));
    }

    bool CCComponent::isEnabled() {

        bool ret_impl = ((cocos2d::CCComponent*)m_cocos2d_impl)->isEnabled();
        
        
        return ret_impl;
    }

    void CCComponent::update(float arg0) {

        ((cocos2d::CCComponent*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCComponent::getOwner(ScriptState* scriptState) {

        cocos2d::CCNode* ret_impl = ((cocos2d::CCComponent*)m_cocos2d_impl)->getOwner();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    bool CCComponent::init() {

        bool ret_impl = ((cocos2d::CCComponent*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    void CCComponent::setOwner(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCComponent*)m_cocos2d_impl)->setOwner( _arg0);
    }

    String CCComponent::getName() {

        const String ret_impl = ((cocos2d::CCComponent*)m_cocos2d_impl)->getName();
        
        
        return ret_impl;
    }

    ScriptValue CCComponent::createInternal(ScriptState* scriptState) {

        cocos2d::CCComponent* ret_impl = cocos2d::CCComponent::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCComponent)
        
    }
    cocos2d::CCComponent* CCComponent::getCocos2dImpl() {
        return (cocos2d::CCComponent*)m_cocos2d_impl;
    }


    CCComponent::CCComponent() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCComponent> CCComponent::create()
    {
        RefPtrWillBeRawPtr<CCComponent> ret = adoptRefWillBeNoop(new CCComponent());
        return ret.release();
    }


    CCComponent::~CCComponent() {
    }
} // namespace blink
