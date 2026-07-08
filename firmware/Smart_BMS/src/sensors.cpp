#include "/Users/ahmedmajid/Downloads/Smart BMS Project/firmware/Smart_BMS/include/sensors.h"
#include <Arduino.h>

float batteryVoltage = 0.0;

float batteryCurrent = 0.0;

float batteryTemperature = 0.0;

float readBatteryVoltage()
{
    return 4.05;
}

float readBatteryCurrent()
{
    return 7.20;
}

float readBatteryTemperature()
{
    return 48.5;
}

void readSensors()
{
    batteryVoltage = readBatteryVoltage();

    batteryCurrent = readBatteryCurrent();

    batteryTemperature = readBatteryTemperature();
}