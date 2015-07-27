// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTransitionJumpZoom_h__
#define __CCTransitionJumpZoom_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCTransitionJumpZoom;
}

namespace blink {

class CCTransitionJumpZoom 
		:public CCTransitionScene
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCTransitionJumpZoom> create();
    
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, ScriptValue& arg1);
    cocos2d::CCTransitionJumpZoom* getCocos2dImpl();
    ~CCTransitionJumpZoom();
public:
    CCTransitionJumpZoom ();
};

DEFINE_TYPE_CASTS(CCTransitionJumpZoom, CCTransitionScene, pCCTransitionJumpZoom, true, true);

} // namespace blink

#endif
