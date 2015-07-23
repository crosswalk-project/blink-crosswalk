// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTiledGrid3D_h__
#define __CCTiledGrid3D_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCTiledGrid3D;
}

namespace blink {

class CCTiledGrid3D 
		:public CCGridBase
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCTiledGrid3D> create();
    
    void calculateVertexPoints();
    
    void reuse();
    
    void blit();
    static ScriptValue createInternal(ScriptState* scriptState, CCSize* arg0);
    static ScriptValue createInternal(ScriptState* scriptState, CCSize* arg0, CCTexture2D* arg1, bool arg2);
    cocos2d::CCTiledGrid3D* getCocos2dImpl();
    ~CCTiledGrid3D();
public:
    CCTiledGrid3D ();
};

DEFINE_TYPE_CASTS(CCTiledGrid3D, CCGridBase, pCCTiledGrid3D, true, true);

} // namespace blink

#endif
