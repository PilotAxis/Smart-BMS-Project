#ifndef PROTECTION_H
#define PROTECTION_H

const float MAX_VOLTAGE = 4.20;
const float MIN_VOLTAGE = 3.00;

const float MAX_CURRENT = 5.0;

const float MAX_TEMP = 60.0;

enum BatteryStatus
{
    NORMAL,

    OVER_VOLTAGE,

    UNDER_VOLTAGE,

    OVER_CURRENT,

    OVER_TEMPERATURE
};

extern BatteryStatus batteryStatus;

void checkProtection();

#endif