/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/27/2018 09:02:55 PM
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
#include "ItemToPurchase.h"



// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  MakeItemBlank
 *  Description:  Set's item's name = "none", items price = 0,
 *  item quantity = 0.
 * =====================================================================================
 */
void MakeItemBlank(ItemToPurchase* item)
{
   strcpy((*item).itemName,"none");
    (*item).itemPrice = 0;
    (*item).itemQuantity = 0;
    strcpy(item->itemDescription,"none");
    return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintItemCost
 *  Description:  Display Item cost
 * =====================================================================================
 */
void PrintItemCost(ItemToPurchase item)
{
int subCost = 0;
subCost = (item.itemPrice * item.itemQuantity);
printf("%s %d @ $%d = $%d\n", item.itemName, item.itemQuantity, item.itemPrice, subCost);
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintItemDescription
 *  Description:  display Item desc
 * =====================================================================================
 */
void PrintItemDescription(ItemToPurchase item)
{
    printf("%s: %s", item.itemName, item.itemDescription);
    return;
}
