#include "sensors.h"

float batteryVoltage = 0;

float batteryCurrent = 0;

float batteryTemperature = 0;

float readBatteryVoltage()
{
    return 3.95;
}

float readBatteryCurrent()
{
    return 1.20;
}

float readBatteryTemperature()
{
    return 28.5;
}

void readSensors()
{
    batteryVoltage = readBatteryVoltage();

    batteryCurrent = readBatteryCurrent();

    batteryTemperature = readBatteryTemperature();
}