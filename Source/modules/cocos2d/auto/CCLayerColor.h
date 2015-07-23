// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCLayerColor_h__
#define __CCLayerColor_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCLayerColor;
}

namespace blink {

class CCLayerColor 
		:public CCLayerRGBA
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCLayerColor> create();
    
    void draw();
    
    void setColor(ccColor3B* arg0);
    
    void changeWidthAndHeight(float arg0, float arg1);
    
    void setOpacity(unsigned char arg0);
    
    bool init();
    bool initWithColor(ccColor4B* arg0);
    bool initWithColor(ccColor4B* arg0, float arg1, float arg2);
    
    void changeWidth(float arg0);
    
    void changeHeight(float arg0);
    static ScriptValue createInternal(ScriptState* scriptState, ccColor4B* arg0, float arg1, float arg2);
    static ScriptValue createInternal(ScriptState* scriptState);
    static ScriptValue createInternal(ScriptState* scriptState, ccColor4B* arg0);
    cocos2d::CCLayerColor* getCocos2dImpl();
    ~CCLayerColor();
public:
    CCLayerColor ();
};

DEFINE_TYPE_CASTS(CCLayerColor, CCLayerRGBA, pCCLayerColor, true, true);

} // namespace blink

#endif
