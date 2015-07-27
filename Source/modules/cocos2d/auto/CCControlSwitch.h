// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCControlSwitch_h__
#define __CCControlSwitch_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class CCControlSwitch;
    }
}

namespace blink {

class CCControlSwitch 
		:public CCControl
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCControlSwitch> create();
    
    void setEnabled(bool arg0);
    void setOn(bool arg0);
    void setOn(bool arg0, bool arg1);
    
    bool isOn();
    bool initWithMaskSprite(CCSprite* arg0, CCSprite* arg1, CCSprite* arg2, CCSprite* arg3, CCLabelTTF* arg4, CCLabelTTF* arg5);
    bool initWithMaskSprite(CCSprite* arg0, CCSprite* arg1, CCSprite* arg2, CCSprite* arg3);
    
    bool hasMoved();
    
    PassRefPtrWillBeRawPtr<CCPoint> locationFromTouch(CCTouch* arg0);
    static ScriptValue createInternal(ScriptState* scriptState, CCSprite* arg0, CCSprite* arg1, CCSprite* arg2, CCSprite* arg3, CCLabelTTF* arg4, CCLabelTTF* arg5);
    static ScriptValue createInternal(ScriptState* scriptState, CCSprite* arg0, CCSprite* arg1, CCSprite* arg2, CCSprite* arg3);
    cocos2d::extension::CCControlSwitch* getCocos2dImpl();
    ~CCControlSwitch();
public:
    CCControlSwitch ();
};

DEFINE_TYPE_CASTS(CCControlSwitch, CCControl, pCCControlSwitch, true, true);

} // namespace blink

#endif
