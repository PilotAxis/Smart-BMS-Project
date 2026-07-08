#ifndef PROTECTION_H
#define PROTECTION_H

#include <Arduino.h>

enum batteryStatus : uint8_t
{
    NORMAL = 0x00,
    OVER_VOLTAGE = 0x01,
    UNDER_VOLTAGE = 0x02,
    OVER_CURRENT = 0x04,
    OVER_TEMPERATURE = 0x08
};

extern uint8_t batteryStatus;

void checkProtection();

#endif