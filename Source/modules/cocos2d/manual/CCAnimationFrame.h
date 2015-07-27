// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCAnimationFrame_h__
#define __CCAnimationFrame_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCAnimationFrame;
}

namespace blink {

class CCAnimationFrame : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCAnimationFrame> create();
    
    void setSpriteFrame(ScriptValue& arg0);
    
    ScriptValue getUserInfo(ScriptState* scriptState);
    
    void setDelayUnits(float arg0);
    
    ScriptValue getSpriteFrame(ScriptState* scriptState);
    
    float getDelayUnits();
    
    void setUserInfoWithDictionary(CCDictionary* arg0);
    
    bool initWithSpriteFrameWithDictionary(ScriptValue& arg0, float arg1, CCDictionary* arg2);
    cocos2d::CCAnimationFrame* getCocos2dImpl();
public:
    CCAnimationFrame ();
};

DEFINE_TYPE_CASTS(CCAnimationFrame, CCObject, pCCAnimationFrame, true, true);

} // namespace blink

#endif
