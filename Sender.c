#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "Sender.h"

#define BUFFERSIZE 50


int* DataGenerator()
{
  static int r[BUFFERSIZE];
  for(int i=1;i<=BUFFERSIZE;i++)
  {
    r[i] = rand()%50;
    
  }
  return r;
}
