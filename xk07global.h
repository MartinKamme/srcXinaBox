#ifndef XK07_GLOBAL
#define XK07_GLOBAL

#include <Arduino.h>

#if defined(ARDUINO_ARCH_ESP8266)
#define LED_RED 12
#define LED_GREEN 13
#define LED_BLUE 5
#elif defined(ARDUINO_SAMD_ZERO)
#include <Adafruit_SleepyDog.h>
#define LED_RED 11
#define LED_GREEN 12
#define LED_BLUE 13
#endif

#define XK07_FW_VERSION "2.1.6"

class xk07_global
{
public:
    xk07_global() : setup(false) {}
    void redDebug();
    void blueDebug();
    void greenDebug();
    void pinModeOutput();
    void rgbOff();
    void watchdog();

private:
    bool setup;
};

extern xk07_global global;
#endif
