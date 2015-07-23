// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCMenu_h__
#define __CCMenu_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"
#include "wtf/Vector.h"

#include "modules/cocos2d/cocos2d_class.hpp"

using namespace WTF;

namespace cocos2d {
    class CCMenu;
}

namespace blink {

class CCMenu 
		:public CCLayerRGBA
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCMenu> create();
    
    bool initWithArray(CCArray* arg0);
    bool initWithItems(const Vector<ScriptValue>& arg0);
    void addChild(ScriptValue& arg0, int arg1);
    void addChild(ScriptValue& arg0);
    void addChild(ScriptValue& arg0, int arg1, int arg2);
    
    void alignItemsVertically();
    
    bool ccTouchBegan(CCTouch* arg0, CCEvent* arg1);
    
    void ccTouchEnded(CCTouch* arg0, CCEvent* arg1);
    
    bool isOpacityModifyRGB();
    
    bool isEnabled();
    
    void setOpacityModifyRGB(bool arg0);
    
    void setHandlerPriority(int arg0);
    
    bool init();
    
    void alignItemsHorizontallyWithPadding(float arg0);
    
    void alignItemsHorizontally();
    
    void setEnabled(bool arg0);
    
    void ccTouchMoved(CCTouch* arg0, CCEvent* arg1);
    
    void ccTouchCancelled(CCTouch* arg0, CCEvent* arg1);
    
    void removeChild(ScriptValue& arg0, bool arg1);
    
    void alignItemsVerticallyWithPadding(float arg0);
    
    void registerWithTouchDispatcher();

    void alignItemsInColumnsWithArray(CCArray* arg0);

    void alignItemsInRowsWithArray(CCArray* arg0);

    cocos2d::CCMenu* getCocos2dImpl();
    ~CCMenu();
public:
    CCMenu ();
};

DEFINE_TYPE_CASTS(CCMenu, CCLayerRGBA, pCCMenu, true, true);

} // namespace blink

#endif
