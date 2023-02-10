#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "Sender.h"

#define BUFFERSIZE 50

SensorData_tst SensorData_st;


int DataGenerator()
{
  r = rand()%50;
  return r;
}

static void intializeBuffer()
{
  for(int i=1;i<=BUFFERSIZE;i++){
  SensorData_st.BatteryTemp[i] = DataGenerator();
  SensorData_st.SensorValue[i] = DataGenerator();
  }
  
}
