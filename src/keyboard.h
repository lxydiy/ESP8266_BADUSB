/*
   This software is licensed under the MIT License. See the license file for details.
   Source: https://github.com/spacehuhntech/WiFiDuck
 */

#pragma once

#include <Arduino.h>
#include "locales/locales.h"

namespace keyboard {
    typedef struct report {
        uint8_t modifiers;
        uint8_t reserved;
        uint8_t keys[6];
    } report;
    
    void setPin(uint8_t _pintx, uint8_t _pinrst);
    
    void begin();

    void setLocale(hid_locale_t* locale);

    void send(report* k);
    void release();

    void pressKey(uint8_t key, uint8_t modifiers = KEY_NONE);
    void pressModifier(uint8_t key);

    uint8_t press(const char* strPtr);

    uint8_t write(const char* c);
    void write(const char* str, size_t len);
}
