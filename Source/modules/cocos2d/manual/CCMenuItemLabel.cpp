// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/manual/CCMenuItemLabel.h"

namespace blink {

    void CCMenuItemLabel::setEnabled(bool arg0) {

        ((cocos2d::CCMenuItemLabel*)m_cocos2d_impl)->setEnabled((bool)(arg0));
    }

    void CCMenuItemLabel::setLabel(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCMenuItemLabel*)m_cocos2d_impl)->setLabel( _arg0);
    }

    void CCMenuItemLabel::activate() {

        ((cocos2d::CCMenuItemLabel*)m_cocos2d_impl)->activate();
    }

    PassRefPtrWillBeRawPtr<ccColor3B> CCMenuItemLabel::getDisabledColor() {

        const cocos2d::ccColor3B ret_impl = ((cocos2d::CCMenuItemLabel*)m_cocos2d_impl)->getDisabledColor();
        
        RefPtr<ccColor3B> ret = adoptRefWillBeNoop(new ccColor3B());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCMenuItemLabel::setString(String arg0) {

        ((cocos2d::CCMenuItemLabel*)m_cocos2d_impl)->setString((char*)(arg0.utf8().data()));
    }

    void CCMenuItemLabel::selected() {

        ((cocos2d::CCMenuItemLabel*)m_cocos2d_impl)->selected();
    }

    void CCMenuItemLabel::setDisabledColor(ccColor3B* arg0) {
        cocos2d::ccColor3B* _arg0 = (cocos2d::ccColor3B*)(arg0->getCocos2dImpl());

        ((cocos2d::CCMenuItemLabel*)m_cocos2d_impl)->setDisabledColor( *_arg0);
    }

    ScriptValue CCMenuItemLabel::getLabel(ScriptState* scriptState) {

        cocos2d::CCNode* ret_impl = ((cocos2d::CCMenuItemLabel*)m_cocos2d_impl)->getLabel();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    void CCMenuItemLabel::unselected() {

        ((cocos2d::CCMenuItemLabel*)m_cocos2d_impl)->unselected();
    }
    cocos2d::CCMenuItemLabel* CCMenuItemLabel::getCocos2dImpl() {
        return (cocos2d::CCMenuItemLabel*)m_cocos2d_impl;
    }

    void CCMenuItemLabel::initWithLabel(ScriptValue& label, MenuItemCallback* callback, ScriptValue& target) {
        SCRIPT_VALUE_WRAPPER(CCNode, label, arg0);
        SCRIPT_VALUE_WRAPPER(CCNode, target, arg3);
	cocos2d::CCNode* _arg0 = arg0->getCocos2dImpl();
	cocos2d::CCObject* arg1 = NULL;
        if (arg3 != nullptr) {
            arg1 = arg3->getCocos2dImpl();
        }
        ((cocos2d::CCMenuItemLabel*)m_cocos2d_impl)->initWithLabel(_arg0, arg1, NULL);
        blink::CCMenuItem::setMenuItemCallback(callback);
    }

    CCMenuItemLabel::CCMenuItemLabel() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCMenuItemLabel> CCMenuItemLabel::create()
    {
        RefPtrWillBeRawPtr<CCMenuItemLabel> ret = adoptRefWillBeNoop(new CCMenuItemLabel());
        cocos2d::CCMenuItemLabel* impl = new cocos2d::CCMenuItemLabel();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCMenuItemLabel::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCMenuItemLabel::~CCMenuItemLabel() {
    }
} // namespace blink
