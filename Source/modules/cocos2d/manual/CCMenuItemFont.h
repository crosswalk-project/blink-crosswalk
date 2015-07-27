// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCMenuItemFont_h__
#define __CCMenuItemFont_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCMenuItemFont;
}

namespace blink {
    class MenuItemCallback;

class CCMenuItemFont 
		:public CCMenuItemLabel
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCMenuItemFont> create();

    unsigned int fontSizeObj();
    
    String fontNameObj();
    
    void setFontNameObj(String arg0);
    
    void setFontSizeObj(unsigned int arg0);
    
    static void setFontName(String arg0);
    
    static String fontName();
    
    static unsigned int fontSize();
    
    static void setFontSize(unsigned int arg0);

    void initWithString(String str,
                              MenuItemCallback* callback,
                              ScriptValue& target);

    cocos2d::CCMenuItemFont* getCocos2dImpl();
    ~CCMenuItemFont();
public:
    CCMenuItemFont ();
};

DEFINE_TYPE_CASTS(CCMenuItemFont, CCMenuItemLabel, pCCMenuItemFont, true, true);

} // namespace blink

#endif
