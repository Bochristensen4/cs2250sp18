
















//main function
#include <stdio.h>
#include <stdlib.h>

#include "IntLink.h"

// to autoindent the entire file, sit in the first line then type: =G
int main(void) 
{
    // BookKeeping purposes
    IntNode* headObj  = NULL; // Create intNode objects
    IntNode* currObj  = NULL;
    // Actual Nodes
    IntNode* nodeObj1 = NULL;
    IntNode* nodeObj2 = NULL;
    IntNode* nodeObj3 = NULL;

    // Front of nodes list
    headObj = (IntNode*)malloc(sizeof(IntNode));
    IntNode_Create(headObj, -1, NULL);

    // Insert nodes
    nodeObj1 = (IntNode*)malloc(sizeof(IntNode));
    IntNode_Create(nodeObj1, 555, NULL);
    IntNode_InsertAfter(headObj, nodeObj1);

    nodeObj2 = (IntNode*)malloc(sizeof(IntNode));
    IntNode_Create(nodeObj2, 999, NULL);
    IntNode_InsertAfter(nodeObj1, nodeObj2);

    nodeObj3 = (IntNode*)malloc(sizeof(IntNode));
    IntNode_Create(nodeObj3, 777, NULL);
    IntNode_InsertAfter(nodeObj1, nodeObj3);

    // Print linked list
    currObj = headObj;
    while (currObj != NULL) 
    {
        IntNode_PrintNodeData(currObj);
        currObj = IntNode_GetNext(currObj);
    }
// Clean your mess
    free(headObj);
    free(headObj1);
    free(headObj2);
    free(headObj3);

    return 0;
                                                                                                                                           }
