// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCEaseSineIn_h__
#define __CCEaseSineIn_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCEaseSineIn;
}

namespace blink {

class CCEaseSineIn 
		:public CCActionEase
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCEaseSineIn> create();
    
    void update(float arg0);
    
    ScriptValue reverse(ScriptState* scriptState);
    
    static ScriptValue createInternal(ScriptState* scriptState, ScriptValue& arg0);
    cocos2d::CCEaseSineIn* getCocos2dImpl();
    ~CCEaseSineIn();
public:
    CCEaseSineIn ();
};

DEFINE_TYPE_CASTS(CCEaseSineIn, CCActionEase, pCCEaseSineIn, true, true);

} // namespace blink

#endif
