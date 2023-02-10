#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "Sender.h"


int DataGenerator(int size)
{
  int gen;
  for(int i=1;i<=size;i++)
  {
    gen = rand()%50;
  }
  return gen;
}
