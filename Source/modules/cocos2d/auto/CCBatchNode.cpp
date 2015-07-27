// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCBatchNode.h"

namespace blink {

    void CCBatchNode::addChild(CCNode* arg0, int arg1) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCBatchNode*)m_cocos2d_impl)->addChild( _arg0, (int)(arg1));
    }

    void CCBatchNode::addChild(CCNode* arg0) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCBatchNode*)m_cocos2d_impl)->addChild( _arg0);
    }

    void CCBatchNode::addChild(CCNode* arg0, int arg1, int arg2) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCBatchNode*)m_cocos2d_impl)->addChild( _arg0, (int)(arg1), (int)(arg2));
    }

    void CCBatchNode::removeChild(CCNode* arg0, bool arg1) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCBatchNode*)m_cocos2d_impl)->removeChild( _arg0, (bool)(arg1));
    }

    ScriptValue CCBatchNode::createInternal(ScriptState* scriptState) {

        cocos2d::extension::CCBatchNode* ret_impl = cocos2d::extension::CCBatchNode::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCBatchNode)
        
    }
    cocos2d::extension::CCBatchNode* CCBatchNode::getCocos2dImpl() {
        return (cocos2d::extension::CCBatchNode*)m_cocos2d_impl;
    }


    CCBatchNode::CCBatchNode() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCBatchNode> CCBatchNode::create()
    {
        RefPtrWillBeRawPtr<CCBatchNode> ret = adoptRefWillBeNoop(new CCBatchNode());
        return ret.release();
    }


    CCBatchNode::~CCBatchNode() {
    }
} // namespace blink
