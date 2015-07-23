// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCClippingNode_h__
#define __CCClippingNode_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCClippingNode;
}

namespace blink {

class CCClippingNode 
		:public CCNode
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCClippingNode> create();
    
    void setInverted(bool arg0);
    
    void visit();
    
    void setStencil(ScriptValue& arg0);
    
    float getAlphaThreshold();
    bool init(ScriptValue& arg0);
    bool init();
    
    ScriptValue getStencil(ScriptState* scriptState);
    
    void setAlphaThreshold(float arg0);
    
    bool isInverted();
    static ScriptValue createInternal(ScriptState* scriptState, ScriptValue& arg0);
    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::CCClippingNode* getCocos2dImpl();
    ~CCClippingNode();
public:
    CCClippingNode ();
};

DEFINE_TYPE_CASTS(CCClippingNode, CCNode, pCCClippingNode, true, true);

} // namespace blink

#endif
