// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTransitionFadeDown_h__
#define __CCTransitionFadeDown_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCTransitionFadeDown;
}

namespace blink {

class CCTransitionFadeDown 
		:public CCTransitionFadeTR
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCTransitionFadeDown> create();
    
    ScriptValue actionWithSize(ScriptState* scriptState, CCSize* arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, ScriptValue& arg1);
    cocos2d::CCTransitionFadeDown* getCocos2dImpl();
    ~CCTransitionFadeDown();
public:
    CCTransitionFadeDown ();
};

DEFINE_TYPE_CASTS(CCTransitionFadeDown, CCTransitionFadeTR, pCCTransitionFadeDown, true, true);

} // namespace blink

#endif
