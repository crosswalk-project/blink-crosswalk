// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCParallaxNode_h__
#define __CCParallaxNode_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCParallaxNode;
}

namespace blink {

class CCParallaxNode 
		:public CCNode
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCParallaxNode> create();
    void addChild(ScriptValue& arg0, unsigned int arg1, int arg2);
    void addChild(ScriptValue& arg0, unsigned int arg1, CCPoint* arg2, CCPoint* arg3);
    
    void visit();
    
    void removeAllChildrenWithCleanup(bool arg0);
    
    void removeChild(ScriptValue& arg0, bool arg1);
    
    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::CCParallaxNode* getCocos2dImpl();
    ~CCParallaxNode();
public:
    CCParallaxNode ();
};

DEFINE_TYPE_CASTS(CCParallaxNode, CCNode, pCCParallaxNode, true, true);

} // namespace blink

#endif
