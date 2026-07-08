#include <Arduino.h>

#include "/Users/ahmedmajid/Downloads/Smart BMS Project/firmware/Smart_BMS/include/display.h"
#include "/Users/ahmedmajid/Downloads/Smart BMS Project/firmware/Smart_BMS/include/sensors.h"
#include "/Users/ahmedmajid/Downloads/Smart BMS Project/firmware/Smart_BMS/include/soc.h"
#include "/Users/ahmedmajid/Downloads/Smart BMS Project/firmware/Smart_BMS/include/protection.h"

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
}

void displayStatus()
{
    Serial.print("Status      : ");

    if (batteryStatus == NORMAL)
    {
        Serial.println("NORMAL");
    }
    else
    {
        bool first = true;

        if (batteryStatus & OVER_VOLTAGE)
        {
            Serial.print("OVER VOLTAGE");
            first = false;
        }

        if (batteryStatus & UNDER_VOLTAGE)
        {
            if (!first)
            {
                Serial.print(", ");
            }
            Serial.print("UNDER VOLTAGE");
            first = false;
        }

        if (batteryStatus & OVER_CURRENT)
        {
            if (!first)
            {
                Serial.print(", ");
            }
            Serial.print("OVER CURRENT");
            first = false;
        }

        if (batteryStatus & OVER_TEMPERATURE)
        {
            if (!first)
            {
                Serial.print(", ");
            }
            Serial.print("OVER TEMPERATURE");
        }

        Serial.println();
    }

    Serial.println("==============================");
    Serial.println();
}