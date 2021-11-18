// GENERATED FILE - DO NOT EDIT.
// Generated by gen_vk_internal_shaders.py.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// shaders/gen/ImageClear.frag.00000007.inc:
//   Pre-generated shader for the ANGLE Vulkan back-end.

#pragma once
constexpr uint8_t kImageClear_frag_00000007[] = {
    0x1f,0x8b,0x08,0x00,0x00,0x00,0x00,0x00,0x02,0xff,0x4d,0x50,0xcb,0x4a,0x03,0x41,
    0x10,0xac,0xcc,0x98,0xd9,0xec,0xc3,0x6c,0x92,0x75,0xa3,0xa7,0x10,0xc9,0x51,0x08,
    0x1e,0x54,0x02,0x41,0xc1,0x93,0x1e,0x72,0xf3,0x0b,0x04,0x2f,0x1e,0xf4,0xa2,0x1f,
    0xef,0x45,0xb0,0x6a,0xb6,0x84,0x0c,0xf4,0x74,0x77,0x75,0xf5,0x33,0x86,0x4d,0x01,
    0x8c,0x50,0x61,0x82,0x0b,0x0c,0x6f,0x8e,0x40,0x04,0xa8,0x91,0xb2,0x7e,0x3a,0xbc,
    0x1c,0xb6,0x5f,0xdf,0x6f,0xdb,0x9b,0xdb,0x6b,0xc5,0xa7,0x88,0x99,0xa7,0x58,0x8b,
    0x02,0x27,0xd4,0x92,0x8f,0xd7,0xf7,0x4f,0xe1,0x25,0xa5,0xa3,0xcc,0xc8,0x13,0x5e,
    0x1c,0xd9,0x8d,0xea,0xd1,0x12,0x67,0x45,0x51,0xa5,0x67,0x8c,0xd9,0x7f,0x78,0x1b,
    0xeb,0x7f,0x6c,0x64,0x6c,0x96,0xf3,0x62,0xc6,0x82,0x6b,0x74,0x79,0x46,0x60,0x99,
    0xfb,0x85,0x8c,0x5f,0x92,0x13,0xcd,0x59,0xd2,0x4a,0xd4,0x6b,0xca,0x39,0xf9,0x9a,
    0x23,0x79,0xd6,0x35,0xff,0x89,0xfb,0x0b,0xdf,0xdb,0x2f,0x8d,0xad,0xe8,0x57,0x8e,
    0x25,0xf3,0x6b,0xc7,0x2b,0xf3,0x6b,0xef,0x23,0xac,0xa7,0x7f,0xea,0x5e,0x9a,0xf9,
    0xca,0xfe,0xd4,0xfb,0x28,0xbf,0x35,0xb7,0xb0,0xbf,0x70,0xaf,0xe4,0x7a,0x0b,0xdf,
    0x2d,0x1e,0xe5,0x9f,0xb9,0x9e,0xf8,0xbd,0xf3,0xc5,0xbf,0xe3,0x7d,0x82,0x77,0x81,
    0x73,0x7e,0x88,0x8c,0xa9,0x1f,0xf9,0xb7,0xbe,0x59,0xe3,0x19,0xee,0xbd,0xff,0xdc,
    0xf8,0x03,0x33,0x4a,0xfb,0xe2,0xf7,0xbe,0x63,0xe3,0x9e,0xe2,0xa7,0x7c,0xb7,0x01,
    0x17,0xbf,0xb3,0xff,0xcb,0x89,0x76,0x94,0x3f,0x33,0xdf,0x33,0x5d,0x3c,0x02,0x00,
    0x00
};

// Generated from:
//
// #version 450 core
//
// layout(push_constant)uniform PushConstants {
//        vec4 clearColor;
//     float clearDepth;
// } params;
//
// layout(location = 3)out vec4 colorOut;
//
// void main()
// {
//     colorOut = params . clearColor;
//
//     gl_FragDepth = params . clearDepth;
//
// }