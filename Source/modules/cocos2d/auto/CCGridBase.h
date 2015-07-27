// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCGridBase_h__
#define __CCGridBase_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCGridBase;
}

namespace blink {

class CCGridBase : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCGridBase> create();
    
    void setGridSize(CCSize* arg0);
    
    void calculateVertexPoints();
    
    void afterDraw(ScriptValue& arg0);
    
    void beforeDraw();
    
    bool isTextureFlipped();
    
    PassRefPtrWillBeRawPtr<CCSize> getGridSize();
    
    PassRefPtrWillBeRawPtr<CCPoint> getStep();
    
    void set2DProjection();
    
    void setStep(CCPoint* arg0);
    
    void setTextureFlipped(bool arg0);
    
    void blit();
    
    void setActive(bool arg0);
    
    int getReuseGrid();
    bool initWithSize(CCSize* arg0);
    bool initWithSize(CCSize* arg0, CCTexture2D* arg1, bool arg2);
    
    void setReuseGrid(int arg0);
    
    bool isActive();
    
    void reuse();
    static ScriptValue createInternal(ScriptState* scriptState, CCSize* arg0);
    static ScriptValue createInternal(ScriptState* scriptState, CCSize* arg0, CCTexture2D* arg1, bool arg2);
    cocos2d::CCGridBase* getCocos2dImpl();
    ~CCGridBase();
public:
    CCGridBase ();
};

DEFINE_TYPE_CASTS(CCGridBase, CCObject, pCCGridBase, true, true);

} // namespace blink

#endif
