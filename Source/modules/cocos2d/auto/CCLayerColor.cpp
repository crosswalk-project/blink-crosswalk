// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCLayerColor.h"

namespace blink {

    void CCLayerColor::draw() {

        ((cocos2d::CCLayerColor*)m_cocos2d_impl)->draw();
    }

    void CCLayerColor::setColor(ccColor3B* arg0) {
        cocos2d::ccColor3B* _arg0 = (cocos2d::ccColor3B*)(arg0->getCocos2dImpl());

        ((cocos2d::CCLayerColor*)m_cocos2d_impl)->setColor( *_arg0);
    }

    void CCLayerColor::changeWidthAndHeight(float arg0, float arg1) {

        ((cocos2d::CCLayerColor*)m_cocos2d_impl)->changeWidthAndHeight((float)(arg0), (float)(arg1));
    }

    void CCLayerColor::setOpacity(unsigned char arg0) {

        ((cocos2d::CCLayerColor*)m_cocos2d_impl)->setOpacity((unsigned char)(arg0));
    }

    bool CCLayerColor::init() {

        bool ret_impl = ((cocos2d::CCLayerColor*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    bool CCLayerColor::initWithColor(ccColor4B* arg0) {
        cocos2d::ccColor4B* _arg0 = (cocos2d::ccColor4B*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCLayerColor*)m_cocos2d_impl)->initWithColor( *_arg0);
        
        
        return ret_impl;
    }

    bool CCLayerColor::initWithColor(ccColor4B* arg0, float arg1, float arg2) {
        cocos2d::ccColor4B* _arg0 = (cocos2d::ccColor4B*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCLayerColor*)m_cocos2d_impl)->initWithColor( *_arg0, (float)(arg1), (float)(arg2));
        
        
        return ret_impl;
    }

    void CCLayerColor::changeWidth(float arg0) {

        ((cocos2d::CCLayerColor*)m_cocos2d_impl)->changeWidth((float)(arg0));
    }

    void CCLayerColor::changeHeight(float arg0) {

        ((cocos2d::CCLayerColor*)m_cocos2d_impl)->changeHeight((float)(arg0));
    }
    ScriptValue CCLayerColor::createInternal(ScriptState* scriptState, ccColor4B* arg0, float arg1, float arg2) {
        cocos2d::ccColor4B* _arg0 = (cocos2d::ccColor4B*)(arg0->getCocos2dImpl());

        cocos2d::CCLayerColor* ret_impl = cocos2d::CCLayerColor::create( *_arg0, (float)(arg1), (float)(arg2));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCLayerColor)
        
    }
    ScriptValue CCLayerColor::createInternal(ScriptState* scriptState) {

        cocos2d::CCLayerColor* ret_impl = cocos2d::CCLayerColor::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCLayerColor)
        
    }
    ScriptValue CCLayerColor::createInternal(ScriptState* scriptState, ccColor4B* arg0) {
        cocos2d::ccColor4B* _arg0 = (cocos2d::ccColor4B*)(arg0->getCocos2dImpl());

        cocos2d::CCLayerColor* ret_impl = cocos2d::CCLayerColor::create( *_arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCLayerColor)
        
    }
    cocos2d::CCLayerColor* CCLayerColor::getCocos2dImpl() {
        return (cocos2d::CCLayerColor*)m_cocos2d_impl;
    }


    CCLayerColor::CCLayerColor() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCLayerColor> CCLayerColor::create()
    {
        RefPtrWillBeRawPtr<CCLayerColor> ret = adoptRefWillBeNoop(new CCLayerColor());
        cocos2d::CCLayerColor* impl = new cocos2d::CCLayerColor();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCLayerColor::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCLayerColor::~CCLayerColor() {
    }
} // namespace blink
