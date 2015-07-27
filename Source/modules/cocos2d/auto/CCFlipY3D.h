// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCFlipY3D_h__
#define __CCFlipY3D_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCFlipY3D;
}

namespace blink {

class CCFlipY3D 
		:public CCFlipX3D
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCFlipY3D> create();
    
    void update(float arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState, float arg0);
    cocos2d::CCFlipY3D* getCocos2dImpl();
    ~CCFlipY3D();
public:
    CCFlipY3D ();
};

DEFINE_TYPE_CASTS(CCFlipY3D, CCFlipX3D, pCCFlipY3D, true, true);

} // namespace blink

#endif
