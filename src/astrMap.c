
// Global headers
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// Local headers
#include "errorCode.h"
#include "astrMap.h"


//--------------------------------//
// PRIVATE FUNCTIONS              //
//--------------------------------//

static void astrMapPrintCell(astrMapCell *pCell)
{

}

//--------------------------------//
// PUBLIC FUNCTIONS               //
//--------------------------------//

ErrorCode astrMapConstruct(astrMap *pMap, size_t xSize, size_t ySize)
{
  ErrorCode       errorCode;

  if (pMap != NULL)
  {
    if ((xSize <= ASTR_MAP_MAX_SIZE) && (ySize <= ASTR_MAP_MAX_SIZE))
    {
      pMap->sizeX     = xSize;
      pMap->sizeY     = ySize;
      errorCode       = ERROR_NO_ERROR;
    }
    else
    {
      errorCode       = ERROR_INVALID_PARAMETER;
    }
  }
  else
  {
    errorCode         = ERROR_NULL_POINTER;
  }

  return errorCode;
}

void astrMapPrint(astrMap *pMap)
{

  for (size_t i = 0; i < pMap->sizeY; i++)
  {
    //
    // print top/bottom line
    //
    for (size_t j = 0; j < pMap->sizeX; j++)
    {
      printf("----");
    }
    printf("\n");

    //
    // print case
    //
    for (size_t j = 0; j < pMap->sizeX; j++)
    {
      printf("|");
      if (pMap->cell[j][i].state == ASTR_MAP_CELL_WALL)
      {
        printf(" O ");
      }
      else
      {
        printf("   ");
      }

      //
      // print last column
      //
      if (j == pMap->sizeY - 1)
     {
        printf("|");
      }
    }
    printf("\n");

    //
    // print last bottom line
    //
    if (i == pMap->sizeY - 1)
    {
      for (size_t j = 0; j < pMap->sizeX; j++)
      {
        printf("----");
      }
      printf("\n");
    }
  }

}

void astrMapCellValid(astrMapCell *pCell)
{



}
