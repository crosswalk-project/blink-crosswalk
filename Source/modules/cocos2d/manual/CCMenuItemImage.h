// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCMenuItemImage_h__
#define __CCMenuItemImage_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCMenuItemImage;
}

namespace blink {
class MenuItemCallback;

class CCMenuItemImage 
		:public CCMenuItemSprite
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCMenuItemImage> create();
    
    void setDisabledSpriteFrame(ScriptValue& arg0);
    
    void setSelectedSpriteFrame(ScriptValue& arg0);
    
    bool init();
    
    void initWithNormalImage(String normalImage,
                              String selectedImage,
                              String disabledImage,
                              ScriptValue& target,
                              MenuItemCallback* callback);

    void setNormalSpriteFrame(ScriptValue& arg0);
    cocos2d::CCMenuItemImage* getCocos2dImpl();
    ~CCMenuItemImage();
public:
    CCMenuItemImage ();
};

DEFINE_TYPE_CASTS(CCMenuItemImage, CCMenuItemSprite, pCCMenuItemImage, true, true);

} // namespace blink

#endif
