#include "soc.h"

float batterySOC = 0;

float calculateSOC(float voltage)
{
    if (voltage >= 4.20)
        return 100;

    if (voltage >= 4.10)
        return 90;

    if (voltage >= 4.00)
        return 80;

    if (voltage >= 3.90)
        return 70;

    if (voltage >= 3.80)
        return 60;

    if (voltage >= 3.70)
        return 50;

    if (voltage >= 3.60)
        return 40;

    if (voltage >= 3.50)
        return 30;

    if (voltage >= 3.40)
        return 20;

    if (voltage >= 3.30)
        return 10;

    return 0;
}