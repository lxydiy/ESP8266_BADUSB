/*
   This software is licensed under the MIT License. See the license file for details.
   Source: https://github.com/spacehuhntech/WiFiDuck
 */

#pragma once

#include "usb_hid_keys.h"

// Modifier(s), Key
const uint8_t ascii_ru[] PROGMEM = {
    KEY_NONE,       KEY_NONE,       // NUL
    KEY_NONE,       KEY_NONE,       // SOH
    KEY_NONE,       KEY_NONE,       // STX
    KEY_NONE,       KEY_NONE,       // ETX
    KEY_NONE,       KEY_NONE,       // EOT
    KEY_NONE,       KEY_NONE,       // ENQ
    KEY_NONE,       KEY_NONE,       // ACK
    KEY_NONE,       KEY_NONE,       // BEL

    // 8, 0x08
    KEY_NONE,       KEY_BACKSPACE,  // BS  Backspace
    KEY_NONE,       KEY_TAB,        // TAB  Tab
    KEY_NONE,       KEY_ENTER,      // LF Enter

    KEY_NONE,       KEY_NONE,       // VT
    KEY_NONE,       KEY_NONE,       // FF
    KEY_NONE,       KEY_NONE,       // CR
    KEY_NONE,       KEY_NONE,       // SO
    KEY_NONE,       KEY_NONE,       // SI
    KEY_NONE,       KEY_NONE,       // DEL
    KEY_NONE,       KEY_NONE,       // DC1
    KEY_NONE,       KEY_NONE,       // DC2
    KEY_NONE,       KEY_NONE,       // DC3
    KEY_NONE,       KEY_NONE,       // DC4
    KEY_NONE,       KEY_NONE,       // NAK
    KEY_NONE,       KEY_NONE,       // SYN
    KEY_NONE,       KEY_NONE,       // ETB
    KEY_NONE,       KEY_NONE,       // CAN
    KEY_NONE,       KEY_NONE,       // EM
    KEY_NONE,       KEY_NONE,       // SUB
    KEY_NONE,       KEY_NONE,       // ESC
    KEY_NONE,       KEY_NONE,       // FS
    KEY_NONE,       KEY_NONE,       // GS
    KEY_NONE,       KEY_NONE,       // RS
    KEY_NONE,       KEY_NONE,       // US

    // 32, 0x20
    KEY_NONE,       KEY_SPACE,      // ' '
    KEY_MOD_LSHIFT, KEY_1,          // !
    KEY_MOD_LSHIFT, KEY_2,          // "
    KEY_NONE,       KEY_NONE,       // #
    
    // 36, 0x24
    KEY_NONE,       KEY_NONE,       // $ 
    KEY_MOD_LSHIFT, KEY_5,          // %
    KEY_NONE,       KEY_NONE,       // &
    KEY_NONE,       KEY_NONE,       // '

    // 40, 0x28
    KEY_MOD_LSHIFT, KEY_9,          // (
    KEY_MOD_LSHIFT, KEY_0,          // )
    KEY_MOD_LSHIFT, KEY_8,          // *
    KEY_MOD_LSHIFT, KEY_EQUAL,      // +

    // 44, 0x2c
    KEY_MOD_LSHIFT, KEY_SLASH,      // ,
    KEY_NONE,       KEY_MINUS,      // -
    KEY_NONE,       KEY_SLASH,      // .
    KEY_MOD_LSHIFT, KEY_BACKSLASH,  // /

    // 48, 0x30
    KEY_NONE,       KEY_0,          // 0
    KEY_NONE,       KEY_1,          // 1
    KEY_NONE,       KEY_2,          // 2
    KEY_NONE,       KEY_3,          // 3

    // 52, 0x34
    KEY_NONE,       KEY_4,          // 4
    KEY_NONE,       KEY_5,          // 5
    KEY_NONE,       KEY_6,          // 6
    KEY_NONE,       KEY_7,          // 7

    // 56, 0x38
    KEY_NONE,       KEY_8,          // 8
    KEY_NONE,       KEY_9,          // 9
    KEY_MOD_LSHIFT, KEY_6,          // :
    KEY_MOD_LSHIFT, KEY_4,          // ;

    // 60, 0x3c
    KEY_NONE,       KEY_NONE,       // <
    KEY_MOD_LSHIFT, KEY_0,          // =
    KEY_MOD_LSHIFT, KEY_NONE,       // >
    KEY_MOD_LSHIFT, KEY_7,          // ?

    // 64, 0x40
    KEY_NONE,       KEY_NONE,       // @
    KEY_MOD_LSHIFT, KEY_A,          // A
    KEY_MOD_LSHIFT, KEY_B,          // B
    KEY_MOD_LSHIFT, KEY_C,          // C

    // 68, 0x44
    KEY_MOD_LSHIFT, KEY_D,          // D
    KEY_MOD_LSHIFT, KEY_E,          // E
    KEY_MOD_LSHIFT, KEY_F,          // F
    KEY_MOD_LSHIFT, KEY_G,          // G

    // 72, 0x48
    KEY_MOD_LSHIFT, KEY_H,          // H
    KEY_MOD_LSHIFT, KEY_I,          // I
    KEY_MOD_LSHIFT, KEY_J,          // J
    KEY_MOD_LSHIFT, KEY_K,          // K

    // 76, 0x4c
    KEY_MOD_LSHIFT, KEY_L,          // L
    KEY_MOD_LSHIFT, KEY_M,          // M
    KEY_MOD_LSHIFT, KEY_N,          // N
    KEY_MOD_LSHIFT, KEY_O,          // O

    // 80, 0x50
    KEY_MOD_LSHIFT, KEY_P,          // P
    KEY_MOD_LSHIFT, KEY_Q,          // Q
    KEY_MOD_LSHIFT, KEY_R,          // R
    KEY_MOD_LSHIFT, KEY_S,          // S

    // 84, 0x54
    KEY_MOD_LSHIFT, KEY_T,          // T
    KEY_MOD_LSHIFT, KEY_U,          // U
    KEY_MOD_LSHIFT, KEY_V,          // V
    KEY_MOD_LSHIFT, KEY_W,          // W

    // 88, 0x58
    KEY_MOD_LSHIFT, KEY_X,          // X
    KEY_MOD_LSHIFT, KEY_Y,          // Y
    KEY_MOD_LSHIFT, KEY_Z,          // Z
    KEY_NONE,       KEY_NONE,       // [

    // 92, 0x5c
    KEY_NONE,       KEY_BACKSLASH,  // bslash
    KEY_NONE,       KEY_NONE,       // ]
    KEY_NONE,       KEY_NONE,       // ^
    KEY_MOD_LSHIFT, KEY_MINUS,      // _

    // 96, 0x60
    KEY_NONE,       KEY_NONE,       // `
    KEY_NONE,       KEY_A,          // a
    KEY_NONE,       KEY_B,          // b
    KEY_NONE,       KEY_C,          // c

    // 100, 0x64
    KEY_NONE,       KEY_D,          // d
    KEY_NONE,       KEY_E,          // e
    KEY_NONE,       KEY_F,          // f
    KEY_NONE,       KEY_G,          // g

    // 104, 0x68
    KEY_NONE,       KEY_H,          // h
    KEY_NONE,       KEY_I,          // i
    KEY_NONE,       KEY_J,          // j
    KEY_NONE,       KEY_K,          // k

    // 108, 0x6c
    KEY_NONE,       KEY_L,          // l
    KEY_NONE,       KEY_M,          // m
    KEY_NONE,       KEY_N,          // n
    KEY_NONE,       KEY_O,          // o

    // 112, 0x70
    KEY_NONE,       KEY_P,          // p
    KEY_NONE,       KEY_Q,          // q
    KEY_NONE,       KEY_R,          // r
    KEY_NONE,       KEY_S,          // s

    // 116, 0x74
    KEY_NONE,       KEY_T,          // t
    KEY_NONE,       KEY_U,          // u
    KEY_NONE,       KEY_V,          // v
    KEY_NONE,       KEY_W,          // w

    // 120, 0x78
    KEY_NONE,       KEY_X,          // x
    KEY_NONE,       KEY_Y,          // y
    KEY_NONE,       KEY_Z,          // z
    KEY_NONE,       KEY_NONE,       // {

    // 124, 0x7c
    KEY_NONE,       KEY_NONE,       // |
    KEY_NONE,       KEY_NONE,       // }
    KEY_NONE,       KEY_NONE,       // ~
    KEY_NONE,       KEY_BACKSPACE,  // DEL
};

const uint8_t extended_ascii_ru[] PROGMEM = {
    0xF1, KEY_NONE,       KEY_GRAVE,       // ??
    0xA1, KEY_MOD_LSHIFT, KEY_GRAVE,       // ??
    
    0xD9, KEY_NONE,       KEY_Q,           // ??
    0xB9, KEY_MOD_LSHIFT, KEY_Q,           // ??
    0xE6, KEY_NONE,       KEY_W,           // ??
    0xC6, KEY_MOD_LSHIFT, KEY_W,           // ??
    0xE3, KEY_NONE,       KEY_E,           // ??
    0xC3, KEY_MOD_LSHIFT, KEY_E,           // ??
    0xDA, KEY_NONE,       KEY_R,           // ??
    0xBA, KEY_MOD_LSHIFT, KEY_R,           // ??
    0xD5, KEY_NONE,       KEY_T,           // ??
    0xB5, KEY_MOD_LSHIFT, KEY_T,           // ??
    0xDD, KEY_NONE,       KEY_Y,           // ??
    0xBD, KEY_MOD_LSHIFT, KEY_Y,           // ??
    0xD3, KEY_NONE,       KEY_U,           // ??
    0xB3, KEY_MOD_LSHIFT, KEY_U,           // ??
    0xE8, KEY_NONE,       KEY_I,           // ??
    0xC8, KEY_MOD_LSHIFT, KEY_I,           // ??
    0xE9, KEY_NONE,       KEY_O,           // ??
    0xC9, KEY_MOD_LSHIFT, KEY_O,           // ??
    0xD7, KEY_NONE,       KEY_P,           // ??
    0xB7, KEY_MOD_LSHIFT, KEY_P,           // ??
    0xE5, KEY_NONE,       KEY_LEFTBRACE,   // ??
    0xC5, KEY_MOD_LSHIFT, KEY_LEFTBRACE,   // ??
    0xEA, KEY_NONE,       KEY_RIGHTBRACE,  // ??
    0xCA, KEY_MOD_LSHIFT, KEY_RIGHTBRACE,  // ??

    0xE4, KEY_NONE,       KEY_A,           // ??
    0xC4, KEY_MOD_LSHIFT, KEY_A,           // ??
    0xEB, KEY_NONE,       KEY_S,           // ??
    0xCB, KEY_MOD_LSHIFT, KEY_S,           // ??
    0xD3, KEY_NONE,       KEY_D,           // ??
    0xB3, KEY_MOD_LSHIFT, KEY_D,           // ??
    0xD0, KEY_NONE,       KEY_F,           // ??
    0xB0, KEY_MOD_LSHIFT, KEY_F,           // ??
    0xDF, KEY_NONE,       KEY_G,           // ??
    0xBF, KEY_MOD_LSHIFT, KEY_G,           // ??
    0xE0, KEY_NONE,       KEY_H,           // ??
    0xC0, KEY_MOD_LSHIFT, KEY_H,           // ??
    0xDE, KEY_NONE,       KEY_J,           // ??
    0xBE, KEY_MOD_LSHIFT, KEY_J,           // ??
    0xDB, KEY_NONE,       KEY_K,           // ??
    0xBB, KEY_MOD_LSHIFT, KEY_K,           // ??
    0xD4, KEY_NONE,       KEY_L,           // ??
    0xB4, KEY_MOD_LSHIFT, KEY_L,           // ??
    0xD6, KEY_NONE,       KEY_SEMICOLON,   // ??
    0xB6, KEY_MOD_LSHIFT, KEY_SEMICOLON,   // ??
    0xED, KEY_NONE,       KEY_APOSTROPHE,  // ??
    0xCD, KEY_MOD_LSHIFT, KEY_APOSTROPHE,  // ??

    0xCF, KEY_NONE,       KEY_Z,           // ??
    0xEF, KEY_MOD_LSHIFT, KEY_Z,           // ??
    0xE7, KEY_NONE,       KEY_X,           // ??
    0xC7, KEY_MOD_LSHIFT, KEY_X,           // ??
    0xE1, KEY_NONE,       KEY_C,           // ??
    0xC1, KEY_MOD_LSHIFT, KEY_C,           // ??
    0xDC, KEY_NONE,       KEY_V,           // ??
    0xBC, KEY_MOD_LSHIFT, KEY_V,           // ??
    0xD8, KEY_NONE,       KEY_B,           // ??
    0xB8, KEY_MOD_LSHIFT, KEY_B,           // ??
    0xE2, KEY_NONE,       KEY_N,           // ??
    0xC2, KEY_MOD_LSHIFT, KEY_N,           // ??
    0xEC, KEY_NONE,       KEY_M,           // ??
    0xCC, KEY_MOD_LSHIFT, KEY_M,           // ??
    0xD1, KEY_NONE,       KEY_COMMA,       // ??
    0xB1, KEY_MOD_LSHIFT, KEY_COMMA,       // ??
    0xEE, KEY_NONE,       KEY_DOT,         // ??
    0xCE, KEY_MOD_LSHIFT, KEY_DOT,         // ??
};

const uint8_t utf8_ru[] PROGMEM = {
    0xd1, 0x91, 0x00, 0x00,   KEY_NONE,         KEY_GRAVE,       // ??
    0xd0, 0x81, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_GRAVE,       // ??

    0xd0, 0xb9, 0x00, 0x00,   KEY_NONE,         KEY_Q,           // ??
    0xd0, 0x99, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_Q,           // ??
    0xd1, 0x86, 0x00, 0x00,   KEY_NONE,         KEY_W,           // ??
    0xd0, 0xa6, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_W,           // ??
    0xd1, 0x83, 0x00, 0x00,   KEY_NONE,         KEY_E,           // ??
    0xd0, 0xa3, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_E,           // ??
    0xd0, 0xba, 0x00, 0x00,   KEY_NONE,         KEY_R,           // ??
    0xd0, 0x9a, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_R,           // ??
    0xd0, 0xb5, 0x00, 0x00,   KEY_NONE,         KEY_T,           // ??
    0xd0, 0x95, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_T,           // ??
    0xd0, 0xbd, 0x00, 0x00,   KEY_NONE,         KEY_Y,           // ??
    0xd0, 0x9d, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_Y,           // ??
    0xd0, 0xb3, 0x00, 0x00,   KEY_NONE,         KEY_U,           // ??
    0xd0, 0x93, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_U,           // ??
    0xd1, 0x88, 0x00, 0x00,   KEY_NONE,         KEY_I,           // ??
    0xd0, 0xa8, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_I,           // ??
    0xd1, 0x89, 0x00, 0x00,   KEY_NONE,         KEY_O,           // ??
    0xd0, 0xa9, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_O,           // ??
    0xd0, 0xb7, 0x00, 0x00,   KEY_NONE,         KEY_P,           // ??
    0xd0, 0x97, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_P,           // ??
    0xd1, 0x85, 0x00, 0x00,   KEY_NONE,         KEY_LEFTBRACE,   // ??
    0xd0, 0xa5, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_LEFTBRACE,   // ??
    0xd1, 0x8a, 0x00, 0x00,   KEY_NONE,         KEY_RIGHTBRACE,  // ??
    0xd0, 0xaa, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_RIGHTBRACE,  // ??

    0xd1, 0x84, 0x00, 0x00,   KEY_NONE,         KEY_A,           // ??
    0xd0, 0xa4, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_A,           // ??
    0xd1, 0x8b, 0x00, 0x00,   KEY_NONE,         KEY_S,           // ??
    0xd0, 0xab, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_S,           // ??
    0xd0, 0xb2, 0x00, 0x00,   KEY_NONE,         KEY_D,           // ??
    0xd0, 0x92, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_D,           // ??
    0xd0, 0xb0, 0x00, 0x00,   KEY_NONE,         KEY_F,           // ??
    0xd0, 0x90, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_F,           // ??
    0xd0, 0xbf, 0x00, 0x00,   KEY_NONE,         KEY_G,           // ??
    0xd0, 0x9f, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_G,           // ??
    0xd1, 0x80, 0x00, 0x00,   KEY_NONE,         KEY_H,           // ??
    0xd0, 0xa0, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_H,           // ??
    0xd0, 0xbe, 0x00, 0x00,   KEY_NONE,         KEY_J,           // ??
    0xd0, 0x9e, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_J,           // ??
    0xd0, 0xbb, 0x00, 0x00,   KEY_NONE,         KEY_K,           // ??
    0xd0, 0x9b, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_K,           // ??
    0xd0, 0xb4, 0x00, 0x00,   KEY_NONE,         KEY_L,           // ??
    0xd0, 0x94, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_L,           // ??
    0xd0, 0xb6, 0x00, 0x00,   KEY_NONE,         KEY_SEMICOLON,   // ??
    0xd0, 0x96, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_SEMICOLON,   // ??
    0xd1, 0x8d, 0x00, 0x00,   KEY_NONE,         KEY_APOSTROPHE,  // ??
    0xd0, 0xad, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_APOSTROPHE,  // ??

    0xd1, 0x8f, 0x00, 0x00,   KEY_NONE,         KEY_Z,           // ??
    0xd0, 0xaf, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_Z,           // ??
    0xd1, 0x87, 0x00, 0x00,   KEY_NONE,         KEY_X,           // ??
    0xd0, 0xa7, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_X,           // ??
    0xd1, 0x81, 0x00, 0x00,   KEY_NONE,         KEY_C,           // ??
    0xd0, 0xa1, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_C,           // ??
    0xd0, 0xbc, 0x00, 0x00,   KEY_NONE,         KEY_V,           // ??
    0xd0, 0x9c, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_V,           // ??
    0xd0, 0xb8, 0x00, 0x00,   KEY_NONE,         KEY_B,           // ??
    0xd0, 0x98, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_B,           // ??
    0xd1, 0x82, 0x00, 0x00,   KEY_NONE,         KEY_N,           // ??
    0xd0, 0xa2, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_N,           // ??
    0xd1, 0x8c, 0x00, 0x00,   KEY_NONE,         KEY_M,           // ??
    0xd0, 0xac, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_M,           // ??
    0xd0, 0xb1, 0x00, 0x00,   KEY_NONE,         KEY_COMMA,       // ??
    0xd0, 0x91, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_COMMA,       // ??
    0xd1, 0x8e, 0x00, 0x00,   KEY_NONE,         KEY_DOT,         // ??
    0xd0, 0xae, 0x00, 0x00,   KEY_MOD_LSHIFT,   KEY_DOT          // ??
};

static hid_locale_t locale_ru {
    (uint8_t*)ascii_ru, sizeof(ascii_ru) / 2,
    (uint8_t*)extended_ascii_ru,  sizeof(extended_ascii_ru) / 3,
    (uint8_t*)utf8_ru, sizeof(utf8_ru) / 6
};
