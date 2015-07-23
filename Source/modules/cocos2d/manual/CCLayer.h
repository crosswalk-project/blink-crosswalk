// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCLayer_h__
#define __CCLayer_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"

namespace cocos2d {
    class CCLayer;
    class CCTouch;
}

namespace blink {

class CCLayer 
		:public CCNode
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCLayer> create();
    
    void unregisterScriptTouchHandler();
    
    void keyBackClicked();
    
    bool ccTouchBegan(CCTouch* arg0, CCEvent* arg1);
    
    void setAccelerometerInterval(double arg0);
    
    void ccTouchesCancelled(CCSet* arg0, CCEvent* arg1);
    
    void unregisterScriptAccelerateHandler();
    
    void ccTouchesMoved(CCSet* arg0, CCEvent* arg1);
    
    void registerScriptAccelerateHandler(int arg0);
    
    int getTouchMode();
    
    void setAccelerometerEnabled(bool arg0);
    
    bool init();
    
    bool isTouchEnabled();
    
    void ccTouchMoved(CCTouch* arg0, CCEvent* arg1);
    
    void setTouchEnabled(bool arg0);
    
    void unregisterScriptKeypadHandler();
    
    bool isKeypadEnabled();
    
    void ccTouchesEnded(CCSet* arg0, CCEvent* arg1);
    
    bool isAccelerometerEnabled();
    
    void ccTouchEnded(CCTouch* arg0, CCEvent* arg1);
    
    void registerScriptTouchHandler(int arg0, bool arg1, int arg2, bool arg3);
    
    void ccTouchCancelled(CCTouch* arg0, CCEvent* arg1);
    
    void ccTouchesBegan(CCSet* arg0, CCEvent* arg1);
    
    void setTouchPriority(int arg0);
    
    int getTouchPriority();
    
    void setKeypadEnabled(bool arg0);
    
    void registerWithTouchDispatcher();

    void registerTargetedWithTouchDispatcher(int priority, bool swallowsTouches);
    
    void keyMenuClicked();
    
    void registerScriptKeypadHandler(int arg0);
    
    void setTouchMode(int mode);

    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::CCLayer* getCocos2dImpl();
    ~CCLayer();
public:
    CCLayer ();
};

DEFINE_TYPE_CASTS(CCLayer, CCNode, pCCLayer, true, true);

} // namespace blink

#endif
