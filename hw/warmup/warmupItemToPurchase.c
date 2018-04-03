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
    return;
}
