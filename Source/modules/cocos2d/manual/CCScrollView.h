// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCScrollView_h__
#define __CCScrollView_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class CCScrollView;
    }
}

namespace blink {
class ScrollViewCallback;

class CCScrollView 
		:public CCLayer
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*);
    static PassRefPtrWillBeRawPtr<CCScrollView> create();
    
    bool isClippingToBounds();
    
    void setContainer(CCNode* arg0);
    
    void setContentOffsetInDuration(CCPoint* arg0, float arg1);
    
    void setZoomScaleInDuration(float arg0, float arg1);
    void addChild(CCNode* arg0, int arg1);
    void addChild(CCNode* arg0, int arg1, int arg2);
    void addChild(CCNode* arg0);
    
    PassRefPtrWillBeRawPtr<CCNode> getContainer();
    
    int getDirection();
    
    float getZoomScale();
    
    void updateInset();
    
    bool initWithViewSize(CCSize* arg0, CCNode* arg1);
    
    void pause(CCObject* arg0);
    
    void setDirection(int arg0);
    
    void setBounceable(bool arg0);
    
    void setContentOffset(CCPoint* arg0, bool arg1);
    
    bool isDragging();
    
    bool init();
    
    bool isBounceable();
    
    PassRefPtrWillBeRawPtr<CCSize> getContentSize();
    
    void setTouchEnabled(bool arg0);
    
    PassRefPtrWillBeRawPtr<CCPoint> getContentOffset();
    
    void resume(CCObject* arg0);
    
    void setClippingToBounds(bool arg0);
    
    void setViewSize(CCSize* arg0);
    
    PassRefPtrWillBeRawPtr<CCSize> getViewSize();
    
    PassRefPtrWillBeRawPtr<CCPoint> maxContainerOffset();
    
    bool isTouchMoved();
    
    bool isNodeVisible(CCNode* arg0);
    
    PassRefPtrWillBeRawPtr<CCPoint> minContainerOffset();
    
    void registerWithTouchDispatcher();
    void setZoomScale(float arg0, bool arg1);
    void setZoomScale(float arg0);
    static PassRefPtrWillBeRawPtr<CCScrollView> createInternal();
    static PassRefPtrWillBeRawPtr<CCScrollView> createInternal(CCSize* arg0, CCNode* arg1);
    cocos2d::extension::CCScrollView* getCocos2dImpl();
    ~CCScrollView();
public:
    CCScrollView ();

public:
    void executeDidScrollEvent();
    void executeDidZoomEvent();
    void setDelegateInternal(ScrollViewCallback* didScrollCallback, ScrollViewCallback* didZoomCallback);

protected:
    Persistent<ScrollViewCallback> m_scrollview_did_scroll_callback;
    Persistent<ScrollViewCallback> m_scrollview_did_zoom_callback;
};

DEFINE_TYPE_CASTS(CCScrollView, CCLayer, pCCScrollView, true, true);

} // namespace blink

#endif
