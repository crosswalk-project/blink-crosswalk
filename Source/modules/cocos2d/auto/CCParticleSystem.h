// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCParticleSystem_h__
#define __CCParticleSystem_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCParticleSystem;
}

namespace blink {

class CCParticleSystem 
		:public CCNode
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCParticleSystem> create();
    
    float getStartSizeVar();
    
    ScriptValue getTexture(ScriptState* scriptState);
    
    bool isFull();
    
    ScriptValue getBatchNode(ScriptState* scriptState);
    
    PassRefPtrWillBeRawPtr<ccColor4F> getStartColor();
    
    int getPositionType();
    
    void setPosVar(CCPoint* arg0);
    
    float getEndSpin();
    
    void setRotatePerSecondVar(float arg0);
    
    float getStartSpinVar();
    
    float getEndSpinVar();
    
    void stopSystem();
    
    bool init();
    
    float getEndSizeVar();
    
    void setRotation(float arg0);
    
    void setTangentialAccel(float arg0);
    
    void setScaleY(float arg0);
    
    void setScaleX(float arg0);
    
    float getRadialAccel();
    
    void setStartRadius(float arg0);
    
    void setRotatePerSecond(float arg0);
    
    void setEndSize(float arg0);
    
    PassRefPtrWillBeRawPtr<CCPoint> getGravity();
    
    float getTangentialAccel();
    
    void setEndRadius(float arg0);
    
    float getAngle();
    
    float getSpeed();
    
    void setEndColor(ccColor4F* arg0);
    
    void setStartSpin(float arg0);
    
    void setDuration(float arg0);
    
    bool initWithTotalParticles(unsigned int arg0);
    
    void setTexture(CCTexture2D* arg0);
    
    PassRefPtrWillBeRawPtr<CCPoint> getPosVar();
    
    void updateWithNoTime();
    
    bool isBlendAdditive();
    
    float getAngleVar();
    
    void setPositionType(int arg0);
    
    float getEndRadius();
    
    PassRefPtrWillBeRawPtr<CCPoint> getSourcePosition();
    
    void setLifeVar(float arg0);
    
    void setTotalParticles(unsigned int arg0);
    
    void setEndColorVar(ccColor4F* arg0);
    
    unsigned int getAtlasIndex();
    
    float getStartSize();
    
    void setStartSpinVar(float arg0);
    
    void resetSystem();
    
    void setAtlasIndex(unsigned int arg0);
    
    void setTangentialAccelVar(float arg0);
    
    void setEndRadiusVar(float arg0);
    
    bool isActive();
    
    void setRadialAccelVar(float arg0);
    
    void setStartSize(float arg0);
    
    void setSpeed(float arg0);
    
    float getStartSpin();
    
    float getRotatePerSecond();
    
    void setEmitterMode(int arg0);
    
    float getDuration();
    
    void setSourcePosition(CCPoint* arg0);
    
    float getRadialAccelVar();
    
    void setBlendAdditive(bool arg0);
    
    void setLife(float arg0);
    
    void setAngleVar(float arg0);
    
    void setRotationIsDir(bool arg0);
    
    void setEndSizeVar(float arg0);
    
    void setAngle(float arg0);
    
    void setBatchNode(ScriptValue& arg0);
    
    float getTangentialAccelVar();
    
    int getEmitterMode();
    
    void setEndSpinVar(float arg0);
    
    bool initWithFile(String arg0);
    
    float getSpeedVar();
    
    void setStartColor(ccColor4F* arg0);
    
    float getRotatePerSecondVar();
    
    float getEndSize();
    
    float getLife();
    
    void setSpeedVar(float arg0);
    
    void setAutoRemoveOnFinish(bool arg0);
    
    void setGravity(CCPoint* arg0);
    
    void postStep();
    
    void setEmissionRate(float arg0);
    
    PassRefPtrWillBeRawPtr<ccColor4F> getEndColorVar();
    
    bool getRotationIsDir();
    
    void setScale(float arg0);
    
    float getEmissionRate();
    
    PassRefPtrWillBeRawPtr<ccColor4F> getEndColor();
    
    float getLifeVar();
    
    void setStartSizeVar(float arg0);
    
    void setOpacityModifyRGB(bool arg0);
    
    bool addParticle();
    
    bool getOpacityModifyRGB();
    
    float getStartRadius();
    
    unsigned int getParticleCount();
    
    float getStartRadiusVar();
    
    void setStartColorVar(ccColor4F* arg0);
    
    void setEndSpin(float arg0);
    
    void update(float arg0);
    
    void setRadialAccel(float arg0);
    bool initWithDictionary(CCDictionary* arg0, String arg1);
    bool initWithDictionary(CCDictionary* arg0);
    
    bool isAutoRemoveOnFinish();
    
    unsigned int getTotalParticles();
    
    void setStartRadiusVar(float arg0);
    
    float getEndRadiusVar();
    
    PassRefPtrWillBeRawPtr<ccColor4F> getStartColorVar();
    
    static ScriptValue createInternal(ScriptState* scriptState, String arg0);
    
    static ScriptValue createWithTotalParticles(ScriptState* scriptState, unsigned int arg0);
    cocos2d::CCParticleSystem* getCocos2dImpl();
    ~CCParticleSystem();
public:
    CCParticleSystem ();
};

DEFINE_TYPE_CASTS(CCParticleSystem, CCNode, pCCParticleSystem, true, true);

} // namespace blink

#endif
