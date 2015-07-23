// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCComAttribute.h"

namespace blink {

    float CCComAttribute::getFloat(String arg0, float arg1) {

        float ret_impl = ((cocos2d::extension::CCComAttribute*)m_cocos2d_impl)->getFloat((char*)(arg0.utf8().data()), (float)(arg1));
        
        
        return ret_impl;
    }

    bool CCComAttribute::getBool(String arg0, bool arg1) {

        bool ret_impl = ((cocos2d::extension::CCComAttribute*)m_cocos2d_impl)->getBool((char*)(arg0.utf8().data()), (bool)(arg1));
        
        
        return ret_impl;
    }

    void CCComAttribute::setFloat(String arg0, float arg1) {

        ((cocos2d::extension::CCComAttribute*)m_cocos2d_impl)->setFloat((char*)(arg0.utf8().data()), (float)(arg1));
    }

    void CCComAttribute::setCString(String arg0, String arg1) {

        ((cocos2d::extension::CCComAttribute*)m_cocos2d_impl)->setCString((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()));
    }

    String CCComAttribute::getCString(String arg0, String arg1) {

        const String ret_impl = ((cocos2d::extension::CCComAttribute*)m_cocos2d_impl)->getCString((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()));
        
        
        return ret_impl;
    }

    bool CCComAttribute::serialize(PassRefPtr<Uint8Array> arg0) {

        bool ret_impl = ((cocos2d::extension::CCComAttribute*)m_cocos2d_impl)->serialize((void*)(arg0.get()->data()));
        
        
        return ret_impl;
    }

    void CCComAttribute::setInt(String arg0, int arg1) {

        ((cocos2d::extension::CCComAttribute*)m_cocos2d_impl)->setInt((char*)(arg0.utf8().data()), (int)(arg1));
    }

    bool CCComAttribute::parse(String arg0_wrapper) {
        std::string arg0 = std::string(arg0_wrapper.utf8().data());
        bool ret_impl = ((cocos2d::extension::CCComAttribute*)m_cocos2d_impl)->parse((std::string)(arg0));
        
        
        return ret_impl;
    }

    int CCComAttribute::getInt(String arg0, int arg1) {

        int ret_impl = ((cocos2d::extension::CCComAttribute*)m_cocos2d_impl)->getInt((char*)(arg0.utf8().data()), (int)(arg1));
        
        
        return ret_impl;
    }

    bool CCComAttribute::init() {

        bool ret_impl = ((cocos2d::extension::CCComAttribute*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    void CCComAttribute::setBool(String arg0, bool arg1) {

        ((cocos2d::extension::CCComAttribute*)m_cocos2d_impl)->setBool((char*)(arg0.utf8().data()), (bool)(arg1));
    }

    ScriptValue CCComAttribute::createInternal(ScriptState* scriptState) {

        cocos2d::extension::CCComAttribute* ret_impl = cocos2d::extension::CCComAttribute::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCComAttribute)
        
    }

    ScriptValue CCComAttribute::createInstance(ScriptState* scriptState) {

        cocos2d::CCObject* ret_impl = cocos2d::extension::CCComAttribute::createInstance();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCObject)
        
    }
    cocos2d::extension::CCComAttribute* CCComAttribute::getCocos2dImpl() {
        return (cocos2d::extension::CCComAttribute*)m_cocos2d_impl;
    }


    CCComAttribute::CCComAttribute() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCComAttribute> CCComAttribute::create()
    {
        RefPtrWillBeRawPtr<CCComAttribute> ret = adoptRefWillBeNoop(new CCComAttribute());
        return ret.release();
    }


    CCComAttribute::~CCComAttribute() {
    }
} // namespace blink
