// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCSpriteFrame_h__
#define __CCSpriteFrame_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCSpriteFrame;
}

namespace blink {

class CCSpriteFrame : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCSpriteFrame> create();
    
    void setRotated(bool arg0);
    
    void setTexture(CCTexture2D* arg0);
    
    PassRefPtrWillBeRawPtr<CCPoint> getOffset();
    
    void setRectInPixels(CCRect* arg0);
    
    ScriptValue getTexture(ScriptState* scriptState);
    
    PassRefPtrWillBeRawPtr<CCRect> getRect();
    
    void setOffsetInPixels(CCPoint* arg0);
    
    PassRefPtrWillBeRawPtr<CCRect> getRectInPixels();
    
    void setOriginalSize(CCSize* arg0);
    
    PassRefPtrWillBeRawPtr<CCSize> getOriginalSizeInPixels();
    
    void setOriginalSizeInPixels(CCSize* arg0);
    
    void setOffset(CCPoint* arg0);
    bool initWithTexture(CCTexture2D* arg0, CCRect* arg1, bool arg2, CCPoint* arg3, CCSize* arg4);
    bool initWithTexture(CCTexture2D* arg0, CCRect* arg1);
    
    bool isRotated();
    bool initWithTextureFilename(String arg0, CCRect* arg1, bool arg2, CCPoint* arg3, CCSize* arg4);
    bool initWithTextureFilename(String arg0, CCRect* arg1);
    
    void setRect(CCRect* arg0);
    
    PassRefPtrWillBeRawPtr<CCPoint> getOffsetInPixels();
    
    PassRefPtrWillBeRawPtr<CCSize> getOriginalSize();
    static ScriptValue createInternal(ScriptState* scriptState, String arg0, CCRect* arg1, bool arg2, CCPoint* arg3, CCSize* arg4);
    static ScriptValue createInternal(ScriptState* scriptState, String arg0, CCRect* arg1);
    static ScriptValue createWithTexture(ScriptState* scriptState, CCTexture2D* arg0, CCRect* arg1, bool arg2, CCPoint* arg3, CCSize* arg4);
    static ScriptValue createWithTexture(ScriptState* scriptState, CCTexture2D* arg0, CCRect* arg1);
    cocos2d::CCSpriteFrame* getCocos2dImpl();
    ~CCSpriteFrame();
public:
    CCSpriteFrame ();
};

DEFINE_TYPE_CASTS(CCSpriteFrame, CCObject, pCCSpriteFrame, true, true);

} // namespace blink

#endif
