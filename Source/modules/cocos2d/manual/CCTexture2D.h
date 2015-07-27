// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTexture2D_h__
#define __CCTexture2D_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCTexture2D;
}

namespace blink {
class HTMLImageElement;
class HTMLCanvasElement;
class HTMLVideoElement;
class WebGLTexture;

class CCTexture2D : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCTexture2D> create();
    
    ScriptValue getShaderProgram(ScriptState* scriptState);
    
    bool initWithETCFile(String arg0);
    
    String stringForFormat();
    
    void setShaderProgram(CCGLProgram* arg0);
    
    float getMaxS();
    
    bool hasPremultipliedAlpha();
    
    unsigned int getPixelsHigh();
    unsigned int bitsPerPixelForFormat(int arg0);
    unsigned int bitsPerPixelForFormat();
    
    PassRefPtrWillBeRawPtr<WebGLTexture> getName();
    bool initWithString(String arg0, String arg1, float arg2);
    bool initWithString(String arg0, String arg1, float arg2, CCSize* arg3, int arg4, int arg5);
    bool initWithString(String arg0, ccFontDefinition* arg1);
    
    void setMaxT(float arg0);
    
    void drawInRect(CCRect* arg0);
    
    PassRefPtrWillBeRawPtr<CCSize> getContentSize();
    
    float getMaxT();
    
    void setAliasTexParameters();
    
    void setAntiAliasTexParameters();
    
    void generateMipmap();
    
    int getPixelFormat();
    
    PassRefPtrWillBeRawPtr<CCSize> getContentSizeInPixels();
    
    unsigned int getPixelsWide();
    
    void drawAtPoint(CCPoint* arg0);
    
    bool hasMipmaps();
    
    bool initWithPVRFile(String arg0);
    
    void setMaxS(float arg0);
    
    static void setDefaultAlphaPixelFormat(int arg0);
    
    static int getDefaultAlphaPixelFormat();
    
    static void PVRImagesHavePremultipliedAlpha(bool arg0);

    void handleLoadedTexture();
    
    void initWithElement(HTMLImageElement* image);
    void initWithElement(HTMLCanvasElement* image);
    void initWithElement(HTMLVideoElement* image);
    
    bool isLoaded() { return m_isLoaded; };

    cocos2d::CCTexture2D* getCocos2dImpl();
    ~CCTexture2D();
protected:
    Member<HTMLImageElement> m_img;
    Member<HTMLCanvasElement> m_canvas;
    Member<HTMLVideoElement> m_video;
    bool m_isLoaded;

public:
    CCTexture2D ();
};

DEFINE_TYPE_CASTS(CCTexture2D, CCObject, pCCTexture2D, true, true);

} // namespace blink

#endif
