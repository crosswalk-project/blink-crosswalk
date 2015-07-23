// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCFadeOutDownTiles_h__
#define __CCFadeOutDownTiles_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCFadeOutDownTiles;
}

namespace blink {

class CCFadeOutDownTiles 
		:public CCFadeOutUpTiles
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCFadeOutDownTiles> create();
    
    float testFunc(CCSize* arg0, float arg1);
    
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, CCSize* arg1);
    cocos2d::CCFadeOutDownTiles* getCocos2dImpl();
    ~CCFadeOutDownTiles();
public:
    CCFadeOutDownTiles ();
};

DEFINE_TYPE_CASTS(CCFadeOutDownTiles, CCFadeOutUpTiles, pCCFadeOutDownTiles, true, true);

} // namespace blink

#endif
