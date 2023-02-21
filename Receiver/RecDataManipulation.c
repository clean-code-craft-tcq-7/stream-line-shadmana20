#include "RecDataManipulation.h"

static ReceivedParams_t Maximum ={.Temperature = -233, .SOC = 0}; 
static ReceivedParams_t Minimum = {.Temperature = -233, .SOC = 0};
static const int MaximumDataPoints = 50U;

void GetMovingAverage(unsigned int Counts)
{
  if(Counts > MaximumDataPoints)
  {
    printf("Exceeding requested Buffer size, Maximum Size = 50 \n");
  }
  else
  {
    const ReceivedParams_t* ReceivedParams = GetReceievedDatasets();
    for(unsigned char Index = 0; Index < Counts; ++Index)
    {
      printf("%f %f \n",ReceivedParams[Index].Temperature, ReceivedParams[Index].SOC);
      if(Maximum.Temperature < ReceivedParams[Index].Temperature)
        Maximum.Temperature = ReceivedParams[Index].Temperature;
        
      if(Minimum.Temperature > ReceivedParams[Index].Temperature)
        Minimum.Temperature = ReceivedParams[Index].Temperature;
        
      if(Maximum.SOC < ReceivedParams[Index].SOC)
        Maximum.SOC = ReceivedParams[Index].SOC;
        
      if(Minimum.SOC > ReceivedParams[Index].SOC)
        Minimum.SOC = ReceivedParams[Index].SOC;
    }
  }
}
