// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCControlSaturationBrightnessPicker_h__
#define __CCControlSaturationBrightnessPicker_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class CCControlSaturationBrightnessPicker;
    }
}

namespace blink {

class CCControlSaturationBrightnessPicker 
		:public CCControl
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCControlSaturationBrightnessPicker> create();
    
    ScriptValue getShadow(ScriptState* scriptState);
    
    bool initWithTargetAndPos(CCNode* arg0, CCPoint* arg1);
    
    PassRefPtrWillBeRawPtr<CCPoint> getStartPos();
    
    ScriptValue getOverlay(ScriptState* scriptState);
    
    void setEnabled(bool arg0);
    
    ScriptValue getSlider(ScriptState* scriptState);
    
    ScriptValue getBackground(ScriptState* scriptState);
    
    float getSaturation();
    
    float getBrightness();
    
    static ScriptValue createInternal(ScriptState* scriptState, CCNode* arg0, CCPoint* arg1);
    cocos2d::extension::CCControlSaturationBrightnessPicker* getCocos2dImpl();
    ~CCControlSaturationBrightnessPicker();
public:
    CCControlSaturationBrightnessPicker ();
};

DEFINE_TYPE_CASTS(CCControlSaturationBrightnessPicker, CCControl, pCCControlSaturationBrightnessPicker, true, true);

} // namespace blink

#endif
