// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCControlSlider_h__
#define __CCControlSlider_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class CCControlSlider;
    }
}

namespace blink {

class CCControlSlider 
		:public CCControl
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCControlSlider> create();
    
    PassRefPtrWillBeRawPtr<CCPoint> locationFromTouch(CCTouch* arg0);
    
    void setProgressSprite(CCSprite* arg0);
    
    float getMaximumAllowedValue();
    
    float getMinimumAllowedValue();
    
    float getMinimumValue();
    
    void setThumbSprite(CCSprite* arg0);
    
    void setMinimumValue(float arg0);
    
    void setMinimumAllowedValue(float arg0);
    
    void setEnabled(bool arg0);
    
    void setValue(float arg0);
    
    void setMaximumValue(float arg0);
    
    void needsLayout();
    
    ScriptValue getBackgroundSprite(ScriptState* scriptState);
    
    bool initWithSprites(CCSprite* arg0, CCSprite* arg1, CCSprite* arg2);
    
    float getMaximumValue();
    
    bool isTouchInside(CCTouch* arg0);
    
    float getValue();
    
    ScriptValue getThumbSprite(ScriptState* scriptState);
    
    ScriptValue getProgressSprite(ScriptState* scriptState);
    
    void setBackgroundSprite(CCSprite* arg0);
    
    void setMaximumAllowedValue(float arg0);
    static ScriptValue createInternal(ScriptState* scriptState, CCSprite* arg0, CCSprite* arg1, CCSprite* arg2);
    static ScriptValue createInternal(ScriptState* scriptState, String arg0, String arg1, String arg2);
    cocos2d::extension::CCControlSlider* getCocos2dImpl();
    ~CCControlSlider();
public:
    CCControlSlider ();
};

DEFINE_TYPE_CASTS(CCControlSlider, CCControl, pCCControlSlider, true, true);

} // namespace blink

#endif
