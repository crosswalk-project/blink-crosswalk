// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCMenuItemToggle_h__
#define __CCMenuItemToggle_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCMenuItemToggle;
}

namespace blink {

class CCMenuItemToggle 
		:public CCMenuItem
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCMenuItemToggle> create();
    
    void setSubItems(CCArray* arg0);
    
    bool initWithItem(ScriptValue& arg0);
    
    void setSelectedIndex(unsigned int arg0);
    
    void setEnabled(bool arg0);
    
    unsigned int getSelectedIndex();
    
    void addSubItem(ScriptValue& arg0);
    
    void selected();
    
    void activate();
    
    void unselected();
    
    ScriptValue selectedItem(ScriptState* scriptState);
    cocos2d::CCMenuItemToggle* getCocos2dImpl();
    ~CCMenuItemToggle();
public:
    CCMenuItemToggle ();
};

DEFINE_TYPE_CASTS(CCMenuItemToggle, CCMenuItem, pCCMenuItemToggle, true, true);

} // namespace blink

#endif
