#include "display.h"
#include "protection.h"

void displayStatus()
{
    switch(batteryStatus)
    {
        case NORMAL:

            Serial.println("Status : NORMAL");
            break;

        case OVER_VOLTAGE:

            Serial.println("Status : OVER VOLTAGE");
            break;

        case UNDER_VOLTAGE:

            Serial.println("Status : UNDER VOLTAGE");
            break;

        case OVER_CURRENT:

            Serial.println("Status : OVER CURRENT");
            break;

        case OVER_TEMPERATURE:

            Serial.println("Status : OVER TEMPERATURE");
            break;
    }
}

void displayBatteryData()
{
    Serial.println("==============================");

    Serial.print("Voltage     : ");
    Serial.print(batteryVoltage);
    Serial.println(" V");

    Serial.print("Current     : ");
    Serial.print(batteryCurrent);
    Serial.println(" A");

    Serial.print("Temperature : ");
    Serial.print(batteryTemperature);
    Serial.println(" C");

    Serial.print("SOC         : ");
    Serial.print(batterySOC);
    Serial.println(" %");

    Serial.print("Status      : ");
    Serial.println(batteryStatus);

    Serial.println("==============================");
}