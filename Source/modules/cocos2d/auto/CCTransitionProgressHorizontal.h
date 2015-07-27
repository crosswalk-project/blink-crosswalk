// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTransitionProgressHorizontal_h__
#define __CCTransitionProgressHorizontal_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCTransitionProgressHorizontal;
}

namespace blink {

class CCTransitionProgressHorizontal 
		:public CCTransitionProgress
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCTransitionProgressHorizontal> create();
    
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, ScriptValue& arg1);
    cocos2d::CCTransitionProgressHorizontal* getCocos2dImpl();
    ~CCTransitionProgressHorizontal();
public:
    CCTransitionProgressHorizontal ();
};

DEFINE_TYPE_CASTS(CCTransitionProgressHorizontal, CCTransitionProgress, pCCTransitionProgressHorizontal, true, true);

} // namespace blink

#endif
