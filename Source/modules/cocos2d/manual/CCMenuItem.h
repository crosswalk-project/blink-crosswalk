// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCMenuItem_h__
#define __CCMenuItem_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"

namespace cocos2d {
    class CCMenuItem;
}

namespace blink {
class MenuItemCallback;

class CCMenuItem 
		:public CCNodeRGBA
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCMenuItem> create();
    
    void setEnabled(bool arg0);
    
    void activate();
    
    void unregisterScriptTapHandler();
    
    bool isEnabled();
    
    void selected();
    
    int getScriptTapHandler();
    
    bool isSelected();
    
    void registerScriptTapHandler(int arg0);
    
    void unselected();
    
    PassRefPtrWillBeRawPtr<CCRect> rect();
    cocos2d::CCMenuItem* getCocos2dImpl();
    void setMenuItemCallback(MenuItemCallback* callback);
    void executeMenuItemEvent();
    ~CCMenuItem();
protected:
    Persistent<MenuItemCallback> m_menu_item_callback;
public:
    CCMenuItem ();
};

DEFINE_TYPE_CASTS(CCMenuItem, CCNodeRGBA, pCCMenuItem, true, true);

} // namespace blink

#endif
