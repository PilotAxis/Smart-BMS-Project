#include "protection.h"

float batteryVoltage;
float batteryCurrent;
float batteryTemperature;

void checkVoltage()
{
    if (batteryVoltage > MAX_VOLTAGE) {
        batteryStatus = OVER_VOLTAGE;
        return;
    }

    if (batteryVoltage < MIN_VOLTAGE) {
        batteryStatus = UNDER_VOLTAGE;
        return;
    }
}

void checkCurrent()
{
    if(batteryCurrent > MAX_CURRENT)
    {
        batteryStatus = OVER_CURRENT;
    }
}

void checkTemperature()
{
    if(batteryTemperature > MAX_TEMP)
    {
        batteryStatus = OVER_TEMPERATURE;
    }
}