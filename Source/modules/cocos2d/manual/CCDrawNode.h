// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCDrawNode_h__
#define __CCDrawNode_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCDrawNode;
}

namespace blink {

class CCDrawNode 
		:public CCNode
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCDrawNode> create();
    
    void draw();
    
    void clear();
    
    bool init();
    
    void drawDot(CCPoint* arg0, float arg1, ccColor4F* arg2);
    
    void drawSegment(CCPoint* arg0, CCPoint* arg1, float arg2, ccColor4F* arg3);

    void drawPoly(const Vector<RefPtr<CCPoint>>& arg0, ccColor4F* arg1, float arg2, ccColor4F* arg3);

    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::CCDrawNode* getCocos2dImpl();
    ~CCDrawNode();
public:
    CCDrawNode ();
};

DEFINE_TYPE_CASTS(CCDrawNode, CCNode, pCCDrawNode, true, true);

} // namespace blink

#endif
