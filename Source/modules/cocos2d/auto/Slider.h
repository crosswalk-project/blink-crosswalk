// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __Slider_h__
#define __Slider_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class Slider;
    }
}

namespace blink {

class Slider 
		:public Widget
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<Slider> create();
    
    void setPercent(int arg0);
    
    void loadSlidBallTextureNormal(String arg0, int arg1);
    
    void loadBarTexture(String arg0, int arg1);
    
    void loadProgressBarTexture(String arg0, int arg1);
    
    void loadSlidBallTextures(String arg0, String arg1, String arg2, int arg3);
    
    void setCapInsetProgressBarRebderer(CCRect* arg0);
    
    void setCapInsetsBarRenderer(CCRect* arg0);
    
    String getDescription();
    
    void setScale9Enabled(bool arg0);
    
    ScriptValue getVirtualRenderer(ScriptState* scriptState);
    
    void setCapInsets(CCRect* arg0);
    
    void ignoreContentAdaptWithSize(bool arg0);
    
    void loadSlidBallTexturePressed(String arg0, int arg1);
    
    void loadSlidBallTextureDisabled(String arg0, int arg1);
    
    PassRefPtrWillBeRawPtr<CCSize> getContentSize();
    
    int getPercent();
    
    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::gui::Slider* getCocos2dImpl();
    ~Slider();
public:
    Slider ();
};

DEFINE_TYPE_CASTS(Slider, Widget, pSlider, true, true);

} // namespace blink

#endif
