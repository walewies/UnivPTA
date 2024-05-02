#ifndef MONITORING_SYSTEM_H
#define MONITORING_SYSTEM_H

#include "PressureControl.h"
#include "HumidityControl.h"
#include "TemperatureControl.h"
#include <iostream>
using namespace std;

void monitorAndAdjust(float temperature, float pressure, float humidity);

#endif