// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCMenuItemLabel_h__
#define __CCMenuItemLabel_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCMenuItemLabel;
}

namespace blink {

class CCMenuItemLabel 
		:public CCMenuItem
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCMenuItemLabel> create();
    
    void setEnabled(bool arg0);
    
    void setLabel(ScriptValue& arg0);
    
    void activate();
    
    PassRefPtrWillBeRawPtr<ccColor3B> getDisabledColor();
    
    void setString(String arg0);
    
    void selected();
    
    void setDisabledColor(ccColor3B* arg0);
    
    ScriptValue getLabel(ScriptState* scriptState);
    
    void initWithLabel(ScriptValue& label, MenuItemCallback* callback, ScriptValue& target);

    void unselected();
    cocos2d::CCMenuItemLabel* getCocos2dImpl();
    ~CCMenuItemLabel();
public:
    CCMenuItemLabel ();
};

DEFINE_TYPE_CASTS(CCMenuItemLabel, CCMenuItem, pCCMenuItemLabel, true, true);

} // namespace blink

#endif
