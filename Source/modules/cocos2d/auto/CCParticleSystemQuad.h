// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCParticleSystemQuad_h__
#define __CCParticleSystemQuad_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCParticleSystemQuad;
}

namespace blink {

class CCParticleSystemQuad 
		:public CCParticleSystem
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCParticleSystemQuad> create();
    
    void initTexCoordsWithRect(CCRect* arg0);
    
    void setTextureWithRect(CCTexture2D* arg0, CCRect* arg1);
    
    void initIndices();
    
    void setDisplayFrame(ScriptValue& arg0);
    static ScriptValue createInternal(ScriptState* scriptState);
    static ScriptValue createInternal(ScriptState* scriptState, String arg0);
    
    static ScriptValue createWithTotalParticles(ScriptState* scriptState, unsigned int arg0);
    cocos2d::CCParticleSystemQuad* getCocos2dImpl();
    ~CCParticleSystemQuad();
public:
    CCParticleSystemQuad ();
};

DEFINE_TYPE_CASTS(CCParticleSystemQuad, CCParticleSystem, pCCParticleSystemQuad, true, true);

} // namespace blink

#endif
