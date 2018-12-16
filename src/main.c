
//global headers
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//local headers
#include "astrMap.h"
#include "errorCode.h"

int main()
{
  ErrorCode         errorCode;
  astrMap           map;

  errorCode         = astrMapConstruct(&map, 5, 5);
  printf("errorCode %d\n", errorCode);
  if (errorCode == ERROR_NO_ERROR)
  {
    astrMapPrint(&map);
  }

  
  return 0;
}
