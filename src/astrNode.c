
// Global headers
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// Local headers
#include "errorCode.h"
#include "astrNode.h"


//--------------------------------//
// PRIVATE FUNCTIONS              //
//--------------------------------//



//--------------------------------//
// PUBLIC FUNCTIONS               //
//--------------------------------//

void astrNodeStackConstruct(astrNodeStack *pStack)
{
  pStack->first       = NULL;
  pStack->size        = 0;
}

ErrorCode astrNodeStackAddNode(astrNodeStack *pStack, astrNode *pNode)
{
  ErrorCode           errorCode;

  if ((pStack != NULL) && (pNode != NULL))
  {
    pNode->next       = pStack->first;
    pStack->first     = pNode;
    pStack->size      = pStack->size + 1;
  }
  else
  {
    errorCode         = ERROR_INVALID_PARAMETER;
  }

  return errorCode;
}

ErrorCode astrNodeStackDelNode(astrNodeStack *pStack, astrNode *pNode)
{
  ErrorCode           errorCode;

  if ( (pStack->first != NULL) && (pNode != NULL))
  {
    pNode             = pStack->first;
    pStack->first     = pNode->next;
    pStack->size      = pStack->size - 1;
  }
  else
  {
    errorCode         = ERROR_INVALID_PARAMETER;
  }

  return errorCode;
}

int32_t astrNodeStackNodeExist(astrNodeStack *pStack, astrNode *pNode)
{
  ErrorCode            errorCode;
  int32_t              result;
  astrNode            *pCurrentNode;

  result              = 0;

  if (pStack->first != NULL)
  {
    pCurrentNode      = pStack->first;
    while (pCurrentNode != NULL)
    {
      if (astrNodeCompare(pCurrentNode, pNode))
      {
        return 1;
      }
      pCurrentNode     = pCurrentNode->next;
    }
  }
  else
  {
    errorCode         = ERROR_INVALID_PARAMETER;
  }

  return result;
}

void astrNodeStackPrint(astrNodeStack *pStack)
{
  astrNode            *pCurrentNode;
  size_t               i;

  i                   = 0;

  if (pStack !=NULL)
  {
    pCurrentNode      = pStack->first;
    while (pCurrentNode != NULL)
    {
      printf("node[%d]:\t x:\t %d\t y:\t %d\t cost:\t %d\t heuristic:\t %lf\n ",i,pCurrentNode->x, pCurrentNode->y, pCurrentNode->cost, pCurrentNode->heuristic);
      pCurrentNode    = pCurrentNode->next;
      i++;
    }
  }
  else
  {

  }
}

void astrNodeStackDestroy(astrNodeStack *pStack)
{

}

ErrorCode astrNodeConstruct(astrNode *pNode, int32_t x, int32_t y)
{
  ErrorCode           errorCode;

  if (pNode != NULL)
  {
    pNode->x          = x;
    pNode->y          = y;
  }
  else
  {
    errorCode         = ERROR_INVALID_PARAMETER;
  }

  return errorCode;
}

void astrNodeSetCost(astrNode *pNode, int32_t cost)
{

}

void astrNodeSetHeuristic(astrNode *pHeuristic, double heuristic)
{

}

int32_t astrNodeCompare(astrNode *pNode1, astrNode *pNode2)
{
  if ((pNode1->x == pNode2->x) && (pNode1->y == pNode2->y))
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

void astrNodeCalcHeuristic(astrNode *pNodeStart, astrNode *pNodeEnd)
{

}

double astrNodeCalcEucli(astrNode *pNodeStart, astrNode *pNodeEnd)
{

}

double astrNodeCalcHamilt(astrNode *pNodeStart, astrNode *pNodeEnd)
{

}

