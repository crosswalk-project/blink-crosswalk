// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __Widget_h__
#define __Widget_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class Widget;
    }
}

namespace blink {

class Widget 
		:public CCNodeRGBA
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<Widget> create();
    void addChild(CCNode* arg0, int arg1);
    void addChild(CCNode* arg0);
    void addChild(CCNode* arg0, int arg1, int arg2);
    
    ScriptValue getVirtualRenderer(ScriptState* scriptState);
    
    void setSizePercent(CCPoint* arg0);
    
    bool isFlipX();
    
    void setActionTag(int arg0);
    
    String getDescription();
    
    float getLeftInParent();
    
    void setUpdateEnabled(bool arg0);
    
    bool isFlipY();
    
    PassRefPtrWillBeRawPtr<CCPoint> getTouchEndPos();
    
    ScriptValue getChildren(ScriptState* scriptState);
    
    ScriptValue getNodes(ScriptState* scriptState);
    
    ScriptValue getChildByTag(ScriptState* scriptState, int arg0);
    
    String getName();
    
    bool isIgnoreContentAdaptWithSize();
    
    void updateSizeAndPosition();
    
    float getBottomInParent();
    
    int getActionTag();
    
    ScriptValue getLayoutParameter(ScriptState* scriptState, int arg0);
    
    int getPositionType();
    
    void setName(String arg0);
    
    ScriptValue getChildByName(ScriptState* scriptState, String arg0);
    
    bool isEnabled();
    
    void removeNodeByTag(int arg0);
    
    void removeAllChildren();
    
    bool isTouchEnabled();
    
    PassRefPtrWillBeRawPtr<CCSize> getContentSize();
    
    PassRefPtrWillBeRawPtr<CCPoint> getTouchStartPos();
    
    void didNotSelectSelf();
    
    void setFocused(bool arg0);
    
    void setTouchEnabled(bool arg0);
    
    ScriptValue clone(ScriptState* scriptState);
    
    PassRefPtrWillBeRawPtr<CCPoint> getTouchMovePos();
    
    void setEnabled(bool arg0);
    
    void setBrightStyle(int arg0);
    void addNode(CCNode* arg0, int arg1);
    void addNode(CCNode* arg0);
    void addNode(CCNode* arg0, int arg1, int arg2);
    
    void removeFromParent();
    
    void setLayoutParameter(LayoutParameter* arg0);
    
    void setFlipY(bool arg0);
    
    void setFlipX(bool arg0);
    
    void removeAllChildrenWithCleanup(bool arg0);
    
    void sortAllChildren();
    
    void ignoreContentAdaptWithSize(bool arg0);
    
    bool isBright();
    
    bool clippingParentAreaContainPoint(CCPoint* arg0);
    
    PassRefPtrWillBeRawPtr<CCPoint> getSizePercent();
    
    void removeFromParentAndCleanup(bool arg0);
    
    float getTopInParent();
    
    bool isUpdateEnabled();
    
    int getWidgetType();
    
    ScriptValue getNodeByTag(ScriptState* scriptState, int arg0);
    
    PassRefPtrWillBeRawPtr<CCSize> getSize();
    
    float getRightInParent();
    
    int getSizeType();
    
    void removeNode(CCNode* arg0);
    
    void removeAllNodes();
    
    PassRefPtrWillBeRawPtr<CCPoint> getWorldPosition();
    
    PassRefPtrWillBeRawPtr<CCPoint> getPositionPercent();
    
    void removeChildByTag(int arg0, bool arg1);
    
    bool hitTest(CCPoint* arg0);
    
    void removeChild(CCNode* arg0, bool arg1);
    
    bool isFocused();
    
    void setSizeType(int arg0);
    
    void checkChildInfo(int arg0, Widget* arg1, CCPoint* arg2);
    
    void setSize(CCSize* arg0);
    
    void setBright(bool arg0);
    
    unsigned int getChildrenCount();
    
    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::gui::Widget* getCocos2dImpl();
    ~Widget();
public:
    Widget ();
};

DEFINE_TYPE_CASTS(Widget, CCNodeRGBA, pWidget, true, true);

} // namespace blink

#endif
