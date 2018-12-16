#ifndef ASTR_TOOLS_H
#define ASTR_TOOLS_H

//local headers
#include "errorCode.h"
#include "astrMap.h"

//--------------------------------//
// CONSTANT DEFINITIONS           //
//--------------------------------//



//--------------------------------//
// ENUMERATION DEFINITIONS        //
//--------------------------------//



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


#endif // ASTR_TOOLS_H
