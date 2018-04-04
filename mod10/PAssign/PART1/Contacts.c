/*
 * =====================================================================================
 *
 *       Filename:  Contacts.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/03/2018 10:56:22 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bo Christensen (), BowmanChristensen@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Contacts.h"


void CreateContactNode(ContactNode* thisNode, char contactName[], char contactPhoneNum[], ContactNode* nextLoc)
{
    strcpy(thisNode->contactName, contactName);
    strcpy(thisNode->contactPhoneNum, contactPhoneNum);
    thisNode->nextNodePtr = nextLoc;
    return;
}

void InsertContactAfter(ContactNode* thisNode, ContactNode* newNode)
{
    ContactNode* tmpNext = NULL;

    tmpNext = thisNode->nextNodePtr;
    thisNode->nextNodePtr = newNode;
    newNode->nextNodePtr = tmpNext;
    return;
}

void PrintContactNode(ContactNode* thisNode)
{
    printf("Name: %s\n", thisNode-> contactName);
    printf("Phone number: %s\n", thisNode-> contactPhoneNum);
    return;
}

ContactNode* GetNextContact(ContactNode* thisNode)
{
    return thisNode->nextNodePtr;
}
