#ifndef RECSTRINGMANIPULATION_H
#define RECSTRINGMANIPULATION_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct
{
  float Temperature;
  float SOC;
}ReceivedParams_t;

void GetConsoleStringAndStore(void);
const ReceivedParams_t* GetReceievedDatasets(void);


#endif
