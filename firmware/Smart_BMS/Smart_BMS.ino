#include <Arduino.h>
#include "/Users/ahmedmajid/Downloads/Smart BMS Project/firmware/Smart_BMS/include/config.h"
#include "/Users/ahmedmajid/Downloads/Smart BMS Project/firmware/Smart_BMS/include/sensors.h"
#include "/Users/ahmedmajid/Downloads/Smart BMS Project/firmware/Smart_BMS/include/soc.h"
#include "/Users/ahmedmajid/Downloads/Smart BMS Project/firmware/Smart_BMS/include/protection.h"
#include "/Users/ahmedmajid/Downloads/Smart BMS Project/firmware/Smart_BMS/include/display.h"

void setup()
{
    Serial.begin(115200);
    Serial.println("====================================");
    Serial.println("     SMART BATTERY MANAGEMENT");
    Serial.println("====================================");
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