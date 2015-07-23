// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCBone_h__
#define __CCBone_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class CCBone;
    }
}

namespace blink {

class CCBone 
		:public CCNodeRGBA
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCBone> create();
    
    PassRefPtrWillBeRawPtr<CCAffineTransform> nodeToWorldTransform();
    
    bool isTransformDirty();
    
    void updateZOrder();
    
    void setTransformDirty(bool arg0);
    
    ScriptValue getDisplayRenderNode(ScriptState* scriptState);
    
    bool isBlendDirty();
    
    void addChildBone(CCBone* arg0);
    
    ScriptValue getWorldInfo(ScriptState* scriptState);
    
    ScriptValue getTween(ScriptState* scriptState);
    
    ScriptValue getParentBone(ScriptState* scriptState);
    
    void updateColor();
    
    void setChildArmature(CCArmature* arg0);
    
    String getName();
    
    void setOpacity(unsigned char arg0);
    
    int getDisplayRenderNodeType();
    
    void removeDisplay(int arg0);
    
    void updateDisplayedOpacity(unsigned char arg0);
    bool init(String arg0);
    bool init();
    
    void setParentBone(CCBone* arg0);
    
    void setZOrder(int arg0);
    
    bool getIgnoreMovementBoneData();
    
    void setIgnoreMovementBoneData(bool arg0);
    
    void setName(String arg0);
    
    void removeFromParent(bool arg0);
    
    ScriptValue getChildArmature(ScriptState* scriptState);
    
    void update(float arg0);
    
    void setDisplayManager(CCDisplayManager* arg0);
    
    void changeDisplayWithIndex(int arg0, bool arg1);
    
    void changeDisplayWithName(String arg0, bool arg1);
    
    ScriptValue getColliderBodyList(ScriptState* scriptState);
    
    void setArmature(CCArmature* arg0);
    
    void setBlendDirty(bool arg0);
    void addDisplay(CCNode* arg0, int arg1);
    void addDisplay(PassRefPtr<Uint8Array> arg0, int arg1);
    
    void setColor(ccColor3B* arg0);
    
    void removeChildBone(CCBone* arg0, bool arg1);
    
    ScriptValue getDisplayManager(ScriptState* scriptState);
    
    ScriptValue getArmature(ScriptState* scriptState);
    
    PassRefPtrWillBeRawPtr<CCAffineTransform> nodeToArmatureTransform();
    
    void updateDisplayedColor(ccColor3B* arg0);
    static ScriptValue createInternal(ScriptState* scriptState, String arg0);
    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::extension::CCBone* getCocos2dImpl();
    ~CCBone();
public:
    CCBone ();
};

DEFINE_TYPE_CASTS(CCBone, CCNodeRGBA, pCCBone, true, true);

} // namespace blink

#endif
