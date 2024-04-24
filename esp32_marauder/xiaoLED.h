#pragma once

#ifndef xiaoLED_H
#define xiaoLED_H

#include "configs.h"
#include "settings.h"

#include <Arduino.h>

#ifdef ESP32_C3_SUPER_COMPACT
  #define XIAO_LED_PIN 8
#elif defined(ESP32_C3_SUPER_COMPACTV2)
  #define XIAO_LED_PIN 8
#else
  #define XIAO_LED_PIN 21
#endif


extern Settings settings_obj;

class xiaoLED {

    public:
        void RunSetup();
        void main();
        void attackLED();
        void sniffLED();
        void offLED();
};

#endif  /* xiaoLED_H */