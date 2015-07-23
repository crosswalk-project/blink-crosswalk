// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCLabelAtlas.h"

namespace blink {

    void CCLabelAtlas::setString(String arg0) {

        ((cocos2d::CCLabelAtlas*)m_cocos2d_impl)->setString((char*)(arg0.utf8().data()));
    }

    bool CCLabelAtlas::initWithString(String arg0, String arg1) {

        bool ret_impl = ((cocos2d::CCLabelAtlas*)m_cocos2d_impl)->initWithString((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()));
        
        
        return ret_impl;
    }

    bool CCLabelAtlas::initWithString(String arg0, String arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4) {

        bool ret_impl = ((cocos2d::CCLabelAtlas*)m_cocos2d_impl)->initWithString((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()), (unsigned int)(arg2), (unsigned int)(arg3), (unsigned int)(arg4));
        
        
        return ret_impl;
    }

    bool CCLabelAtlas::initWithString(String arg0, CCTexture2D* arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4) {
        cocos2d::CCTexture2D* _arg1 = (cocos2d::CCTexture2D*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCLabelAtlas*)m_cocos2d_impl)->initWithString((char*)(arg0.utf8().data()),  _arg1, (unsigned int)(arg2), (unsigned int)(arg3), (unsigned int)(arg4));
        
        
        return ret_impl;
    }

    void CCLabelAtlas::updateAtlasValues() {

        ((cocos2d::CCLabelAtlas*)m_cocos2d_impl)->updateAtlasValues();
    }

    String CCLabelAtlas::getString() {

        const String ret_impl = ((cocos2d::CCLabelAtlas*)m_cocos2d_impl)->getString();
        
        
        return ret_impl;
    }
    ScriptValue CCLabelAtlas::createInternal(ScriptState* scriptState, String arg0, String arg1) {

        cocos2d::CCLabelAtlas* ret_impl = cocos2d::CCLabelAtlas::create((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCLabelAtlas)
        
    }
    ScriptValue CCLabelAtlas::createInternal(ScriptState* scriptState, String arg0, String arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4) {

        cocos2d::CCLabelAtlas* ret_impl = cocos2d::CCLabelAtlas::create((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()), (unsigned int)(arg2), (unsigned int)(arg3), (unsigned int)(arg4));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCLabelAtlas)
        
    }
    cocos2d::CCLabelAtlas* CCLabelAtlas::getCocos2dImpl() {
        return (cocos2d::CCLabelAtlas*)m_cocos2d_impl;
    }


    CCLabelAtlas::CCLabelAtlas() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCLabelAtlas> CCLabelAtlas::create()
    {
        RefPtrWillBeRawPtr<CCLabelAtlas> ret = adoptRefWillBeNoop(new CCLabelAtlas());
        cocos2d::CCLabelAtlas* impl = new cocos2d::CCLabelAtlas();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCLabelAtlas::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCLabelAtlas::~CCLabelAtlas() {
    }
} // namespace blink
