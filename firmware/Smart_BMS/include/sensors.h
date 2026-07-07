#ifndef SENSORS_H
#define SENSORS_H

extern float batteryVoltage;
extern float batteryCurrent;
extern float batteryTemperature;

void readSensors();

float readBatteryVoltage();

float readBatteryCurrent();

float readBatteryTemperature();

#endif