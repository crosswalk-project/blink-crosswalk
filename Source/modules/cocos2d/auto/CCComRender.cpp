// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCComRender.h"

namespace blink {

    void CCComRender::setNode(CCNode* arg0) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCComRender*)m_cocos2d_impl)->setNode( _arg0);
    }

    bool CCComRender::serialize(PassRefPtr<Uint8Array> arg0) {

        bool ret_impl = ((cocos2d::extension::CCComRender*)m_cocos2d_impl)->serialize((void*)(arg0.get()->data()));
        
        
        return ret_impl;
    }

    ScriptValue CCComRender::getNode(ScriptState* scriptState) {

        cocos2d::CCNode* ret_impl = ((cocos2d::extension::CCComRender*)m_cocos2d_impl)->getNode();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }
    ScriptValue CCComRender::createInternal(ScriptState* scriptState) {

        cocos2d::extension::CCComRender* ret_impl = cocos2d::extension::CCComRender::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCComRender)
        
    }
    ScriptValue CCComRender::createInternal(ScriptState* scriptState, CCNode* arg0, String arg1) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        cocos2d::extension::CCComRender* ret_impl = cocos2d::extension::CCComRender::create( _arg0, (char*)(arg1.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCComRender)
        
    }

    ScriptValue CCComRender::createInstance(ScriptState* scriptState) {

        cocos2d::CCObject* ret_impl = cocos2d::extension::CCComRender::createInstance();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCObject)
        
    }
    cocos2d::extension::CCComRender* CCComRender::getCocos2dImpl() {
        return (cocos2d::extension::CCComRender*)m_cocos2d_impl;
    }


    CCComRender::CCComRender() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCComRender> CCComRender::create()
    {
        RefPtrWillBeRawPtr<CCComRender> ret = adoptRefWillBeNoop(new CCComRender());
        return ret.release();
    }


    CCComRender::~CCComRender() {
    }
} // namespace blink
