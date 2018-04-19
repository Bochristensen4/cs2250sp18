/*
 * =====================================================================================
 *
 *       Filename:  Contacts.h
 *
 *    Description:  :
 *
 *        Version:  1.0
 *        Created:  04/03/2018 10:56:06 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bo Christensen (), BowmanChristensen@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#ifndef  CONTACTS_INC__
#define  CONTACTS_INC__

static const int CONTACT_INFO_LEN = 50;
typedef struct ContactNode_struct
{
    char contactName[50];
    char contactPhoneNum[50];
    struct ContactNode_struct* nextNodePtr;
} ContactNode;

// Program Functions
void CreateContactNode(ContactNode* thisNode, char contactName[], char contactPhoneNum[], ContactNode* nextLoc);
void InsertContactAfter(ContactNode* thisNode, ContactNode* newNode);
void PrintContactNode(ContactNode* thisNode);
ContactNode* GetNextContact(ContactNode* thisNode);

#endif /* ----- #ifndef CONTACTS__INC__ ----- */

