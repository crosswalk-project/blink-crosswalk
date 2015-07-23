// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/manual/CCDrawNode.h"

namespace blink {

    void CCDrawNode::draw() {

        ((cocos2d::CCDrawNode*)m_cocos2d_impl)->draw();
    }

    void CCDrawNode::clear() {

        ((cocos2d::CCDrawNode*)m_cocos2d_impl)->clear();
    }

    bool CCDrawNode::init() {

        bool ret_impl = ((cocos2d::CCDrawNode*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    void CCDrawNode::drawDot(CCPoint* arg0, float arg1, ccColor4F* arg2) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());
        cocos2d::ccColor4F* _arg2 = (cocos2d::ccColor4F*)(arg2->getCocos2dImpl());

        ((cocos2d::CCDrawNode*)m_cocos2d_impl)->drawDot( *_arg0, (float)(arg1),  *_arg2);
    }

    void CCDrawNode::drawSegment(CCPoint* arg0, CCPoint* arg1, float arg2, ccColor4F* arg3) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());
        cocos2d::CCPoint* _arg1 = (cocos2d::CCPoint*)(arg1->getCocos2dImpl());
        cocos2d::ccColor4F* _arg3 = (cocos2d::ccColor4F*)(arg3->getCocos2dImpl());

        ((cocos2d::CCDrawNode*)m_cocos2d_impl)->drawSegment( *_arg0,  *_arg1, (float)(arg2),  *_arg3);
    }

    void CCDrawNode::drawPoly(const Vector<RefPtr<CCPoint>>& arg0, ccColor4F* arg1, float arg2, ccColor4F* arg3) {
        unsigned int length = arg0.size();
        cocos2d::CCPoint pointArray[length];
        for (unsigned int i = 0; i < length; i ++) {
            pointArray[i].x = arg0[i]->x();
            pointArray[i].y = arg0[i]->y();
        }

        cocos2d::ccColor4F* _arg1 = (cocos2d::ccColor4F*)(arg1->getCocos2dImpl());
        cocos2d::ccColor4F* _arg3 = (cocos2d::ccColor4F*)(arg3->getCocos2dImpl());
            
        ((cocos2d::CCDrawNode*)m_cocos2d_impl)->drawPolygon( pointArray, length, *_arg1, (float)(arg2),  *_arg3);
    }

    ScriptValue CCDrawNode::createInternal(ScriptState* scriptState) {

        cocos2d::CCDrawNode* ret_impl = cocos2d::CCDrawNode::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCDrawNode)
        
    }

    cocos2d::CCDrawNode* CCDrawNode::getCocos2dImpl() {
        return (cocos2d::CCDrawNode*)m_cocos2d_impl;
    }

    CCDrawNode::CCDrawNode() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCDrawNode> CCDrawNode::create()
    {
        RefPtrWillBeRawPtr<CCDrawNode> ret = adoptRefWillBeNoop(new CCDrawNode());
        cocos2d::CCDrawNode* impl = new cocos2d::CCDrawNode();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCDrawNode::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCDrawNode::~CCDrawNode() {
    }
} // namespace blink
