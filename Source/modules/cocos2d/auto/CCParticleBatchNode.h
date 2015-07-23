// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCParticleBatchNode_h__
#define __CCParticleBatchNode_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCParticleBatchNode;
}

namespace blink {

class CCParticleBatchNode 
		:public CCNode
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCParticleBatchNode> create();
    
    void removeChildAtIndex(unsigned int arg0, bool arg1);
    void addChild(ScriptValue& arg0, int arg1);
    void addChild(ScriptValue& arg0);
    void addChild(ScriptValue& arg0, int arg1, int arg2);
    
    void draw();
    
    void setTexture(CCTexture2D* arg0);
    
    bool initWithFile(String arg0, unsigned int arg1);
    
    void disableParticle(unsigned int arg0);
    
    ScriptValue getTexture(ScriptState* scriptState);
    
    void visit();
    
    void removeAllChildrenWithCleanup(bool arg0);
    
    void removeChild(ScriptValue& arg0, bool arg1);
    
    void insertChild(ScriptValue& arg0, unsigned int arg1);
    
    bool initWithTexture(CCTexture2D* arg0, unsigned int arg1);
    
    void reorderChild(ScriptValue& arg0, int arg1);
    
    static ScriptValue createInternal(ScriptState* scriptState, String arg0, unsigned int arg1);
    
    static ScriptValue createWithTexture(ScriptState* scriptState, CCTexture2D* arg0, unsigned int arg1);
    cocos2d::CCParticleBatchNode* getCocos2dImpl();
    ~CCParticleBatchNode();
public:
    CCParticleBatchNode ();
};

DEFINE_TYPE_CASTS(CCParticleBatchNode, CCNode, pCCParticleBatchNode, true, true);

} // namespace blink

#endif
