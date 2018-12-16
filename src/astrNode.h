#ifndef ASTR_TOOLS_H
#define ASTR_TOOLS_H

//local headers
#include "errorCode.h"
#include "astrMap.h"

//--------------------------------//
// CONSTANT DEFINITIONS           //
//--------------------------------//

#define     ASTR_NODE_STACK_MAX_SIZE      (ASTR_MAP_MAX_SIZE)

//--------------------------------//
// ENUMERATION DEFINITIONS        //
//--------------------------------//



//--------------------------------//
// STRUCTURES DEFINITIONS         //
//--------------------------------//

typedef struct _astrNode astrNode; 
struct _astrNode{
  int32_t            x;
  int32_t            y;
  int32_t            cost;
  double             heuristic;
  astrNode          *next;
};

typedef struct _astrNodeStack
{
  astrNode          *first;
  size_t             size;
} astrNodeStack;

//--------------------------------//
// PUBLIC FUNCTIONS               //
//--------------------------------//

void astrNodeStackConstruct(astrNodeStack *pStack);

ErrorCode astrNodeStackAddNode(astrNodeStack *pStack, astrNode *pNode);

ErrorCode astrNodeStackDelNode(astrNodeStack *pStack, astrNode *pNode);

int32_t astrNodeStackNodeExist(astrNodeStack *pStack, astrNode *pNode);

void astrNodeStackPrint(astrNodeStack *pStack);

void astrNodeStackDestroy(astrNodeStack *pStack);

ErrorCode astrNodeConstruct(astrNode *pNode, int32_t x, int32_t y);

void astrNodeSetCost(astrNode *pNode, int32_t cost);

void astrNodeSetHeuristic(astrNode *pHeuristic, double heuristic);

int32_t astrNodeCompare(astrNode *pNode1, astrNode *pNode2);

void astrNodeCalcHeuristic(astrNode *pNodeStart, astrNode *pNodeEnd);

double astrNodeCalcEucli(astrNode *pNodeStart, astrNode *pNodeEnd);

double astrNodeCalcHamilt(astrNode *pNodeStart, astrNode *pNodeEnd);

#endif // ASTR_TOOLS_H
