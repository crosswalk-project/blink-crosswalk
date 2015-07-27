// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCLayerGradient_h__
#define __CCLayerGradient_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCLayerGradient;
}

namespace blink {

class CCLayerGradient 
		:public CCLayerColor
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCLayerGradient> create();
    
    PassRefPtrWillBeRawPtr<ccColor3B> getStartColor();
    
    bool isCompressedInterpolation();
    
    unsigned char getStartOpacity();
    
    void setVector(CCPoint* arg0);
    
    void setStartOpacity(unsigned char arg0);
    
    void setCompressedInterpolation(bool arg0);
    
    void setEndOpacity(unsigned char arg0);
    
    PassRefPtrWillBeRawPtr<CCPoint> getVector();
    
    bool init();
    
    void setEndColor(ccColor3B* arg0);
    bool initWithColor(ccColor4B* arg0, ccColor4B* arg1, CCPoint* arg2);
    bool initWithColor(ccColor4B* arg0, ccColor4B* arg1);
    
    PassRefPtrWillBeRawPtr<ccColor3B> getEndColor();
    
    unsigned char getEndOpacity();
    
    void setStartColor(ccColor3B* arg0);
    static ScriptValue createInternal(ScriptState* scriptState, ccColor4B* arg0, ccColor4B* arg1, CCPoint* arg2);
    static ScriptValue createInternal(ScriptState* scriptState, ccColor4B* arg0, ccColor4B* arg1);
    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::CCLayerGradient* getCocos2dImpl();
    ~CCLayerGradient();
public:
    CCLayerGradient ();
};

DEFINE_TYPE_CASTS(CCLayerGradient, CCLayerColor, pCCLayerGradient, true, true);

} // namespace blink

#endif
