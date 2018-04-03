/*
 * =====================================================================================
 *
 *       Filename:  IntLink.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/29/2018 09:59:29 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bo Christensen (), BowmanChristensen@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#ifndef  INTLINK__INC__
#define  INTLINK_INC__

// constantns
typedef struct IntNode_struct 
{
    int dataVal;
    struct IntNode_struct* nextNodePtr;
} IntNode;

// Prototypes
void IntNode_Create (IntNode* thisNode, int dataInit, IntNode* nextLoc);
void IntNode_InsertAfter(IntNode* thisNode, IntNode* newNode);
void IntNode_PrintNodeData(IntNode* thisNode);
IntNode* IntNode_GetNext(IntNode* thisNode); 


#endif /* ----- #ifndef INTLINK__INC__ ----- */

