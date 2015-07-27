// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCSpriteBatchNode_h__
#define __CCSpriteBatchNode_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCSpriteBatchNode;
}

namespace blink {

class CCSpriteBatchNode 
		:public CCNode
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCSpriteBatchNode> create();
    
    void appendChild(ScriptValue& arg0);
    
    void reorderBatch(bool arg0);
    
    ScriptValue getTexture(ScriptState* scriptState);
    
    void visit();
    
    void removeAllChildren(bool arg0);
    
    void setTexture(CCTexture2D* arg0);
    void addChild(ScriptValue& arg0, int arg1);
    void addChild(ScriptValue& arg0);
    void addChild(ScriptValue& arg0, int arg1, int arg2);
    
    void removeChildAtIndex(unsigned int arg0, bool arg1);
    
    void removeSpriteFromAtlas(ScriptValue& arg0);
    
    unsigned int atlasIndexForChild(ScriptValue& arg0, int arg1);
    
    void increaseAtlasCapacity();
    
    bool init();
    
    void insertChild(ScriptValue& arg0, unsigned int arg1);
    
    unsigned int lowestAtlasIndexInChild(ScriptValue& arg0);
    
    void draw();
    
    bool initWithTexture(CCTexture2D* arg0, unsigned int arg1);
    
    void sortAllChildren();
    
    void reorderChild(ScriptValue& arg0, int arg1);
    
    bool initWithFile(String arg0, unsigned int arg1);
    
    unsigned int rebuildIndexInOrder(ScriptValue& arg0, unsigned int arg1);
    
    ScriptValue getDescendants(ScriptState* scriptState);
    
    void removeChild(ScriptValue& arg0, bool arg1);
    
    unsigned int highestAtlasIndexInChild(ScriptValue& arg0);
    static ScriptValue createInternal(ScriptState* scriptState, String arg0);
    static ScriptValue createInternal(ScriptState* scriptState, String arg0, unsigned int arg1);
    static ScriptValue createWithTexture(ScriptState* scriptState, CCTexture2D* arg0);
    static ScriptValue createWithTexture(ScriptState* scriptState, CCTexture2D* arg0, unsigned int arg1);
    cocos2d::CCSpriteBatchNode* getCocos2dImpl();
    ~CCSpriteBatchNode();
public:
    CCSpriteBatchNode ();
};

DEFINE_TYPE_CASTS(CCSpriteBatchNode, CCNode, pCCSpriteBatchNode, true, true);

} // namespace blink

#endif
