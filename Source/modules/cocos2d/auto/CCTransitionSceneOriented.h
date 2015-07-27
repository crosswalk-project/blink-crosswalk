// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTransitionSceneOriented_h__
#define __CCTransitionSceneOriented_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCTransitionSceneOriented;
}

namespace blink {

class CCTransitionSceneOriented 
		:public CCTransitionScene
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCTransitionSceneOriented> create();
    cocos2d::CCTransitionSceneOriented* getCocos2dImpl();
    ~CCTransitionSceneOriented();
public:
    CCTransitionSceneOriented ();
};

DEFINE_TYPE_CASTS(CCTransitionSceneOriented, CCTransitionScene, pCCTransitionSceneOriented, true, true);

} // namespace blink

#endif
