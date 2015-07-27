// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTransitionSplitRows_h__
#define __CCTransitionSplitRows_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCTransitionSplitRows;
}

namespace blink {

class CCTransitionSplitRows 
		:public CCTransitionSplitCols
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCTransitionSplitRows> create();
    
    ScriptValue action(ScriptState* scriptState);
    
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, ScriptValue& arg1);
    cocos2d::CCTransitionSplitRows* getCocos2dImpl();
    ~CCTransitionSplitRows();
public:
    CCTransitionSplitRows ();
};

DEFINE_TYPE_CASTS(CCTransitionSplitRows, CCTransitionSplitCols, pCCTransitionSplitRows, true, true);

} // namespace blink

#endif
