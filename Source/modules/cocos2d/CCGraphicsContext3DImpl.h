// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CCGRAPHICSCONEXT3D_H
#define CCGRAPHICSCONEXT3D_H

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"

#include "core/cocos2d/cocos2dx/CCGraphicsContext3D.h"
#include "bindings/core/v8/ExceptionState.h"
#include "core/html/canvas/WebGLRenderingContext.h"
#include "core/html/canvas/WebGLGetInfo.h"
#include "core/html/canvas/WebGLActiveInfo.h"
#include "core/html/canvas/WebGLShaderPrecisionFormat.h"
#include "core/html/canvas/WebGLUniformLocation.h"


//using namespace blink;



namespace blink {

class WebGLRenderingContext;
class WebGLBuffer;
class WebGLFramebuffer;
class WebGLProgram;
class WebGLRenderbuffer;
class WebGLShader;
class WebGLTexture;
class WebGLUniformLocation;
class WebGLGetInfo;


class CCGraphicsContext3DImpl : public CCGraphicsContext3D {
public:
    CCGraphicsContext3DImpl();
    virtual ~CCGraphicsContext3DImpl();

    static CCGraphicsContext3D* getInstance() {
        if (s_GraphicsContext3D == NULL) {
            s_GraphicsContext3D = new CCGraphicsContext3DImpl();
        }
		return s_GraphicsContext3D;
	};

    void setGLContext(void* GLContext);
    void activeTexture(CCGLenum texture);
    void attachShader(WebGLId program, WebGLId shader);
    void bindAttribLocation(WebGLId program, CCGLuint index, const CCGLchar* name);
    void bindBuffer(CCGLenum target, WebGLId buffer);
    void bindFramebuffer(CCGLenum target, WebGLId framebuffer);
    void bindRenderbuffer(CCGLenum target, WebGLId renderbuffer);
    void bindTexture(CCGLenum target, WebGLId texture);
    void blendColor(CCGLclampf red, CCGLclampf green, CCGLclampf blue, CCGLclampf alpha);
    void blendEquation(CCGLenum mode);
    void blendEquationSeparate(CCGLenum modeRGB, CCGLenum modeAlpha);
    void blendFunc(CCGLenum sfactor, CCGLenum dfactor);
    void blendFuncSeparate(CCGLenum srcRGB, CCGLenum dstRGB, CCGLenum srcAlpha, CCGLenum dstAlpha);

    void bufferData(CCGLenum target, CCGLsizeiptr size, const void* data, CCGLenum usage);
    void bufferSubData(CCGLenum target, CCGLintptr offset, CCGLsizeiptr size, const void* data);

    CCGLenum checkFramebufferStatus(CCGLenum target);
    void clear(CCGLbitfield mask);
    void clearColor(CCGLclampf red, CCGLclampf green, CCGLclampf blue, CCGLclampf alpha);
    void clearDepth(CCGLclampf depth);
    void clearStencil(CCGLint s);
    void colorMask(CCGLboolean red, CCGLboolean green, CCGLboolean blue, CCGLboolean alpha);
    void compileShader(WebGLId shader);

    void compressedTexImage2D(CCGLenum target, CCGLint level, CCGLenum internalformat, CCGLsizei width, CCGLsizei height, CCGLint border, CCGLsizei imageSize, const void* data);
    void compressedTexSubImage2D(CCGLenum target, CCGLint level, CCGLint xoffset, CCGLint yoffset, CCGLsizei width, CCGLsizei height, CCGLenum format, CCGLsizei imageSize, const void* data);
    void copyTexImage2D(CCGLenum target, CCGLint level, CCGLenum internalformat, CCGLint x, CCGLint y, CCGLsizei width, CCGLsizei height, CCGLint border);
    void copyTexSubImage2D(CCGLenum target, CCGLint level, CCGLint xoffset, CCGLint yoffset, CCGLint x, CCGLint y, CCGLsizei width, CCGLsizei height);
    void cullFace(CCGLenum mode);
    void depthFunc(CCGLenum func);
    void depthMask(CCGLboolean flag);
    void depthRange(CCGLclampf zNear, CCGLclampf zFar);
    void detachShader(WebGLId program, WebGLId shader);
    void disable(CCGLenum cap);
    void disableVertexAttribArray(CCGLuint index);
    void drawArrays(CCGLenum mode, CCGLint first, CCGLsizei count);
    void drawElements(CCGLenum mode, CCGLsizei count, CCGLenum type, CCGLvoid* offset);

    void enable(CCGLenum cap);
    void enableVertexAttribArray(CCGLuint index);
    void finish();
    void flush();
    void framebufferRenderbuffer(CCGLenum target, CCGLenum attachment, CCGLenum renderbuffertarget, WebGLId renderbuffer);
    void framebufferTexture2D(CCGLenum target, CCGLenum attachment, CCGLenum textarget, WebGLId texture, CCGLint level);
    void frontFace(CCGLenum mode);
    void generateMipmap(CCGLenum target);

    void getActiveAttrib(WebGLId program, CCGLuint index, CCGLsizei *length, CCGLsizei *size, CCGLenum *type, CCGLchar* name);
    void getActiveUniform(WebGLId program, CCGLuint index, CCGLsizei *length, CCGLsizei *size, CCGLenum *type, CCGLchar* name);
    void getAttachedShaders(WebGLId program, CCGLsizei maxCount, CCGLsizei* count, WebGLId* shaders);
    CCGLint getAttribLocation(WebGLId program, const CCGLchar* name);
    void getBooleanv(CCGLenum pname, CCGLboolean* value);
    void getBufferParameteriv(CCGLenum target, CCGLenum pname, CCGLint* value);
    CCGLenum getError();
    void getFloatv(CCGLenum pname, CCGLfloat* value);
    void getFramebufferAttachmentParameteriv(CCGLenum target, CCGLenum attachment, CCGLenum pname, CCGLint* value);
    void getIntegerv(CCGLenum pname, CCGLint* value);
    void getProgramiv(WebGLId program, CCGLenum pname, CCGLint* value);
    void getProgramInfoLog(WebGLId program, CCGLsizei maxLength, CCGLsizei *length, CCGLchar *infoLog);
    void getRenderbufferParameteriv(CCGLenum target, CCGLenum pname, CCGLint* value);
    void getShaderiv(WebGLId shader, CCGLenum pname, CCGLint* value);
    void getShaderInfoLog(WebGLId shader, CCGLsizei maxLength, CCGLsizei *length, CCGLchar *infoLog);
    void getShaderPrecisionFormat(CCGLenum shadertype, CCGLenum precisiontype, CCGLint* range, CCGLint* precision);
    void getShaderSource(WebGLId shader, CCGLsizei bufSize, CCGLsizei*  length, CCGLchar * source);
    CCGLubyte* getString(CCGLenum name);
    void getTexParameterfv(CCGLenum target, CCGLenum pname, CCGLfloat* value);
    void getTexParameteriv(CCGLenum target, CCGLenum pname, CCGLint* value);
    void getUniformfv(WebGLId program, CCGLint location, CCGLfloat* value);
    void getUniformiv(WebGLId program, CCGLint location, CCGLint* value);
    CCGLint getUniformLocation(WebGLId program, const CCGLchar* name);
    void getVertexAttribfv(CCGLuint index, CCGLenum pname, CCGLfloat* value);
    void getVertexAttribiv(CCGLuint index, CCGLenum pname, CCGLint* value);
    CCGLsizeiptr getVertexAttribOffset(CCGLuint index, CCGLenum pname);

    void hint(CCGLenum target, CCGLenum mode);
    CCGLboolean isBuffer(WebGLId buffer);
    CCGLboolean isEnabled(CCGLenum cap);
    CCGLboolean isFramebuffer(WebGLId framebuffer);
    CCGLboolean isProgram(WebGLId program);
    CCGLboolean isRenderbuffer(WebGLId renderbuffer);
    CCGLboolean isShader(WebGLId shader);
    CCGLboolean isTexture(WebGLId texture);
    void lineWidth(CCGLfloat);
    void linkProgram(WebGLId program);
    void pixelStorei(CCGLenum pname, CCGLint param);
    void polygonOffset(CCGLfloat factor, CCGLfloat units);

    void readPixels(CCGLint x, CCGLint y, CCGLsizei width, CCGLsizei height, CCGLenum format, CCGLenum type, void* pixels);

    void releaseShaderCompiler();

    void renderbufferStorage(CCGLenum target, CCGLenum internalformat, CCGLsizei width, CCGLsizei height);
    void sampleCoverage(CCGLclampf value, CCGLboolean invert);
    void scissor(CCGLint x, CCGLint y, CCGLsizei width, CCGLsizei height);
    void shaderSource(WebGLId shader, 	CCGLsizei count, const CCGLchar **string, const CCGLint *length);
    void stencilFunc(CCGLenum func, CCGLint ref, CCGLuint mask);
    void stencilFuncSeparate(CCGLenum face, CCGLenum func, CCGLint ref, CCGLuint mask);
    void stencilMask(CCGLuint mask);
    void stencilMaskSeparate(CCGLenum face, CCGLuint mask);
    void stencilOp(CCGLenum fail, CCGLenum zfail, CCGLenum zpass);
    void stencilOpSeparate(CCGLenum face, CCGLenum fail, CCGLenum zfail, CCGLenum zpass);

    void texImage2D(CCGLenum target, CCGLint level, CCGLenum internalformat, CCGLsizei width, CCGLsizei height, CCGLint border, CCGLenum format, CCGLenum type, const void* pixels);
    void texImage2DHTMLImageElement(CCGLenum target, CCGLint level, CCGLenum internalformat, CCGLenum format, CCGLenum type, void*);
    void texImage2DHTMLCanvasElement(CCGLenum target, CCGLint level, CCGLenum internalformat, CCGLenum format, CCGLenum type, void*);
    void texImage2DHTMLVideoElement(CCGLenum target, CCGLint level, CCGLenum internalformat, CCGLenum format, CCGLenum type, void* pElement);

    void texParameterf(CCGLenum target, CCGLenum pname, CCGLfloat param);
    void texParameteri(CCGLenum target, CCGLenum pname, CCGLint param);

    void texSubImage2D(CCGLenum target, CCGLint level, CCGLint xoffset, CCGLint yoffset, CCGLsizei width, CCGLsizei height, CCGLenum format, CCGLenum type, const void* pixels);


    void uniform1f(CCGLint location, CCGLfloat x);
    void uniform1fv(CCGLint location, CCGLsizei count, const CCGLfloat* v);
    void uniform1i(CCGLint location, CCGLint x);
    void uniform1iv(CCGLint location, CCGLsizei count, const CCGLint* v);
    void uniform2f(CCGLint location, CCGLfloat x, CCGLfloat y);
    void uniform2fv(CCGLint location, CCGLsizei count, const CCGLfloat* v);
    void uniform2i(CCGLint location, CCGLint x, CCGLint y);
    void uniform2iv(CCGLint location, CCGLsizei count, const CCGLint* v);
    void uniform3f(CCGLint location, CCGLfloat x, CCGLfloat y, CCGLfloat z);
    void uniform3fv(CCGLint location, CCGLsizei count, const CCGLfloat* v);
    void uniform3i(CCGLint location, CCGLint x, CCGLint y, CCGLint z);
    void uniform3iv(CCGLint location, CCGLsizei count, const CCGLint* v);
    void uniform4f(CCGLint location, CCGLfloat x, CCGLfloat y, CCGLfloat z, CCGLfloat w);
    void uniform4fv(CCGLint location, CCGLsizei count, const CCGLfloat* v);
    void uniform4i(CCGLint location, CCGLint x, CCGLint y, CCGLint z, CCGLint w);
    void uniform4iv(CCGLint location, CCGLsizei count, const CCGLint* v);
    void uniformMatrix2fv(CCGLint location, CCGLsizei count, CCGLboolean transpose, const CCGLfloat* value);
    void uniformMatrix3fv(CCGLint location, CCGLsizei count, CCGLboolean transpose, const CCGLfloat* value);
    void uniformMatrix4fv(CCGLint location, CCGLsizei count, CCGLboolean transpose, const CCGLfloat* value);

    void useProgram(WebGLId program);
    void validateProgram(WebGLId program);

    void vertexAttrib1f(CCGLuint index, CCGLfloat x);
    void vertexAttrib1fv(CCGLuint index, const CCGLfloat* values);
    void vertexAttrib2f(CCGLuint index, CCGLfloat x, CCGLfloat y);
    void vertexAttrib2fv(CCGLuint index, const CCGLfloat* values);
    void vertexAttrib3f(CCGLuint index, CCGLfloat x, CCGLfloat y, CCGLfloat z);
    void vertexAttrib3fv(CCGLuint index, const CCGLfloat* values);
    void vertexAttrib4f(CCGLuint index, CCGLfloat x, CCGLfloat y, CCGLfloat z, CCGLfloat w);
    void vertexAttrib4fv(CCGLuint index, const CCGLfloat* values);
    //virtual void vertexAttribPointer(CCGLuint index, CCGLint size, CCGLenum type, CCGLboolean normalized,
    //                                 CCGLsizei stride, CCGLintptr offset);
    void vertexAttribPointer(CCGLuint index, CCGLint size, CCGLenum type, CCGLboolean normalized,
                             CCGLsizei stride, CCGLvoid* offset);

    void viewport(CCGLint x, CCGLint y, CCGLsizei width, CCGLsizei height);

    // Support for buffer creation and deletion.
    void genBuffers(CCGLsizei count, WebGLId* ids);
    void genFramebuffers(CCGLsizei count, WebGLId* ids);
    void genRenderbuffers(CCGLsizei count, WebGLId* ids);
    void genTextures(CCGLsizei count, WebGLId* ids);

    void deleteBuffers(CCGLsizei count, WebGLId* ids);
    void deleteFramebuffers(CCGLsizei count, WebGLId* ids);
    void deleteRenderbuffers(CCGLsizei count, WebGLId* ids);
    void deleteTextures(CCGLsizei count, WebGLId* ids);

    WebGLId createBuffer();
    WebGLId createFramebuffer();
    WebGLId createRenderbuffer();
    WebGLId createTexture();

    void deleteBuffer(WebGLId);
    void deleteFramebuffer(WebGLId);
    void deleteRenderbuffer(WebGLId);
    void deleteTexture(WebGLId);

    WebGLId createProgram();
    WebGLId createShader(CCGLenum);

    void deleteShader(WebGLId);
    void deleteProgram(WebGLId);

    //Return the canvas width and height to set
    int canvasWidth();
    int canvasHeight();

    bool isContextLost();

    static WebGLId bufferToId(RefPtr<WebGLBuffer>&);
    static WebGLBuffer* idToBuffer(WebGLId);

    static WebGLId framebufferToId(RefPtr<WebGLFramebuffer>&);
    static WebGLFramebuffer* idToFramebuffer(WebGLId);

    static WebGLId programToId(RefPtr<WebGLProgram>&);
    static WebGLProgram* idToProgram(WebGLId);

    static WebGLId renderbufferToId(RefPtr<WebGLRenderbuffer>&);
    static WebGLRenderbuffer* idToRenderbuffer(WebGLId);

    static WebGLId shaderToId(RefPtr<WebGLShader>&);
    static WebGLShader* idToShader(WebGLId);

    static WebGLId textureToId(RefPtr<WebGLTexture>&);
    static WebGLTexture* idToTexture(WebGLId);

    //static WebGLId uniformLocationToId(RefPtr<WebGLUniformLocation>&);
    //static WebGLUniformLocation* idToUniformLocation(WebGLId);
private:
    WebGLRenderingContext* m_pWebGLRenderingContext;
    WebGraphicsContext3D*  m_pWebGraphicsContext3D;

    int getIntfromGLInfo(WebGLGetInfo& info);
    //void charToString(CCGLchar* pChar, String& string);
    //void stringToChar(String& string, CCGLchar* pChar, int maxLength);

    //Added function to support General file read
    unsigned char* getDataFromURL(const char* fileURL, unsigned long* pSize);
    
    // Added function to support Cocos2d to load texture from a filename
    void texImage2D(CCGLenum target, CCGLint level, CCGLenum internalformat,
        CCGLenum format, CCGLenum type, const char* urlString, CCGLint * width, CCGLint* height);

    WebGLGetInfo getUniform(WebGLProgram* program, const CCGLint location);
    
    Platform3DObject objectOrZero(WebGLObject* object);
};

} // namespace blink

#endif // CCSpriteImpl_h
