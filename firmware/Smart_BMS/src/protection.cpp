#include "/Users/ahmedmajid/Downloads/Smart BMS Project/firmware/Smart_BMS/include/protection.h"
#include "/Users/ahmedmajid/Downloads/Smart BMS Project/firmware/Smart_BMS/include/config.h"
#include "/Users/ahmedmajid/Downloads/Smart BMS Project/firmware/Smart_BMS/include/sensors.h"

uint8_t batteryStatus = NORMAL;

void checkVoltage()
{
    if (batteryVoltage > MAX_VOLTAGE) {
        batteryStatus |= OVER_VOLTAGE;
        return;
    }

    if (batteryVoltage < MIN_VOLTAGE) {
        batteryStatus |= UNDER_VOLTAGE;
        return;
    }
}

void checkCurrent()
{
    if(batteryCurrent > MAX_CURRENT)
    {
        batteryStatus |= OVER_CURRENT;
    }
}

void checkTemperature()
{
    if(batteryTemperature > MAX_TEMP)
    {
        batteryStatus |= OVER_TEMPERATURE;
    }
}

void checkProtection()
{
    batteryStatus = NORMAL;
    checkVoltage();
    checkCurrent();
    checkTemperature();
}