// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCMenuItemSprite_h__
#define __CCMenuItemSprite_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"

namespace cocos2d {
    class CCMenuItemSprite;
}

namespace blink {
class CCSprite;
class MenuItemCallback;

class CCMenuItemSprite 
		:public CCMenuItem
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCMenuItemSprite> create();
    
    void setEnabled(bool arg0);
    
    void selected();
    
    void setNormalImage(ScriptValue& arg0);
    
    void setDisabledImage(ScriptValue& arg0);
    
    void setSelectedImage(ScriptValue& arg0);
    
    ScriptValue getDisabledImage(ScriptState* scriptState);
    
    ScriptValue getSelectedImage(ScriptState* scriptState);
    
    ScriptValue getNormalImage(ScriptState* scriptState);
    
    void initWithNormalSprite(CCSprite* normalSprite,
                              CCSprite* selectedSprite,
                              CCSprite* disabledImage,
                              MenuItemCallback* callback,
                              CCObject* target);
    
    void unselected();
    cocos2d::CCMenuItemSprite* getCocos2dImpl();
    ~CCMenuItemSprite();
public:
    CCMenuItemSprite ();
};

DEFINE_TYPE_CASTS(CCMenuItemSprite, CCMenuItem, pCCMenuItemSprite, true, true);

} // namespace blink

#endif
