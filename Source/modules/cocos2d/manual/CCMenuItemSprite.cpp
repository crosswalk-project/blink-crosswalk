// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"
#include "bindings/modules/v8/V8CCMenuItemSprite.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/manual/CCMenuItemSprite.h"

namespace blink {

    void CCMenuItemSprite::setEnabled(bool arg0) {

        ((cocos2d::CCMenuItemSprite*)m_cocos2d_impl)->setEnabled((bool)(arg0));
    }

    void CCMenuItemSprite::selected() {

        ((cocos2d::CCMenuItemSprite*)m_cocos2d_impl)->selected();
    }

    void CCMenuItemSprite::setNormalImage(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCMenuItemSprite*)m_cocos2d_impl)->setNormalImage( _arg0);
    }

    void CCMenuItemSprite::setDisabledImage(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCMenuItemSprite*)m_cocos2d_impl)->setDisabledImage( _arg0);
    }

    void CCMenuItemSprite::setSelectedImage(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCMenuItemSprite*)m_cocos2d_impl)->setSelectedImage( _arg0);
    }

    ScriptValue CCMenuItemSprite::getDisabledImage(ScriptState* scriptState) {

        cocos2d::CCNode* ret_impl = ((cocos2d::CCMenuItemSprite*)m_cocos2d_impl)->getDisabledImage();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    ScriptValue CCMenuItemSprite::getSelectedImage(ScriptState* scriptState) {

        cocos2d::CCNode* ret_impl = ((cocos2d::CCMenuItemSprite*)m_cocos2d_impl)->getSelectedImage();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    ScriptValue CCMenuItemSprite::getNormalImage(ScriptState* scriptState) {

        cocos2d::CCNode* ret_impl = ((cocos2d::CCMenuItemSprite*)m_cocos2d_impl)->getNormalImage();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    void CCMenuItemSprite::unselected() {

        ((cocos2d::CCMenuItemSprite*)m_cocos2d_impl)->unselected();
    }
    cocos2d::CCMenuItemSprite* CCMenuItemSprite::getCocos2dImpl() {
        return (cocos2d::CCMenuItemSprite*)m_cocos2d_impl;
    }

    CCMenuItemSprite::CCMenuItemSprite() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCMenuItemSprite> CCMenuItemSprite::create()
    {
        RefPtrWillBeRawPtr<CCMenuItemSprite> ret = adoptRefWillBeNoop(new CCMenuItemSprite());
        cocos2d::CCMenuItemSprite* impl = new cocos2d::CCMenuItemSprite();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCMenuItemSprite::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCMenuItemSprite::~CCMenuItemSprite() {
    }

    void CCMenuItemSprite::initWithNormalSprite(CCSprite* normalSprite,
                                                CCSprite* selectedSprite,
                                                CCSprite* disabledImage,
                                                MenuItemCallback* callback,
                                                CCObject* target) {
        cocos2d::CCSprite* _arg0 = nullptr;
        if (normalSprite)
            _arg0 = (cocos2d::CCSprite*)(normalSprite->getCocos2dImpl());
        cocos2d::CCSprite* _arg1 = nullptr;
        if (selectedSprite)
            _arg1 = (cocos2d::CCSprite*)(selectedSprite->getCocos2dImpl());
        cocos2d::CCSprite* _arg2 = nullptr;
        if (disabledImage)
            _arg2 = (cocos2d::CCSprite*)(disabledImage->getCocos2dImpl());
        cocos2d::CCObject* _arg3 = nullptr;
        if (target)
            _arg3 = (cocos2d::CCObject*)(target->getCocos2dImpl());
        ((cocos2d::CCMenuItemSprite*)m_cocos2d_impl)->initWithNormalSprite(_arg0, _arg1, _arg2, _arg3, NULL);
        blink::CCMenuItem::setMenuItemCallback(callback);
    }
} // namespace blink
