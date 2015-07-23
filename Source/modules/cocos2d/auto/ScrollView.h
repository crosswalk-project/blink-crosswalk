// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __ScrollView_h__
#define __ScrollView_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class ScrollView;
    }
}

namespace blink {

class ScrollView 
		:public Layout
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<ScrollView> create();
    void addChild(CCNode* arg0, int arg1);
    void addChild(CCNode* arg0);
    void addChild(CCNode* arg0, int arg1, int arg2);
    
    void scrollToTop(float arg0, bool arg1);
    
    void scrollToPercentHorizontal(float arg0, float arg1, bool arg2);
    
    String getDescription();
    
    void removeAllChildren();
    
    void scrollToPercentBothDirection(CCPoint* arg0, float arg1, bool arg2);
    
    ScriptValue getChildren(ScriptState* scriptState);
    
    int getDirection();
    
    ScriptValue getChildByTag(ScriptState* scriptState, int arg0);
    
    void scrollToBottomLeft(float arg0, bool arg1);
    
    ScriptValue getInnerContainer(ScriptState* scriptState);
    
    void jumpToBottom();
    
    ScriptValue getChildByName(ScriptState* scriptState, String arg0);
    
    void setDirection(int arg0);
    
    void scrollToTopLeft(float arg0, bool arg1);
    
    void jumpToTopRight();
    
    void jumpToBottomLeft();
    
    void setInnerContainerSize(CCSize* arg0);
    
    bool isInertiaScrollEnabled();
    
    PassRefPtrWillBeRawPtr<CCSize> getInnerContainerSize();
    
    bool isBounceEnabled();
    
    void jumpToPercentVertical(float arg0);
    
    void setInertiaScrollEnabled(bool arg0);
    
    void jumpToTopLeft();
    
    void jumpToPercentHorizontal(float arg0);
    
    void jumpToBottomRight();
    
    void update(float arg0);
    
    int getLayoutType();
    
    void removeAllChildrenWithCleanup(bool arg0);
    
    void setBounceEnabled(bool arg0);
    
    void jumpToTop();
    
    void scrollToLeft(float arg0, bool arg1);
    
    void jumpToPercentBothDirection(CCPoint* arg0);
    
    void scrollToPercentVertical(float arg0, float arg1, bool arg2);
    
    void scrollToBottom(float arg0, bool arg1);
    
    void scrollToBottomRight(float arg0, bool arg1);
    
    void jumpToLeft();
    
    void scrollToRight(float arg0, bool arg1);
    
    void removeChild(CCNode* arg0, bool arg1);
    
    void setLayoutType(int arg0);
    
    void jumpToRight();
    
    unsigned int getChildrenCount();
    
    void scrollToTopRight(float arg0, bool arg1);
    
    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::gui::ScrollView* getCocos2dImpl();
    ~ScrollView();
public:
    ScrollView ();
};

DEFINE_TYPE_CASTS(ScrollView, Layout, pScrollView, true, true);

} // namespace blink

#endif
