// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// entry_points_gl_4_2_autogen.h:
//   Defines the GL 4.2 entry points.

#ifndef LIBGL_ENTRY_POINTS_GL_4_2_AUTOGEN_H_
#define LIBGL_ENTRY_POINTS_GL_4_2_AUTOGEN_H_

#include <export.h>
#include "angle_gl.h"

namespace gl
{
ANGLE_EXPORT void GL_APIENTRY BindImageTexture(GLuint unit,
                                               GLuint texture,
                                               GLint level,
                                               GLboolean layered,
                                               GLint layer,
                                               GLenum access,
                                               GLenum format);
ANGLE_EXPORT void GL_APIENTRY DrawArraysInstancedBaseInstance(GLenum mode,
                                                              GLint first,
                                                              GLsizei count,
                                                              GLsizei instancecount,
                                                              GLuint baseinstance);
ANGLE_EXPORT void GL_APIENTRY DrawElementsInstancedBaseInstance(GLenum mode,
                                                                GLsizei count,
                                                                GLenum type,
                                                                const void *indices,
                                                                GLsizei instancecount,
                                                                GLuint baseinstance);
ANGLE_EXPORT void GL_APIENTRY DrawElementsInstancedBaseVertexBaseInstance(GLenum mode,
                                                                          GLsizei count,
                                                                          GLenum type,
                                                                          const void *indices,
                                                                          GLsizei instancecount,
                                                                          GLint basevertex,
                                                                          GLuint baseinstance);
ANGLE_EXPORT void GL_APIENTRY DrawTransformFeedbackInstanced(GLenum mode,
                                                             GLuint id,
                                                             GLsizei instancecount);
ANGLE_EXPORT void GL_APIENTRY DrawTransformFeedbackStreamInstanced(GLenum mode,
                                                                   GLuint id,
                                                                   GLuint stream,
                                                                   GLsizei instancecount);
ANGLE_EXPORT void GL_APIENTRY GetActiveAtomicCounterBufferiv(GLuint program,
                                                             GLuint bufferIndex,
                                                             GLenum pname,
                                                             GLint *params);
ANGLE_EXPORT void GL_APIENTRY GetInternalformativ(GLenum target,
                                                  GLenum internalformat,
                                                  GLenum pname,
                                                  GLsizei bufSize,
                                                  GLint *params);
ANGLE_EXPORT void GL_APIENTRY MemoryBarrier(GLbitfield barriers);
ANGLE_EXPORT void GL_APIENTRY TexStorage1D(GLenum target,
                                           GLsizei levels,
                                           GLenum internalformat,
                                           GLsizei width);
ANGLE_EXPORT void GL_APIENTRY
TexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
ANGLE_EXPORT void GL_APIENTRY TexStorage3D(GLenum target,
                                           GLsizei levels,
                                           GLenum internalformat,
                                           GLsizei width,
                                           GLsizei height,
                                           GLsizei depth);
}  // namespace gl

#endif  // LIBGL_ENTRY_POINTS_GL_4_2_AUTOGEN_H_