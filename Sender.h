#include <stdio.h>
#define BUFFERSIZE  50
int* DataGenerater();


typedef struct {
  int BatteryTemp[BUFFERSIZE];
  int SensorValue[BUFFERSIZE];
}SensorData_tst;
