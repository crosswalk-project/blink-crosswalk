// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"
#include "bindings/modules/v8/V8CCMenu.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/manual/CCMenu.h"

namespace blink {

    bool CCMenu::initWithArray(CCArray* arg0) {
        cocos2d::CCArray* _arg0 = (cocos2d::CCArray*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCMenu*)m_cocos2d_impl)->initWithArray( _arg0);
        
        
        return ret_impl;
    }

    void CCMenu::addChild(ScriptValue& arg0_wrapper, int arg1) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCMenu*)m_cocos2d_impl)->addChild( _arg0, (int)(arg1));
    }

    void CCMenu::addChild(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCMenu*)m_cocos2d_impl)->addChild( _arg0);
    }

    void CCMenu::addChild(ScriptValue& arg0_wrapper, int arg1, int arg2) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCMenu*)m_cocos2d_impl)->addChild( _arg0, (int)(arg1), (int)(arg2));
    }

    void CCMenu::alignItemsVertically() {

        ((cocos2d::CCMenu*)m_cocos2d_impl)->alignItemsVertically();
    }

    bool CCMenu::ccTouchBegan(CCTouch* arg0, CCEvent* arg1) {
        cocos2d::CCTouch* _arg0 = (cocos2d::CCTouch*)(arg0->getCocos2dImpl());
        cocos2d::CCEvent* _arg1 = (cocos2d::CCEvent*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCMenu*)m_cocos2d_impl)->ccTouchBegan( _arg0,  _arg1);
        
        
        return ret_impl;
    }

    void CCMenu::ccTouchEnded(CCTouch* arg0, CCEvent* arg1) {
        cocos2d::CCTouch* _arg0 = (cocos2d::CCTouch*)(arg0->getCocos2dImpl());
        cocos2d::CCEvent* _arg1 = (cocos2d::CCEvent*)(arg1->getCocos2dImpl());

        ((cocos2d::CCMenu*)m_cocos2d_impl)->ccTouchEnded( _arg0,  _arg1);
    }

    bool CCMenu::isOpacityModifyRGB() {

        bool ret_impl = ((cocos2d::CCMenu*)m_cocos2d_impl)->isOpacityModifyRGB();
        
        
        return ret_impl;
    }

    bool CCMenu::isEnabled() {

        bool ret_impl = ((cocos2d::CCMenu*)m_cocos2d_impl)->isEnabled();
        
        
        return ret_impl;
    }

    void CCMenu::setOpacityModifyRGB(bool arg0) {

        ((cocos2d::CCMenu*)m_cocos2d_impl)->setOpacityModifyRGB((bool)(arg0));
    }

    void CCMenu::setHandlerPriority(int arg0) {

        ((cocos2d::CCMenu*)m_cocos2d_impl)->setHandlerPriority((int)(arg0));
    }

    bool CCMenu::init() {

        bool ret_impl = ((cocos2d::CCMenu*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    void CCMenu::alignItemsHorizontallyWithPadding(float arg0) {

        ((cocos2d::CCMenu*)m_cocos2d_impl)->alignItemsHorizontallyWithPadding((float)(arg0));
    }

    void CCMenu::alignItemsHorizontally() {

        ((cocos2d::CCMenu*)m_cocos2d_impl)->alignItemsHorizontally();
    }

    void CCMenu::setEnabled(bool arg0) {

        ((cocos2d::CCMenu*)m_cocos2d_impl)->setEnabled((bool)(arg0));
    }

    void CCMenu::ccTouchMoved(CCTouch* arg0, CCEvent* arg1) {
        cocos2d::CCTouch* _arg0 = (cocos2d::CCTouch*)(arg0->getCocos2dImpl());
        cocos2d::CCEvent* _arg1 = (cocos2d::CCEvent*)(arg1->getCocos2dImpl());

        ((cocos2d::CCMenu*)m_cocos2d_impl)->ccTouchMoved( _arg0,  _arg1);
    }

    void CCMenu::ccTouchCancelled(CCTouch* arg0, CCEvent* arg1) {
        cocos2d::CCTouch* _arg0 = (cocos2d::CCTouch*)(arg0->getCocos2dImpl());
        cocos2d::CCEvent* _arg1 = (cocos2d::CCEvent*)(arg1->getCocos2dImpl());

        ((cocos2d::CCMenu*)m_cocos2d_impl)->ccTouchCancelled( _arg0,  _arg1);
    }

    void CCMenu::removeChild(ScriptValue& arg0_wrapper, bool arg1) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCMenu*)m_cocos2d_impl)->removeChild( _arg0, (bool)(arg1));
    }

    void CCMenu::alignItemsVerticallyWithPadding(float arg0) {

        ((cocos2d::CCMenu*)m_cocos2d_impl)->alignItemsVerticallyWithPadding((float)(arg0));
    }

    void CCMenu::registerWithTouchDispatcher() {

        ((cocos2d::CCMenu*)m_cocos2d_impl)->registerWithTouchDispatcher();
    }
    cocos2d::CCMenu* CCMenu::getCocos2dImpl() {
        return (cocos2d::CCMenu*)m_cocos2d_impl;
    }

    CCMenu::CCMenu() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCMenu> CCMenu::create()
    {
        RefPtrWillBeRawPtr<CCMenu> ret = adoptRefWillBeNoop(new CCMenu());
        cocos2d::CCMenu* impl = new cocos2d::CCMenu();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCMenu::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCMenu::~CCMenu() {
    }

    bool CCMenu::initWithItems(const Vector<ScriptValue>& arg0) {
        size_t size = arg0.size();
        if (!size) {
            return ((cocos2d::CCMenu*)(m_cocos2d_impl))->initWithArray(NULL);
        }
        
        cocos2d::CCArray array;
        array.init();
        for (size_t i = 0; i < size; i++) {
          ScriptValue arg_wrapper = arg0.at(i);
          SCRIPT_VALUE_WRAPPER(CCNode, arg_wrapper, arg);
          cocos2d::CCMenuItem* _arg = (cocos2d::CCMenuItem*)(arg->getCocos2dImpl());
          array.addObject(_arg);
        }
        
        bool ret_impl = ((cocos2d::CCMenu*)(m_cocos2d_impl))->initWithArray(&array);
        return ret_impl;
    }

    void CCMenu::alignItemsInColumnsWithArray(CCArray* arg0) {
        if (arg0 == nullptr || m_cocos2d_impl == nullptr) return;
	cocos2d::CCArray* _arg0 = arg0->getCocos2dImpl();
        ((cocos2d::CCMenu*)(m_cocos2d_impl))->alignItemsInColumnsWithArray(_arg0);
    }

    void CCMenu::alignItemsInRowsWithArray(CCArray* arg0) {
        if (arg0 == nullptr || m_cocos2d_impl == nullptr) return;
	cocos2d::CCArray* _arg0 = arg0->getCocos2dImpl();
        ((cocos2d::CCMenu*)(m_cocos2d_impl))->alignItemsInRowsWithArray(_arg0);
    }

} // namespace blink
