// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCLayerMultiplex_h__
#define __CCLayerMultiplex_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCLayerMultiplex;
}

namespace blink {

class CCLayerMultiplex 
		:public CCLayer
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCLayerMultiplex> create();
    
    bool initWithArray(CCArray* arg0);
    
    void switchTo(unsigned int arg0);
    
    void addLayer(ScriptValue& arg0);
    
    void switchToAndReleaseMe(unsigned int arg0);
    cocos2d::CCLayerMultiplex* getCocos2dImpl();
    ~CCLayerMultiplex();
public:
    CCLayerMultiplex ();
};

DEFINE_TYPE_CASTS(CCLayerMultiplex, CCLayer, pCCLayerMultiplex, true, true);

} // namespace blink

#endif
