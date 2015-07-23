// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCNodeRGBA_h__
#define __CCNodeRGBA_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCNodeRGBA;
}

namespace blink {

class CCNodeRGBA 
		:public CCNode
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCNodeRGBA> create();
    
    void updateDisplayedColor(ccColor3B* arg0);
    
    void setColor(ccColor3B* arg0);
    
    bool isCascadeOpacityEnabled();
    
    PassRefPtrWillBeRawPtr<ccColor3B> getColor();
    
    unsigned char getDisplayedOpacity();
    
    void setCascadeColorEnabled(bool arg0);
    
    void setOpacity(unsigned char arg0);
    
    void setOpacityModifyRGB(bool arg0);
    
    void setCascadeOpacityEnabled(bool arg0);
    
    void updateDisplayedOpacity(unsigned char arg0);
    
    bool init();
    
    unsigned char getOpacity();
    
    bool isOpacityModifyRGB();
    
    bool isCascadeColorEnabled();
    
    PassRefPtrWillBeRawPtr<ccColor3B> getDisplayedColor();
    
    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::CCNodeRGBA* getCocos2dImpl();
    ~CCNodeRGBA();
public:
    CCNodeRGBA ();
};

DEFINE_TYPE_CASTS(CCNodeRGBA, CCNode, pCCNodeRGBA, true, true);

} // namespace blink

#endif
