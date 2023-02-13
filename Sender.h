#include <stdio.h>
#define BUFFERSIZE  50
SensorData_tst* Init();


typedef struct {
  int* BatteryTemp;
  int* SensorValue;
}SensorData_tst;


/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

typedef struct{
   int a[SIZE];
   int b[SIZE];
    
}SEN;


SEN * init()
{   static SEN sen[SIZE];
    
    for(int i=0;i<SIZE;i++)
    {
       sen->a[i] = rand()%50;
       sen->b[i] = rand()%50;
       
    }
    return sen;
}

char* passToBuffer()
{
    SEN *g;
    char buffer[SIZE][SIZE];
    static bff[SIZE];
    g = init();
    for(int i=0;i<SIZE;i++)
    {
       //printf(" %d : %d , %d \n",i,*(g->a+i),*(g->b+i));
       sprintf(buffer[i], "< %d > , < %d > \n", *(g->a+i),*(g->b+i));
       bff[i] = buffer[i];
    }
    
    return bff;
    
}

int main()
{
    char * run;
    run = passToBuffer();
    
     for(int i=0;i<SIZE;i++)
    {
       //printf("%d  %d\n",run[i]);
      
    }
    
    printf("%d,%d",run[1]);
    
    return 0;
}
