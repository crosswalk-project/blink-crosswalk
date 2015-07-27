// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCScale9Sprite_h__
#define __CCScale9Sprite_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class CCScale9Sprite;
    }
}

namespace blink {

class CCScale9Sprite 
		:public CCNodeRGBA
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCScale9Sprite> create();
    
    PassRefPtrWillBeRawPtr<CCRect> getCapInsets();
    
    void setOpacityModifyRGB(bool arg0);
    
    bool updateWithBatchNode(CCSpriteBatchNode* arg0, CCRect* arg1, bool arg2, CCRect* arg3);
    
    void setInsetBottom(float arg0);
    
    bool isOpacityModifyRGB();
    bool initWithSpriteFrameName(String arg0);
    bool initWithSpriteFrameName(String arg0, CCRect* arg1);
    
    void setInsetTop(float arg0);
    
    void updateDisplayedOpacity(unsigned char arg0);
    
    bool init();
    
    void setPreferredSize(CCSize* arg0);
    
    unsigned char getOpacity();
    
    void setSpriteFrame(CCSpriteFrame* arg0);
    
    PassRefPtrWillBeRawPtr<ccColor3B> getColor();
    bool initWithBatchNode(CCSpriteBatchNode* arg0, CCRect* arg1, CCRect* arg2);
    bool initWithBatchNode(CCSpriteBatchNode* arg0, CCRect* arg1, bool arg2, CCRect* arg3);
    
    float getInsetBottom();
    
    ScriptValue resizableSpriteWithCapInsets(ScriptState* scriptState, CCRect* arg0);
    
    void setOpacity(unsigned char arg0);
    
    float getInsetRight();
    
    PassRefPtrWillBeRawPtr<CCSize> getOriginalSize();
    bool initWithFile(String arg0, CCRect* arg1);
    bool initWithFile(String arg0, CCRect* arg1, CCRect* arg2);
    bool initWithFile(CCRect* arg0, String arg1);
    bool initWithFile(String arg0);
    
    void setColor(ccColor3B* arg0);
    
    float getInsetTop();
    
    void setInsetLeft(float arg0);
    bool initWithSpriteFrame(CCSpriteFrame* arg0);
    bool initWithSpriteFrame(CCSpriteFrame* arg0, CCRect* arg1);
    
    PassRefPtrWillBeRawPtr<CCSize> getPreferredSize();
    
    void setCapInsets(CCRect* arg0);
    
    float getInsetLeft();
    
    void updateDisplayedColor(ccColor3B* arg0);
    
    void setInsetRight(float arg0);
    static ScriptValue createInternal(ScriptState* scriptState, String arg0, CCRect* arg1);
    static ScriptValue createInternal(ScriptState* scriptState, String arg0, CCRect* arg1, CCRect* arg2);
    static ScriptValue createInternal(ScriptState* scriptState, CCRect* arg0, String arg1);
    static ScriptValue createInternal(ScriptState* scriptState, String arg0);
    static ScriptValue createInternal(ScriptState* scriptState);
    static ScriptValue createWithSpriteFrameName(ScriptState* scriptState, String arg0);
    static ScriptValue createWithSpriteFrameName(ScriptState* scriptState, String arg0, CCRect* arg1);
    static ScriptValue createWithSpriteFrame(ScriptState* scriptState, CCSpriteFrame* arg0);
    static ScriptValue createWithSpriteFrame(ScriptState* scriptState, CCSpriteFrame* arg0, CCRect* arg1);
    cocos2d::extension::CCScale9Sprite* getCocos2dImpl();
    ~CCScale9Sprite();
public:
    CCScale9Sprite ();
};

DEFINE_TYPE_CASTS(CCScale9Sprite, CCNodeRGBA, pCCScale9Sprite, true, true);

} // namespace blink

#endif
