// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTransitionCrossFade_h__
#define __CCTransitionCrossFade_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCTransitionCrossFade;
}

namespace blink {

class CCTransitionCrossFade 
		:public CCTransitionScene
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCTransitionCrossFade> create();
    
    void draw();
    
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, ScriptValue& arg1);
    cocos2d::CCTransitionCrossFade* getCocos2dImpl();
    ~CCTransitionCrossFade();
public:
    CCTransitionCrossFade ();
};

DEFINE_TYPE_CASTS(CCTransitionCrossFade, CCTransitionScene, pCCTransitionCrossFade, true, true);

} // namespace blink

#endif
