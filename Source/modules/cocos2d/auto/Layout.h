// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __Layout_h__
#define __Layout_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class Layout;
    }
}

namespace blink {

class Layout 
		:public Widget
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<Layout> create();
    
    void setBackGroundColorVector(CCPoint* arg0);
    void addChild(CCNode* arg0, int arg1);
    void addChild(CCNode* arg0);
    void addChild(CCNode* arg0, int arg1, int arg2);
    
    void setClippingType(int arg0);
    
    void setBackGroundColorType(int arg0);
    
    String getDescription();
    
    void removeBackGroundImage();
    
    void setBackGroundImage(String arg0, int arg1);
    void setBackGroundColor(ccColor3B* arg0, ccColor3B* arg1);
    void setBackGroundColor(ccColor3B* arg0);
    
    void requestDoLayout();
    
    bool isClippingEnabled();
    
    void setClippingEnabled(bool arg0);
    
    void setBackGroundColorOpacity(int arg0);
    
    int getLayoutType();
    
    void sortAllChildren();
    
    void setBackGroundImageCapInsets(CCRect* arg0);
    
    PassRefPtrWillBeRawPtr<CCSize> getBackGroundImageTextureSize();
    
    void setBackGroundImageScale9Enabled(bool arg0);
    
    void setLayoutType(int arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::gui::Layout* getCocos2dImpl();
    ~Layout();
public:
    Layout ();
};

DEFINE_TYPE_CASTS(Layout, Widget, pLayout, true, true);

} // namespace blink

#endif
