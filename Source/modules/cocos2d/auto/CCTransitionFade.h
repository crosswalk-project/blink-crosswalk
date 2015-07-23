// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTransitionFade_h__
#define __CCTransitionFade_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCTransitionFade;
}

namespace blink {

class CCTransitionFade 
		:public CCTransitionScene
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCTransitionFade> create();
    bool initWithDuration(float arg0, ScriptValue& arg1);
    bool initWithDuration(float arg0, ScriptValue& arg1, ccColor3B* arg2);
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, ScriptValue& arg1);
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, ScriptValue& arg1, ccColor3B* arg2);
    cocos2d::CCTransitionFade* getCocos2dImpl();
    ~CCTransitionFade();
public:
    CCTransitionFade ();
};

DEFINE_TYPE_CASTS(CCTransitionFade, CCTransitionScene, pCCTransitionFade, true, true);

} // namespace blink

#endif
