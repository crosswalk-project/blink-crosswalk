// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCSprite_h__
#define __CCSprite_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCSprite;
}

namespace blink {

class CCSprite 
		:public CCNodeRGBA
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCSprite> create();
    
    void draw();
    void addChild(ScriptValue& arg0, int arg1);
    void addChild(ScriptValue& arg0);
    void addChild(ScriptValue& arg0, int arg1, int arg2);
    
    void setTexture(CCTexture2D* arg0);
    
    bool isFlippedX();
    
    ScriptValue getTexture(ScriptState* scriptState);
    
    void setFlippedY(bool arg0);
    
    void setFlippedX(bool arg0);
    
    void setScaleY(float arg0);
    
    void setScale(float arg0);
    
    void setOpacity(unsigned char arg0);
    
    void setDisplayFrameWithAnimationName(String arg0, int arg1);
    
    void setRotationY(float arg0);
    
    void setOpacityModifyRGB(bool arg0);
    
    ScriptValue getBatchNode(ScriptState* scriptState);
    
    bool isTextureRectRotated();
    
    bool isOpacityModifyRGB();
    void setTextureRect(CCRect* arg0, bool arg1, CCSize* arg2);
    void setTextureRect(CCRect* arg0);
    
    bool init();
    
    void setVertexZ(float arg0);
    
    PassRefPtrWillBeRawPtr<CCRect> getTextureRect();
    
    void updateDisplayedOpacity(unsigned char arg0);
    
    bool initWithSpriteFrameName(String arg0);
    
    bool isFrameDisplayed(ScriptValue& arg0);
    
    unsigned int getAtlasIndex();
    
    void setRotation(float arg0);
    
    void setDisplayFrame(ScriptValue& arg0);
    
    PassRefPtrWillBeRawPtr<CCPoint> getOffsetPosition();
    
    void setBatchNode(ScriptValue& arg0);
    
    void setRotationX(float arg0);
    
    void setScaleX(float arg0);
    bool initWithTexture(CCTexture2D* arg0, CCRect* arg1);
    bool initWithTexture(CCTexture2D* arg0);
    bool initWithTexture(CCTexture2D* arg0, CCRect* arg1, bool arg2);
    
    void removeAllChildrenWithCleanup(bool arg0);
    
    void sortAllChildren();
    
    void setAtlasIndex(unsigned int arg0);
    
    void setVertexRect(CCRect* arg0);
    
    void setDirty(bool arg0);
    
    bool isDirty();
    
    void reorderChild(ScriptValue& arg0, int arg1);
    
    void ignoreAnchorPointForPosition(bool arg0);
    bool initWithFile(String arg0, CCRect* arg1);
    bool initWithFile(String arg0);
    
    void setColor(ccColor3B* arg0);
    
    bool initWithSpriteFrame(ScriptValue& arg0);
    
    void removeChild(ScriptValue& arg0, bool arg1);
    
    void updateTransform();
    
    bool isFlippedY();
    
    void updateDisplayedColor(ccColor3B* arg0);
    
    void setSkewX(float arg0);
    
    void setSkewY(float arg0);
    
    void setVisible(bool arg0);
    static ScriptValue createInternal(ScriptState* scriptState, String arg0);
    static ScriptValue createInternal(ScriptState* scriptState);
    static ScriptValue createInternal(ScriptState* scriptState, String arg0, CCRect* arg1);
    static ScriptValue createWithTexture(ScriptState* scriptState, CCTexture2D* arg0, CCRect* arg1);
    static ScriptValue createWithTexture(ScriptState* scriptState, CCTexture2D* arg0);
    
    static ScriptValue createWithSpriteFrameName(ScriptState* scriptState, String arg0);
    
    static ScriptValue createWithSpriteFrame(ScriptState* scriptState, ScriptValue& arg0);
    cocos2d::CCSprite* getCocos2dImpl();
    ~CCSprite();
public:
    CCSprite ();
};

DEFINE_TYPE_CASTS(CCSprite, CCNodeRGBA, pCCSprite, true, true);

} // namespace blink

#endif
