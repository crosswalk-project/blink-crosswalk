// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCRenderTexture_h__
#define __CCRenderTexture_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCRenderTexture;
}

namespace blink {

class CCRenderTexture 
		:public CCNode
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCRenderTexture> create();
    
    void clearStencil(int arg0);
    
    void begin();
    
    void listenToForeground(CCObject* arg0);
    
    float getClearDepth();
    
    int getClearStencil();
    
    void end();
    
    void setClearStencil(float arg0);
    bool initWithWidthAndHeight(int arg0, int arg1, int arg2, unsigned int arg3);
    bool initWithWidthAndHeight(int arg0, int arg1, int arg2);
    
    void visit();
    
    ScriptValue getSprite(ScriptState* scriptState);
    
    bool isAutoDraw();
    
    void setClearFlags(unsigned int arg0);
    
    void draw();
    
    void setAutoDraw(bool arg0);
    
    void setClearColor(ccColor4F* arg0);
    
    void endToLua();
    void beginWithClear(float arg0, float arg1, float arg2, float arg3, float arg4);
    void beginWithClear(float arg0, float arg1, float arg2, float arg3);
    void beginWithClear(float arg0, float arg1, float arg2, float arg3, float arg4, int arg5);
    
    void clearDepth(float arg0);
    
    PassRefPtrWillBeRawPtr<ccColor4F> getClearColor();
    
    void listenToBackground(CCObject* arg0);
    
    void clear(float arg0, float arg1, float arg2, float arg3);
    
    unsigned int getClearFlags();
    
    ScriptValue newCCImage(ScriptState* scriptState, bool arg0);
    
    void setClearDepth(float arg0);
    
    void setSprite(ScriptValue& arg0);
    static ScriptValue createInternal(ScriptState* scriptState, int arg0, int arg1, int arg2);
    static ScriptValue createInternal(ScriptState* scriptState, int arg0, int arg1, int arg2, unsigned int arg3);
    static ScriptValue createInternal(ScriptState* scriptState, int arg0, int arg1);
    cocos2d::CCRenderTexture* getCocos2dImpl();
    ~CCRenderTexture();
public:
    CCRenderTexture ();
};

DEFINE_TYPE_CASTS(CCRenderTexture, CCNode, pCCRenderTexture, true, true);

} // namespace blink

#endif
