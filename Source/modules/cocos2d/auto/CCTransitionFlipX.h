// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTransitionFlipX_h__
#define __CCTransitionFlipX_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCTransitionFlipX;
}

namespace blink {

class CCTransitionFlipX 
		:public CCTransitionSceneOriented
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCTransitionFlipX> create();
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, ScriptValue& arg1);
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, ScriptValue& arg1, int arg2);
    cocos2d::CCTransitionFlipX* getCocos2dImpl();
    ~CCTransitionFlipX();
public:
    CCTransitionFlipX ();
};

DEFINE_TYPE_CASTS(CCTransitionFlipX, CCTransitionSceneOriented, pCCTransitionFlipX, true, true);

} // namespace blink

#endif
