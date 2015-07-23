// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCBatchNode_h__
#define __CCBatchNode_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class CCBatchNode;
    }
}

namespace blink {

class CCBatchNode 
		:public CCNode
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCBatchNode> create();
    void addChild(CCNode* arg0, int arg1);
    void addChild(CCNode* arg0);
    void addChild(CCNode* arg0, int arg1, int arg2);
    
    void removeChild(CCNode* arg0, bool arg1);
    
    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::extension::CCBatchNode* getCocos2dImpl();
    ~CCBatchNode();
public:
    CCBatchNode ();
};

DEFINE_TYPE_CASTS(CCBatchNode, CCNode, pCCBatchNode, true, true);

} // namespace blink

#endif
