// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCDisplayManager_h__
#define __CCDisplayManager_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class CCDisplayManager;
    }
}

namespace blink {

class CCDisplayManager : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCDisplayManager> create();
    
    ScriptValue getDisplayRenderNode(ScriptState* scriptState);
    
    PassRefPtrWillBeRawPtr<CCPoint> getAnchorPointInPoints();
    
    int getDisplayRenderNodeType();
    
    void removeDisplay(int arg0);
    
    void setForceChangeDisplay(bool arg0);
    
    bool init(CCBone* arg0);
    
    PassRefPtrWillBeRawPtr<CCSize> getContentSize();
    
    PassRefPtrWillBeRawPtr<CCRect> getBoundingBox();
    void addDisplay(CCNode* arg0, int arg1);
    void addDisplay(PassRefPtr<Uint8Array> arg0, int arg1);
    bool containPoint(float arg0, float arg1);
    bool containPoint(CCPoint* arg0);
    
    void changeDisplayWithIndex(int arg0, bool arg1);
    
    void changeDisplayWithName(String arg0, bool arg1);
    
    int getCurrentDisplayIndex();
    
    void setVisible(bool arg0);
    
    PassRefPtrWillBeRawPtr<CCPoint> getAnchorPoint();
    
    ScriptValue getDecorativeDisplayList(ScriptState* scriptState);
    
    bool isVisible();
    
    bool getForceChangeDisplay();
    
    static ScriptValue createInternal(ScriptState* scriptState, CCBone* arg0);
    cocos2d::extension::CCDisplayManager* getCocos2dImpl();
    ~CCDisplayManager();
public:
    CCDisplayManager ();
};

DEFINE_TYPE_CASTS(CCDisplayManager, CCObject, pCCDisplayManager, true, true);

} // namespace blink

#endif
