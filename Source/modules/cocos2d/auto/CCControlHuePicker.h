// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCControlHuePicker_h__
#define __CCControlHuePicker_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class CCControlHuePicker;
    }
}

namespace blink {

class CCControlHuePicker 
		:public CCControl
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCControlHuePicker> create();
    
    void setEnabled(bool arg0);
    
    bool initWithTargetAndPos(CCNode* arg0, CCPoint* arg1);
    
    void setHue(float arg0);
    
    PassRefPtrWillBeRawPtr<CCPoint> getStartPos();
    
    float getHue();
    
    ScriptValue getSlider(ScriptState* scriptState);
    
    void setBackground(CCSprite* arg0);
    
    void setHuePercentage(float arg0);
    
    ScriptValue getBackground(ScriptState* scriptState);
    
    float getHuePercentage();
    
    void setSlider(CCSprite* arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState, CCNode* arg0, CCPoint* arg1);
    cocos2d::extension::CCControlHuePicker* getCocos2dImpl();
    ~CCControlHuePicker();
public:
    CCControlHuePicker ();
};

DEFINE_TYPE_CASTS(CCControlHuePicker, CCControl, pCCControlHuePicker, true, true);

} // namespace blink

#endif
