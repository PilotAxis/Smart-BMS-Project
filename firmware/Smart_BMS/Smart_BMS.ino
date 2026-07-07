#include "config.h"
#include "sensors.h"
#include "soc.h"
#include "protection.h"
#include "display.h"

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    readSensors();

    batterySOC = calculateSOC(batteryVoltage);

    checkProtection();

    displayBatteryData();

    displayStatus();

    delay(1000);
}