#ifndef ASTR_CART_H
#define ASTR_CART_H

//local headers
#include "errorCode.h"

//--------------------------------//
// CONSTANT DEFINITIONS           //
//--------------------------------//

#define ASTR_MAP_MAX_SIZE    (100)

//--------------------------------//
// ENUMERATION DEFINITIONS        //
//--------------------------------//

typedef enum _astrMapCellState
{
  ASTR_MAP_CELL_VALID = 0,
  ASTR_MAP_CELL_WALL,
  
} astrMapCellState;

//--------------------------------//
// STRUCTURES DEFINITIONS         //
//--------------------------------//

typedef struct _astrMapCell{
  int32_t           x;
  int32_t           y;
  astrMapCellState  state;
} astrMapCell;

typedef struct _astrCart{
  astrMapCell       cell[ASTR_MAP_MAX_SIZE][ASTR_MAP_MAX_SIZE];
  size_t            sizeX;
  size_t            sizeY;
} astrMap;

//--------------------------------//
// PUBLIC FUNCTIONS               //
//--------------------------------//

ErrorCode astrMapConstruct(astrMap *pMap, size_t xSize, size_t ySize);

void astrMapPrint(astrMap *pMap);

void astrMapCellValid(astrMapCell *pCell);


#endif // ASTR_MAP_H
