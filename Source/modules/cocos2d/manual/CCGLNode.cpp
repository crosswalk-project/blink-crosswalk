// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"
#include "bindings/modules/v8/V8CCGLNode.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/manual/CCGLNode.h"
#include "modules/cocos2d/events/OnDrawCallback.h"

namespace cocos2d{

void CCGLNode::draw() {

     blink::CCGLNode* crosswalkImpl = (blink::CCGLNode*)(getCrosswalkImpl());
     if(crosswalkImpl!=NULL)
         crosswalkImpl->callJSDraw();
  
}
}

namespace blink {
    cocos2d::CCGLNode* CCGLNode::getCocos2dImpl() {
        return (cocos2d::CCGLNode*)m_cocos2d_impl;
    }

    void CCGLNode::setDrawCallback(OnDrawCallback* callback)
    {
       m_onDraw = callback;
    }
    
    CCGLNode::CCGLNode() {
        m_onDraw = nullptr;
        m_cocos2d_impl = NULL;
    }

    void CCGLNode::callJSDraw()
    {
       //first function Draw function
       if(m_onDraw!=NULL)
        m_onDraw->handleEvent();
       //then we call it
    }

    PassRefPtrWillBeRawPtr<CCGLNode> CCGLNode::create()
    {
        RefPtrWillBeRawPtr<CCGLNode> ret = adoptRefWillBeNoop(new CCGLNode());
        cocos2d::CCGLNode* impl = new cocos2d::CCGLNode();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCGLNode::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
        
    }

    CCGLNode::~CCGLNode() {
        m_onDraw = nullptr;
    }
} // namespace blink
