// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCArmature_h__
#define __CCArmature_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class CCArmature;
    }
}

namespace blink {

class CCArmature 
		:public CCNodeRGBA
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCArmature> create();
    
    ScriptValue getBone(ScriptState* scriptState, String arg0);
    
    void changeBoneParent(CCBone* arg0, String arg1);
    
    void setAnimation(CCArmatureAnimation* arg0);
    
    ScriptValue getBoneAtPoint(ScriptState* scriptState, float arg0, float arg1);
    
    ScriptValue getBatchNode(ScriptState* scriptState);
    
    void setVersion(float arg0);
    
    void updateOffsetPoint();
    
    ScriptValue getParentBone(ScriptState* scriptState);
    
    void setName(String arg0);
    
    void removeBone(CCBone* arg0, bool arg1);
    
    bool getArmatureTransformDirty();
    
    String getName();
    bool init(String arg0);
    bool init();
    bool init(String arg0, CCBone* arg1);
    
    void setParentBone(CCBone* arg0);
    
    void drawContour();
    
    void setBatchNode(CCBatchNode* arg0);
    
    void draw();
    
    PassRefPtrWillBeRawPtr<CCAffineTransform> nodeToParentTransform();
    
    void addBone(CCBone* arg0, String arg1);
    
    void update(float arg0);
    
    PassRefPtrWillBeRawPtr<CCRect> boundingBox();
    
    float getVersion();
    
    ScriptValue getAnimation(ScriptState* scriptState);
    
    ScriptValue getBoneDic(ScriptState* scriptState);
    static ScriptValue createInternal(ScriptState* scriptState, String arg0);
    static ScriptValue createInternal(ScriptState* scriptState);
    static ScriptValue createInternal(ScriptState* scriptState, String arg0, CCBone* arg1);
    cocos2d::extension::CCArmature* getCocos2dImpl();
    ~CCArmature();
public:
    CCArmature ();
};

DEFINE_TYPE_CASTS(CCArmature, CCNodeRGBA, pCCArmature, true, true);

} // namespace blink

#endif
