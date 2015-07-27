// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTextFieldTTF.h"

namespace blink {

    int CCTextFieldTTF::getCharCount() {

        int ret_impl = ((cocos2d::CCTextFieldTTF*)m_cocos2d_impl)->getCharCount();
        
        
        return ret_impl;
    }

    void CCTextFieldTTF::setSecureTextEntry(bool arg0) {

        ((cocos2d::CCTextFieldTTF*)m_cocos2d_impl)->setSecureTextEntry((bool)(arg0));
    }

    String CCTextFieldTTF::getString() {

        const String ret_impl = ((cocos2d::CCTextFieldTTF*)m_cocos2d_impl)->getString();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<ccColor3B> CCTextFieldTTF::getColorSpaceHolder() {

        const cocos2d::ccColor3B ret_impl = ((cocos2d::CCTextFieldTTF*)m_cocos2d_impl)->getColorSpaceHolder();
        
        RefPtr<ccColor3B> ret = adoptRefWillBeNoop(new ccColor3B());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    bool CCTextFieldTTF::initWithPlaceHolder(String arg0, String arg1, float arg2) {

        bool ret_impl = ((cocos2d::CCTextFieldTTF*)m_cocos2d_impl)->initWithPlaceHolder((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()), (float)(arg2));
        
        
        return ret_impl;
    }

    bool CCTextFieldTTF::initWithPlaceHolder(String arg0, CCSize* arg1, int arg2, String arg3, float arg4) {
        cocos2d::CCSize* _arg1 = (cocos2d::CCSize*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCTextFieldTTF*)m_cocos2d_impl)->initWithPlaceHolder((char*)(arg0.utf8().data()),  *_arg1, (cocos2d::CCTextAlignment)(arg2), (char*)(arg3.utf8().data()), (float)(arg4));
        
        
        return ret_impl;
    }

    String CCTextFieldTTF::getPlaceHolder() {

        const String ret_impl = ((cocos2d::CCTextFieldTTF*)m_cocos2d_impl)->getPlaceHolder();
        
        
        return ret_impl;
    }

    void CCTextFieldTTF::setColorSpaceHolder(ccColor3B* arg0) {
        cocos2d::ccColor3B* _arg0 = (cocos2d::ccColor3B*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTextFieldTTF*)m_cocos2d_impl)->setColorSpaceHolder( *_arg0);
    }

    bool CCTextFieldTTF::detachWithIME() {

        bool ret_impl = ((cocos2d::CCTextFieldTTF*)m_cocos2d_impl)->detachWithIME();
        
        
        return ret_impl;
    }

    void CCTextFieldTTF::setPlaceHolder(String arg0) {

        ((cocos2d::CCTextFieldTTF*)m_cocos2d_impl)->setPlaceHolder((char*)(arg0.utf8().data()));
    }

    bool CCTextFieldTTF::isSecureTextEntry() {

        bool ret_impl = ((cocos2d::CCTextFieldTTF*)m_cocos2d_impl)->isSecureTextEntry();
        
        
        return ret_impl;
    }

    void CCTextFieldTTF::setString(String arg0) {

        ((cocos2d::CCTextFieldTTF*)m_cocos2d_impl)->setString((char*)(arg0.utf8().data()));
    }

    bool CCTextFieldTTF::attachWithIME() {

        bool ret_impl = ((cocos2d::CCTextFieldTTF*)m_cocos2d_impl)->attachWithIME();
        
        
        return ret_impl;
    }
    ScriptValue CCTextFieldTTF::textFieldWithPlaceHolder(ScriptState* scriptState, String arg0, String arg1, float arg2) {

        cocos2d::CCTextFieldTTF* ret_impl = cocos2d::CCTextFieldTTF::textFieldWithPlaceHolder((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()), (float)(arg2));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTextFieldTTF)
        
    }
    ScriptValue CCTextFieldTTF::textFieldWithPlaceHolder(ScriptState* scriptState, String arg0, CCSize* arg1, int arg2, String arg3, float arg4) {
        cocos2d::CCSize* _arg1 = (cocos2d::CCSize*)(arg1->getCocos2dImpl());

        cocos2d::CCTextFieldTTF* ret_impl = cocos2d::CCTextFieldTTF::textFieldWithPlaceHolder((char*)(arg0.utf8().data()),  *_arg1, (cocos2d::CCTextAlignment)(arg2), (char*)(arg3.utf8().data()), (float)(arg4));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTextFieldTTF)
        
    }
    cocos2d::CCTextFieldTTF* CCTextFieldTTF::getCocos2dImpl() {
        return (cocos2d::CCTextFieldTTF*)m_cocos2d_impl;
    }


    CCTextFieldTTF::CCTextFieldTTF() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTextFieldTTF> CCTextFieldTTF::create()
    {
        RefPtrWillBeRawPtr<CCTextFieldTTF> ret = adoptRefWillBeNoop(new CCTextFieldTTF());
        cocos2d::CCTextFieldTTF* impl = new cocos2d::CCTextFieldTTF();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCTextFieldTTF::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCTextFieldTTF::~CCTextFieldTTF() {
    }
} // namespace blink
