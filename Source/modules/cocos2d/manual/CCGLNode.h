// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCGLNode_h__
#define __CCGLNode_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"


namespace cocos2d {
    class CCNode;
    class CCTouch;

    class CCGLNode : public CCNode {
     public:
     void draw(); 
    };
}

namespace blink {

class OnDrawCallback;

class CCGLNode : public CCNode {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*);
    static PassRefPtrWillBeRawPtr<CCGLNode> create();
    //used this function to call draw function implmented in JS side
    void callJSDraw();
    cocos2d::CCGLNode* getCocos2dImpl();
    void setDrawCallback(OnDrawCallback* callback);
    ~CCGLNode();
protected:
    Persistent<OnDrawCallback> m_onDraw;
public:
    CCGLNode ();
};

DEFINE_TYPE_CASTS(CCGLNode, CCObject, pCCGLNode, true, true);

} // namespace blink

#endif
