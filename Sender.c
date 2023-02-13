#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "Sender.h"

#define BUFFERSIZE 50


SensorData_tst Init()
{
  static SensorData_tst sen[SIZE];
  SensorData_tst SensorData_st
  for(int i=0;i<SIZE;i++)
    {
       SensorData_st->BatteryTemp[i] = rand()%50;
       SensorData_st->SensorValue[i] = rand()%50;
    }
    return sen;
}


  
char* PassToBuffer()
{
    SensorData_tst *mid;
    static returnBuffer[SIZE];
    char buffer[SIZE][SIZE];
    mid = init();
    for(int i=0;i<SIZE;i++)
    {
       sprintf(buffer[i], " %d  ,  %d \n", *(mid->BatteryTemp+i),*(mid->SensorValue+i));
       returnBuffer[i] = buffer[i];
    }
    
  return returnBuffer;
  
}
