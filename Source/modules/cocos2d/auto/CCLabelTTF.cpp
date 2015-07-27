// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCLabelTTF.h"

namespace blink {

    void CCLabelTTF::enableShadow(CCSize* arg0, float arg1, float arg2, bool arg3) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());

        ((cocos2d::CCLabelTTF*)m_cocos2d_impl)->enableShadow( *_arg0, (float)(arg1), (float)(arg2), (bool)(arg3));
    }

    void CCLabelTTF::setDimensions(CCSize* arg0) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());

        ((cocos2d::CCLabelTTF*)m_cocos2d_impl)->setDimensions( *_arg0);
    }

    float CCLabelTTF::getFontSize() {

        float ret_impl = ((cocos2d::CCLabelTTF*)m_cocos2d_impl)->getFontSize();
        
        
        return ret_impl;
    }

    String CCLabelTTF::getString() {

        const String ret_impl = ((cocos2d::CCLabelTTF*)m_cocos2d_impl)->getString();
        
        
        return ret_impl;
    }

    void CCLabelTTF::setTextDefinition(ccFontDefinition* arg0) {
        cocos2d::ccFontDefinition* _arg0 = (cocos2d::ccFontDefinition*)(arg0->getCocos2dImpl());

        ((cocos2d::CCLabelTTF*)m_cocos2d_impl)->setTextDefinition( _arg0);
    }

    void CCLabelTTF::setFontName(String arg0) {

        ((cocos2d::CCLabelTTF*)m_cocos2d_impl)->setFontName((char*)(arg0.utf8().data()));
    }

    int CCLabelTTF::getHorizontalAlignment() {

        int ret_impl = ((cocos2d::CCLabelTTF*)m_cocos2d_impl)->getHorizontalAlignment();
        
        
        return ret_impl;
    }

    bool CCLabelTTF::initWithStringAndTextDefinition(String arg0, ccFontDefinition* arg1) {
        cocos2d::ccFontDefinition* _arg1 = (cocos2d::ccFontDefinition*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCLabelTTF*)m_cocos2d_impl)->initWithStringAndTextDefinition((char*)(arg0.utf8().data()),  *_arg1);
        
        
        return ret_impl;
    }

    void CCLabelTTF::setString(String arg0) {

        ((cocos2d::CCLabelTTF*)m_cocos2d_impl)->setString((char*)(arg0.utf8().data()));
    }

    bool CCLabelTTF::initWithString(String arg0, String arg1, float arg2, CCSize* arg3, int arg4) {
        cocos2d::CCSize* _arg3 = (cocos2d::CCSize*)(arg3->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCLabelTTF*)m_cocos2d_impl)->initWithString((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()), (float)(arg2),  *_arg3, (cocos2d::CCTextAlignment)(arg4));
        
        
        return ret_impl;
    }

    bool CCLabelTTF::initWithString(String arg0, String arg1, float arg2) {

        bool ret_impl = ((cocos2d::CCLabelTTF*)m_cocos2d_impl)->initWithString((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()), (float)(arg2));
        
        
        return ret_impl;
    }

    bool CCLabelTTF::initWithString(String arg0, String arg1, float arg2, CCSize* arg3, int arg4, int arg5) {
        cocos2d::CCSize* _arg3 = (cocos2d::CCSize*)(arg3->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCLabelTTF*)m_cocos2d_impl)->initWithString((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()), (float)(arg2),  *_arg3, (cocos2d::CCTextAlignment)(arg4), (cocos2d::CCVerticalTextAlignment)(arg5));
        
        
        return ret_impl;
    }

    bool CCLabelTTF::init() {

        bool ret_impl = ((cocos2d::CCLabelTTF*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    void CCLabelTTF::setFontFillColor(ccColor3B* arg0, bool arg1) {
        cocos2d::ccColor3B* _arg0 = (cocos2d::ccColor3B*)(arg0->getCocos2dImpl());

        ((cocos2d::CCLabelTTF*)m_cocos2d_impl)->setFontFillColor( *_arg0, (bool)(arg1));
    }

    void CCLabelTTF::enableStroke(ccColor3B* arg0, float arg1, bool arg2) {
        cocos2d::ccColor3B* _arg0 = (cocos2d::ccColor3B*)(arg0->getCocos2dImpl());

        ((cocos2d::CCLabelTTF*)m_cocos2d_impl)->enableStroke( *_arg0, (float)(arg1), (bool)(arg2));
    }

    PassRefPtrWillBeRawPtr<CCSize> CCLabelTTF::getDimensions() {

        cocos2d::CCSize ret_impl = ((cocos2d::CCLabelTTF*)m_cocos2d_impl)->getDimensions();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCLabelTTF::setVerticalAlignment(int arg0) {

        ((cocos2d::CCLabelTTF*)m_cocos2d_impl)->setVerticalAlignment((cocos2d::CCVerticalTextAlignment)(arg0));
    }

    void CCLabelTTF::setFontSize(float arg0) {

        ((cocos2d::CCLabelTTF*)m_cocos2d_impl)->setFontSize((float)(arg0));
    }

    int CCLabelTTF::getVerticalAlignment() {

        int ret_impl = ((cocos2d::CCLabelTTF*)m_cocos2d_impl)->getVerticalAlignment();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<ccFontDefinition> CCLabelTTF::getTextDefinition() {

        cocos2d::ccFontDefinition* ret_impl = ((cocos2d::CCLabelTTF*)m_cocos2d_impl)->getTextDefinition();
        if (ret_impl == NULL) { return nullptr; }
        RefPtr<ccFontDefinition> ret = adoptRefWillBeNoop(new ccFontDefinition());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    String CCLabelTTF::getFontName() {

        const String ret_impl = ((cocos2d::CCLabelTTF*)m_cocos2d_impl)->getFontName();
        
        
        return ret_impl;
    }

    void CCLabelTTF::setHorizontalAlignment(int arg0) {

        ((cocos2d::CCLabelTTF*)m_cocos2d_impl)->setHorizontalAlignment((cocos2d::CCTextAlignment)(arg0));
    }

    void CCLabelTTF::disableShadow(bool arg0) {

        ((cocos2d::CCLabelTTF*)m_cocos2d_impl)->disableShadow((bool)(arg0));
    }

    void CCLabelTTF::disableStroke(bool arg0) {

        ((cocos2d::CCLabelTTF*)m_cocos2d_impl)->disableStroke((bool)(arg0));
    }
    ScriptValue CCLabelTTF::createInternal(ScriptState* scriptState, String arg0, String arg1, float arg2, CCSize* arg3, int arg4) {
        cocos2d::CCSize* _arg3 = (cocos2d::CCSize*)(arg3->getCocos2dImpl());

        cocos2d::CCLabelTTF* ret_impl = cocos2d::CCLabelTTF::create((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()), (float)(arg2),  *_arg3, (cocos2d::CCTextAlignment)(arg4));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCLabelTTF)
        
    }
    ScriptValue CCLabelTTF::createInternal(ScriptState* scriptState, String arg0, String arg1, float arg2) {

        cocos2d::CCLabelTTF* ret_impl = cocos2d::CCLabelTTF::create((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()), (float)(arg2));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCLabelTTF)
        
    }
    ScriptValue CCLabelTTF::createInternal(ScriptState* scriptState, String arg0, String arg1, float arg2, CCSize* arg3, int arg4, int arg5) {
        cocos2d::CCSize* _arg3 = (cocos2d::CCSize*)(arg3->getCocos2dImpl());

        cocos2d::CCLabelTTF* ret_impl = cocos2d::CCLabelTTF::create((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()), (float)(arg2),  *_arg3, (cocos2d::CCTextAlignment)(arg4), (cocos2d::CCVerticalTextAlignment)(arg5));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCLabelTTF)
        
    }
    ScriptValue CCLabelTTF::createInternal(ScriptState* scriptState) {

        cocos2d::CCLabelTTF* ret_impl = cocos2d::CCLabelTTF::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCLabelTTF)
        
    }

    ScriptValue CCLabelTTF::createWithFontDefinition(ScriptState* scriptState, String arg0, ccFontDefinition* arg1) {
        cocos2d::ccFontDefinition* _arg1 = (cocos2d::ccFontDefinition*)(arg1->getCocos2dImpl());

        cocos2d::CCLabelTTF* ret_impl = cocos2d::CCLabelTTF::createWithFontDefinition((char*)(arg0.utf8().data()),  *_arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCLabelTTF)
        
    }
    cocos2d::CCLabelTTF* CCLabelTTF::getCocos2dImpl() {
        return (cocos2d::CCLabelTTF*)m_cocos2d_impl;
    }


    CCLabelTTF::CCLabelTTF() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCLabelTTF> CCLabelTTF::create()
    {
        RefPtrWillBeRawPtr<CCLabelTTF> ret = adoptRefWillBeNoop(new CCLabelTTF());
        cocos2d::CCLabelTTF* impl = new cocos2d::CCLabelTTF();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCLabelTTF::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCLabelTTF::~CCLabelTTF() {
    }
} // namespace blink
