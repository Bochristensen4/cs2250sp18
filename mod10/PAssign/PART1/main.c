/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/03/2018 10:55:24 AM
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

// Constants
const int NUM_OF_PEOPLE = 3;
//ContactNode contact[3]; // creating an array for contact list
char contactName[50];
char contactPhoneNum[50];

// Main Function
int main()
{
    // for book keeping
   ContactNode* headObj = NULL;
   ContactNode* currObj = NULL;
   
   // Actual nodes
   ContactNode* nodeObj1 = NULL;
   ContactNode* nodeObj2 = NULL;

// CreateContactNode(headObj, -1, NULL);

    // prompting for 1st contact info
    printf("Person 1\n");
    printf("Enter name:\n");
    fgets(contactName, CONTACT_INFO_LEN, stdin);
    contactName[strlen(contactName)-1] = '\0';// flushing spaces
    printf("Enter phone number:\n");
    fgets(contactPhoneNum, CONTACT_INFO_LEN, stdin);
    contactPhoneNum[strlen(contactPhoneNum)-1] = '\0';// flushing spaces
    printf("You entered: %s, %s\n\n", contactName, contactPhoneNum);

    headObj = (ContactNode*)malloc(sizeof(ContactNode));
    CreateContactNode(headObj, contactName, contactPhoneNum, NULL);


    // prompting for 2nd contact info
    printf("Person 2\n");
    printf("Enter name:\n");
    fgets(contactName, CONTACT_INFO_LEN, stdin);
    contactName[strlen(contactName)-1] = '\0';// flushing spaces
    printf("Enter phone number:\n");
    fgets(contactPhoneNum, CONTACT_INFO_LEN, stdin);
    contactPhoneNum[strlen(contactPhoneNum)-1] = '\0';// flushing spaces
    printf("You entered: %s, %s\n\n", contactName, contactPhoneNum);

    nodeObj1 = (ContactNode*)malloc(sizeof(ContactNode));
    CreateContactNode(nodeObj1, contactName, contactPhoneNum, NULL);
    InsertContactAfter(headObj, nodeObj1);
    

    // prompting for 3nd contact info
    printf("Person 3\n");
    printf("Enter name:\n");
    fgets(contactName, CONTACT_INFO_LEN, stdin);
    contactName[strlen(contactName)-1] = '\0';// flushing spaces
    printf("Enter phone number:\n");
    fgets(contactPhoneNum, CONTACT_INFO_LEN, stdin);
    contactPhoneNum[strlen(contactPhoneNum)-1] = '\0';// flushing spaces
    printf("You entered: %s, %s\n\n", contactName, contactPhoneNum);

    nodeObj2 = (ContactNode*)malloc(sizeof(ContactNode));
    CreateContactNode(nodeObj2, contactName, contactPhoneNum, NULL);
    InsertContactAfter(nodeObj1, nodeObj2);

    // print linked list
    currObj = headObj;
    while(currObj != NULL)
    {
        PrintContactNode(currObj);
        currObj = GetNextContact(currObj);
    }

    //deep cleaning
    free(headObj);
    free(nodeObj1);
    free(nodeObj2);

    return 0;
}


