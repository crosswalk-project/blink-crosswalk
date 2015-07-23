// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCShow_h__
#define __CCShow_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCShow;
}

namespace blink {

class CCShow 
		:public CCActionInstant
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCShow> create();
    
    ScriptValue reverse(ScriptState* scriptState);
    
    void update(float arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::CCShow* getCocos2dImpl();
    ~CCShow();
public:
    CCShow ();
};

DEFINE_TYPE_CASTS(CCShow, CCActionInstant, pCCShow, true, true);

} // namespace blink

#endif
