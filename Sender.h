#include <stdio.h>
#define SIZE  50
SensorData_tst* Init();

typedef struct{
   int BatteryTemp[SIZE];
   int SensorValue[SIZE];
}SensorData_tst;
