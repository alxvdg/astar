
//global headers
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//local headers
#include "astrMap.h"
#include "errorCode.h"
#include "astrNode.h"

int main()
{
  ErrorCode         errorCode;
  astrMap           map;

  astrNodeStack     stack;
  astrNode          nodes[5];

  //
  // Test map construction and print
  //
  errorCode         = astrMapConstruct(&map, 5, 5);
  printf("errorCode %d\n", errorCode);
  if (errorCode == ERROR_NO_ERROR)
  {
    astrMapPrint(&map);
  }

  //
  // Test stack construction and print
  //
  astrNodeStackConstruct(&stack);

  astrNodeConstruct(&nodes[0],0,0);
  astrNodeConstruct(&nodes[1],1,0);
  astrNodeConstruct(&nodes[2],0,1);
  astrNodeConstruct(&nodes[3],2,0);
  astrNodeConstruct(&nodes[4],0,2);

  astrNodeStackAddNode(&stack, &nodes[0]);
  astrNodeStackAddNode(&stack, &nodes[1]);
  astrNodeStackAddNode(&stack, &nodes[2]);
  astrNodeStackAddNode(&stack, &nodes[3]);
  astrNodeStackAddNode(&stack, &nodes[4]);

  astrNodeStackPrint(&stack);

  return 0;
}
