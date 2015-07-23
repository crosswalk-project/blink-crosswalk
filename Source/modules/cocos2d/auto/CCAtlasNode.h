// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCAtlasNode_h__
#define __CCAtlasNode_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCAtlasNode;
}

namespace blink {

class CCAtlasNode 
		:public CCNodeRGBA
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCAtlasNode> create();
    
    void setTexture(CCTexture2D* arg0);
    
    void draw();
    
    bool initWithTileFile(String arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3);
    
    void setColor(ccColor3B* arg0);
    
    void setOpacity(unsigned char arg0);
    
    ScriptValue getTexture(ScriptState* scriptState);
    
    void setOpacityModifyRGB(bool arg0);
    
    unsigned int getQuadsToDraw();
    
    void updateAtlasValues();
    
    PassRefPtrWillBeRawPtr<ccColor3B> getColor();
    
    bool initWithTexture(CCTexture2D* arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3);
    
    bool isOpacityModifyRGB();
    
    void setQuadsToDraw(unsigned int arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState, String arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3);
    cocos2d::CCAtlasNode* getCocos2dImpl();
    ~CCAtlasNode();
public:
    CCAtlasNode ();
};

DEFINE_TYPE_CASTS(CCAtlasNode, CCNodeRGBA, pCCAtlasNode, true, true);

} // namespace blink

#endif
