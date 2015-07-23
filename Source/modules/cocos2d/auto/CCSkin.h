// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCSkin_h__
#define __CCSkin_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class CCSkin;
    }
}

namespace blink {

class CCSkin 
		:public CCSprite
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCSkin> create();
    
    ScriptValue getBone(ScriptState* scriptState);
    
    PassRefPtrWillBeRawPtr<CCAffineTransform> nodeToWorldTransform();
    
    bool initWithFile(String arg0);
    
    PassRefPtrWillBeRawPtr<CCAffineTransform> nodeToWorldTransformAR();
    
    void updateTransform();
    
    String getDisplayName();
    
    void updateArmatureTransform();
    
    bool initWithSpriteFrameName(String arg0);
    
    void setBone(CCBone* arg0);
    static ScriptValue createInternal(ScriptState* scriptState, String arg0);
    static ScriptValue createInternal(ScriptState* scriptState);
    
    static ScriptValue createWithSpriteFrameName(ScriptState* scriptState, String arg0);
    cocos2d::extension::CCSkin* getCocos2dImpl();
    ~CCSkin();
public:
    CCSkin ();
};

DEFINE_TYPE_CASTS(CCSkin, CCSprite, pCCSkin, true, true);

} // namespace blink

#endif
