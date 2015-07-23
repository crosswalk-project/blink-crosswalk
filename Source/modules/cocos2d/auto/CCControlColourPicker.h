// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCControlColourPicker_h__
#define __CCControlColourPicker_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class CCControlColourPicker;
    }
}

namespace blink {

class CCControlColourPicker 
		:public CCControl
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCControlColourPicker> create();
    
    void setEnabled(bool arg0);
    
    ScriptValue getHuePicker(ScriptState* scriptState);
    
    void setColor(ccColor3B* arg0);
    
    void hueSliderValueChanged(CCObject* arg0, unsigned int arg1);
    
    ScriptValue getcolourPicker(ScriptState* scriptState);
    
    void setBackground(CCSprite* arg0);
    
    bool init();
    
    void setcolourPicker(CCControlSaturationBrightnessPicker* arg0);
    
    void colourSliderValueChanged(CCObject* arg0, unsigned int arg1);
    
    void setHuePicker(CCControlHuePicker* arg0);
    
    ScriptValue getBackground(ScriptState* scriptState);
    
    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::extension::CCControlColourPicker* getCocos2dImpl();
    ~CCControlColourPicker();
public:
    CCControlColourPicker ();
};

DEFINE_TYPE_CASTS(CCControlColourPicker, CCControl, pCCControlColourPicker, true, true);

} // namespace blink

#endif
