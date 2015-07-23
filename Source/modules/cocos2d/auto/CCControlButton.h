// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCControlButton_h__
#define __CCControlButton_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class CCControlButton;
    }
}

namespace blink {

class CCControlButton 
		:public CCControl
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCControlButton> create();
    
    void setTitleColorDispatchTable(CCDictionary* arg0);
    
    void setZoomOnTouchDown(bool arg0);
    
    void setSelected(bool arg0);
    
    void setTitleLabel(CCNode* arg0);
    
    void setTitleTTFSizeForState(float arg0, unsigned int arg1);
    
    void setAdjustBackgroundImage(bool arg0);
    
    void setHighlighted(bool arg0);
    
    void setBackgroundSpriteDispatchTable(CCDictionary* arg0);
    
    void setTitleLabelForState(CCNode* arg0, unsigned int arg1);
    
    void setTitleForState(CCString* arg0, unsigned int arg1);
    
    ScriptValue getTitleDispatchTable(ScriptState* scriptState);
    
    void setLabelAnchorPoint(CCPoint* arg0);
    
    PassRefPtrWillBeRawPtr<CCPoint> getLabelAnchorPoint();
    
    bool initWithBackgroundSprite(CCScale9Sprite* arg0);
    
    float getTitleTTFSizeForState(unsigned int arg0);
    
    void setTitleDispatchTable(CCDictionary* arg0);
    
    bool isPushed();
    
    void setOpacity(unsigned char arg0);
    
    bool init();
    
    void setTitleTTFForState(String arg0, unsigned int arg1);
    
    void setPreferredSize(CCSize* arg0);
    
    int getHorizontalOrigin();
    
    unsigned char getOpacity();
    
    PassRefPtrWillBeRawPtr<ccColor3B> getCurrentTitleColor();
    
    ScriptValue getTitleColorDispatchTable(ScriptState* scriptState);
    
    void setEnabled(bool arg0);
    
    ScriptValue getBackgroundSpriteForState(ScriptState* scriptState, unsigned int arg0);
    
    PassRefPtrWillBeRawPtr<ccColor3B> getColor();
    
    void setMargins(int arg0, int arg1);
    
    void needsLayout();
    
    bool initWithTitleAndFontNameAndFontSize(String arg0, String arg1, float arg2);
    
    void setTitleBMFontForState(String arg0, unsigned int arg1);
    
    String getTitleTTFForState(unsigned int arg0);
    
    ScriptValue getBackgroundSprite(ScriptState* scriptState);
    
    PassRefPtrWillBeRawPtr<ccColor3B> getTitleColorForState(unsigned int arg0);
    
    void setTitleColorForState(ccColor3B* arg0, unsigned int arg1);
    
    bool doesAdjustBackgroundImage();
    
    void setBackgroundSpriteFrameForState(CCSpriteFrame* arg0, unsigned int arg1);
    
    void setBackgroundSpriteForState(CCScale9Sprite* arg0, unsigned int arg1);
    
    void setColor(ccColor3B* arg0);
    
    ScriptValue getTitleLabelDispatchTable(ScriptState* scriptState);
    
    bool initWithLabelAndBackgroundSprite(CCNode* arg0, CCScale9Sprite* arg1);
    
    void setTitleLabelDispatchTable(CCDictionary* arg0);
    
    ScriptValue getTitleLabel(ScriptState* scriptState);
    
    PassRefPtrWillBeRawPtr<CCSize> getPreferredSize();
    
    int getVerticalMargin();
    
    ScriptValue getBackgroundSpriteDispatchTable(ScriptState* scriptState);
    
    ScriptValue getTitleLabelForState(ScriptState* scriptState, unsigned int arg0);
    
    ScriptValue getCurrentTitle(ScriptState* scriptState);
    
    String getTitleBMFontForState(unsigned int arg0);
    
    void setBackgroundSprite(CCScale9Sprite* arg0);
    
    bool getZoomOnTouchDown();
    
    ScriptValue getTitleForState(ScriptState* scriptState, unsigned int arg0);
    static ScriptValue createInternal(ScriptState* scriptState, String arg0, String arg1, float arg2);
    static ScriptValue createInternal(ScriptState* scriptState, CCNode* arg0, CCScale9Sprite* arg1);
    static ScriptValue createInternal(ScriptState* scriptState, CCScale9Sprite* arg0);
    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::extension::CCControlButton* getCocos2dImpl();
    ~CCControlButton();
public:
    CCControlButton ();
};

DEFINE_TYPE_CASTS(CCControlButton, CCControl, pCCControlButton, true, true);

} // namespace blink

#endif
