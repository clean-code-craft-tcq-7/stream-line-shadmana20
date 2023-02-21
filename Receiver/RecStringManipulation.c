#include "RecStringManipulation.h"

static void ExtractNumberFromSting(char* InputBuffer,float* Temperatur,float* StateOfCharge);
const unsigned char MaximumDataPoints = 50U;

static ReceivedParams_t ReceivedParams[MaximumDataPoints];
static ReceivedParams_t* const ReceivedParamsPointer = ReceivedParams;

void GetConsoleStringAndStore(void)
{
  char TempChar[100];
  for(unsigned char Index= 0; Index < MaximumDataPoints; ++Index)
  { 
    fgets(TempChar,100,stdin);
    ExtractNumberFromSting(TempChar, &ReceivedParams[Index].Temperature , &ReceivedParams[Index].SOC);
  }
}

static void ExtractNumberFromSting(char* InputBuffer,float* Temperatur,float* StateOfCharge)
{
  printf("%s",InputBuffer);
  char *PoToTemp = NULL;
  float tempvalue = 0xffffffff;
  PoToTemp = strstr(InputBuffer,"- ");
  printf("%s \n",PoToTemp);
  tempvalue = atof(PoToTemp);
  printf("%f \n",tempvalue);
  *Temperatur = tempvalue;
  for(unsigned char Index = 0 ; InputBuffer[Index] != '\0'; Index++)
  {
    if(InputBuffer[Index] == 'S' && InputBuffer[Index+1] == 'o')
    {
      char* SecondBufferStartAddress = InputBuffer + Index; 
      *StateOfCharge = atof(SecondBufferStartAddress);
    }
  }
}

const ReceivedParams_t* GetReceievedDatasets(void)
{
  return ReceivedParamsPointer;
}
