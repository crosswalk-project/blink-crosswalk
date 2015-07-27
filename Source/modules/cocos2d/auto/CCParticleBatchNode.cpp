// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCParticleBatchNode.h"

namespace blink {

    void CCParticleBatchNode::removeChildAtIndex(unsigned int arg0, bool arg1) {

        ((cocos2d::CCParticleBatchNode*)m_cocos2d_impl)->removeChildAtIndex((unsigned int)(arg0), (bool)(arg1));
    }

    void CCParticleBatchNode::addChild(ScriptValue& arg0_wrapper, int arg1) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCParticleBatchNode*)m_cocos2d_impl)->addChild( _arg0, (int)(arg1));
    }

    void CCParticleBatchNode::addChild(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCParticleBatchNode*)m_cocos2d_impl)->addChild( _arg0);
    }

    void CCParticleBatchNode::addChild(ScriptValue& arg0_wrapper, int arg1, int arg2) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCParticleBatchNode*)m_cocos2d_impl)->addChild( _arg0, (int)(arg1), (int)(arg2));
    }

    void CCParticleBatchNode::draw() {

        ((cocos2d::CCParticleBatchNode*)m_cocos2d_impl)->draw();
    }

    void CCParticleBatchNode::setTexture(CCTexture2D* arg0) {
        cocos2d::CCTexture2D* _arg0 = (cocos2d::CCTexture2D*)(arg0->getCocos2dImpl());

        ((cocos2d::CCParticleBatchNode*)m_cocos2d_impl)->setTexture( _arg0);
    }

    bool CCParticleBatchNode::initWithFile(String arg0, unsigned int arg1) {

        bool ret_impl = ((cocos2d::CCParticleBatchNode*)m_cocos2d_impl)->initWithFile((char*)(arg0.utf8().data()), (unsigned int)(arg1));
        
        
        return ret_impl;
    }

    void CCParticleBatchNode::disableParticle(unsigned int arg0) {

        ((cocos2d::CCParticleBatchNode*)m_cocos2d_impl)->disableParticle((unsigned int)(arg0));
    }

    ScriptValue CCParticleBatchNode::getTexture(ScriptState* scriptState) {

        cocos2d::CCTexture2D* ret_impl = ((cocos2d::CCParticleBatchNode*)m_cocos2d_impl)->getTexture();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTexture2D)
        
    }

    void CCParticleBatchNode::visit() {

        ((cocos2d::CCParticleBatchNode*)m_cocos2d_impl)->visit();
    }

    void CCParticleBatchNode::removeAllChildrenWithCleanup(bool arg0) {

        ((cocos2d::CCParticleBatchNode*)m_cocos2d_impl)->removeAllChildrenWithCleanup((bool)(arg0));
    }

    void CCParticleBatchNode::removeChild(ScriptValue& arg0_wrapper, bool arg1) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCParticleBatchNode*)m_cocos2d_impl)->removeChild( _arg0, (bool)(arg1));
    }

    void CCParticleBatchNode::insertChild(ScriptValue& arg0_wrapper, unsigned int arg1) {
        SCRIPT_VALUE_WRAPPER(CCParticleSystem, arg0_wrapper, arg0);
        cocos2d::CCParticleSystem* _arg0 = (cocos2d::CCParticleSystem*)(arg0->getCocos2dImpl());

        ((cocos2d::CCParticleBatchNode*)m_cocos2d_impl)->insertChild( _arg0, (unsigned int)(arg1));
    }

    bool CCParticleBatchNode::initWithTexture(CCTexture2D* arg0, unsigned int arg1) {
        cocos2d::CCTexture2D* _arg0 = (cocos2d::CCTexture2D*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCParticleBatchNode*)m_cocos2d_impl)->initWithTexture( _arg0, (unsigned int)(arg1));
        
        
        return ret_impl;
    }

    void CCParticleBatchNode::reorderChild(ScriptValue& arg0_wrapper, int arg1) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCParticleBatchNode*)m_cocos2d_impl)->reorderChild( _arg0, (int)(arg1));
    }

    ScriptValue CCParticleBatchNode::createInternal(ScriptState* scriptState, String arg0, unsigned int arg1) {

        cocos2d::CCParticleBatchNode* ret_impl = cocos2d::CCParticleBatchNode::create((char*)(arg0.utf8().data()), (unsigned int)(arg1));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCParticleBatchNode)
        
    }

    ScriptValue CCParticleBatchNode::createWithTexture(ScriptState* scriptState, CCTexture2D* arg0, unsigned int arg1) {
        cocos2d::CCTexture2D* _arg0 = (cocos2d::CCTexture2D*)(arg0->getCocos2dImpl());

        cocos2d::CCParticleBatchNode* ret_impl = cocos2d::CCParticleBatchNode::createWithTexture( _arg0, (unsigned int)(arg1));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCParticleBatchNode)
        
    }
    cocos2d::CCParticleBatchNode* CCParticleBatchNode::getCocos2dImpl() {
        return (cocos2d::CCParticleBatchNode*)m_cocos2d_impl;
    }


    CCParticleBatchNode::CCParticleBatchNode() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCParticleBatchNode> CCParticleBatchNode::create()
    {
        RefPtrWillBeRawPtr<CCParticleBatchNode> ret = adoptRefWillBeNoop(new CCParticleBatchNode());
        cocos2d::CCParticleBatchNode* impl = new cocos2d::CCParticleBatchNode();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCParticleBatchNode::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCParticleBatchNode::~CCParticleBatchNode() {
    }
} // namespace blink
