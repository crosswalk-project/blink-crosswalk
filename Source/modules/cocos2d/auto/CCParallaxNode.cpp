// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCParallaxNode.h"

namespace blink {

    void CCParallaxNode::addChild(ScriptValue& arg0_wrapper, unsigned int arg1, int arg2) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCParallaxNode*)m_cocos2d_impl)->addChild( _arg0, (unsigned int)(arg1), (int)(arg2));
    }

    void CCParallaxNode::addChild(ScriptValue& arg0_wrapper, unsigned int arg1, CCPoint* arg2, CCPoint* arg3) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());
        cocos2d::CCPoint* _arg2 = (cocos2d::CCPoint*)(arg2->getCocos2dImpl());
        cocos2d::CCPoint* _arg3 = (cocos2d::CCPoint*)(arg3->getCocos2dImpl());

        ((cocos2d::CCParallaxNode*)m_cocos2d_impl)->addChild( _arg0, (unsigned int)(arg1),  *_arg2,  *_arg3);
    }

    void CCParallaxNode::visit() {

        ((cocos2d::CCParallaxNode*)m_cocos2d_impl)->visit();
    }

    void CCParallaxNode::removeAllChildrenWithCleanup(bool arg0) {

        ((cocos2d::CCParallaxNode*)m_cocos2d_impl)->removeAllChildrenWithCleanup((bool)(arg0));
    }

    void CCParallaxNode::removeChild(ScriptValue& arg0_wrapper, bool arg1) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCParallaxNode*)m_cocos2d_impl)->removeChild( _arg0, (bool)(arg1));
    }

    ScriptValue CCParallaxNode::createInternal(ScriptState* scriptState) {

        cocos2d::CCParallaxNode* ret_impl = cocos2d::CCParallaxNode::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCParallaxNode)
        
    }
    cocos2d::CCParallaxNode* CCParallaxNode::getCocos2dImpl() {
        return (cocos2d::CCParallaxNode*)m_cocos2d_impl;
    }


    CCParallaxNode::CCParallaxNode() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCParallaxNode> CCParallaxNode::create()
    {
        RefPtrWillBeRawPtr<CCParallaxNode> ret = adoptRefWillBeNoop(new CCParallaxNode());
        cocos2d::CCParallaxNode* impl = new cocos2d::CCParallaxNode();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCParallaxNode::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCParallaxNode::~CCParallaxNode() {
    }
} // namespace blink
