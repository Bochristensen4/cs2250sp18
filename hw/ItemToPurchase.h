/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.h
 *
 *    Description:  item info
 *
 *        Version:  1.0
 *        Created:  03/27/2018 08:56:05 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bo Christensen (), BowmanChristensen@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#ifndef  ITEMTOPURCHASE_INC_
#define  ITEMTOPURCHASE_INC_


//#define ITEM_NAME_LEN 50
#define ITEM_LEN 500

typedef struct ItemToPurchase_s
{
    char itemName[50];
    char itemDescription[500];
    int itemPrice;
    int itemQuantity;
}ItemToPurchase;

void MakeItemBlank(ItemToPurchase* item);
void PrintItemCost(ItemToPurchase item);
void PrintItemDescription(ItemToPurchase item);

#endif /* ----- #ifndef ITEMTOPURCHASE__INC__ ----- */

