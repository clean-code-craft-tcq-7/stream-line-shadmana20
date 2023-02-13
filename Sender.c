#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "Sender.h"

#define SIZE 50

SensorData_tst* Init();
typedef struct SensorData_tst SensorData_st
struct{
   int BatteryTemp[SIZE];
   int SensorValue[SIZE];
}SensorData_tst;


SensorData_tst * init()
{   static SensorData_st sen[SIZE];
    
    for(int i=0;i<SIZE;i++)
    {
       sen->BatteryTemp[i] = rand()%50;
       sen->SensorValue[i] = rand()%50;
       
    }
    return sen;
}


  
char* passToBuffer()
{
    SensorData_st *Mid;
    char buffer[SIZE][SIZE];
    static char ReturnedBuffer[SIZE];
    Mid = init();
    for(int i=0;i<SIZE;i++)
    {
       //printf(" %d : %d , %d \n",i,*(g->a+i),*(g->b+i));
       sprintf(buffer[i], "%d , %d \n", *(Mid->BatteryTemp+i),*(Mid->SensorValue+i));
       //ReturnedBuffer[i] = buffer[i];
       printf("Temperature , Value") ;
       printf("%s", buffer[i]);
    }
    
    return ReturnedBuffer;
    
}

