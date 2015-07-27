// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCControl_h__
#define __CCControl_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class CCControl;
    }
}

namespace blink {

class CCControl 
		:public CCLayerRGBA
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCControl> create();
    
    void setEnabled(bool arg0);
    
    unsigned int getState();
    
    bool isOpacityModifyRGB();
    
    void sendActionsForControlEvents(unsigned int arg0);
    
    void setSelected(bool arg0);
    
    PassRefPtrWillBeRawPtr<CCPoint> getTouchLocation(CCTouch* arg0);
    
    bool isEnabled();
    
    bool isTouchInside(CCTouch* arg0);
    
    void setOpacityModifyRGB(bool arg0);
    
    void needsLayout();
    
    bool hasVisibleParents();
    
    bool isSelected();
    
    bool init();
    
    void setHighlighted(bool arg0);
    
    void registerWithTouchDispatcher();
    
    bool isHighlighted();
    cocos2d::extension::CCControl* getCocos2dImpl();
    ~CCControl();
public:
    CCControl ();
};

DEFINE_TYPE_CASTS(CCControl, CCLayerRGBA, pCCControl, true, true);

} // namespace blink

#endif
