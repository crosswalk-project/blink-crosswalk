// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCClippingNode.h"

namespace blink {

    void CCClippingNode::setInverted(bool arg0) {

        ((cocos2d::CCClippingNode*)m_cocos2d_impl)->setInverted((bool)(arg0));
    }

    void CCClippingNode::visit() {

        ((cocos2d::CCClippingNode*)m_cocos2d_impl)->visit();
    }

    void CCClippingNode::setStencil(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCClippingNode*)m_cocos2d_impl)->setStencil( _arg0);
    }

    float CCClippingNode::getAlphaThreshold() {

        float ret_impl = ((cocos2d::CCClippingNode*)m_cocos2d_impl)->getAlphaThreshold();
        
        
        return ret_impl;
    }

    bool CCClippingNode::init(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCClippingNode*)m_cocos2d_impl)->init( _arg0);
        
        
        return ret_impl;
    }

    bool CCClippingNode::init() {

        bool ret_impl = ((cocos2d::CCClippingNode*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    ScriptValue CCClippingNode::getStencil(ScriptState* scriptState) {

        cocos2d::CCNode* ret_impl = ((cocos2d::CCClippingNode*)m_cocos2d_impl)->getStencil();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    void CCClippingNode::setAlphaThreshold(float arg0) {

        ((cocos2d::CCClippingNode*)m_cocos2d_impl)->setAlphaThreshold((float)(arg0));
    }

    bool CCClippingNode::isInverted() {

        bool ret_impl = ((cocos2d::CCClippingNode*)m_cocos2d_impl)->isInverted();
        
        
        return ret_impl;
    }
    ScriptValue CCClippingNode::createInternal(ScriptState* scriptState, ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        cocos2d::CCClippingNode* ret_impl = cocos2d::CCClippingNode::create( _arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCClippingNode)
        
    }
    ScriptValue CCClippingNode::createInternal(ScriptState* scriptState) {

        cocos2d::CCClippingNode* ret_impl = cocos2d::CCClippingNode::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCClippingNode)
        
    }
    cocos2d::CCClippingNode* CCClippingNode::getCocos2dImpl() {
        return (cocos2d::CCClippingNode*)m_cocos2d_impl;
    }


    CCClippingNode::CCClippingNode() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCClippingNode> CCClippingNode::create()
    {
        RefPtrWillBeRawPtr<CCClippingNode> ret = adoptRefWillBeNoop(new CCClippingNode());
        return ret.release();
    }


    CCClippingNode::~CCClippingNode() {
    }
} // namespace blink
