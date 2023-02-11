#include <stdio.h>
#define BUFFERSIZE  50
SensorData_tst* Init();


typedef struct {
  int BatteryTemp[BUFFERSIZE];
  int SensorValue[BUFFERSIZE];
}SensorData_tst;
