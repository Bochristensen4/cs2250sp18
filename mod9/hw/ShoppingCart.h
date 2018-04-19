/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.h
 *
 *    Description:  functions to manage ItemToPurchase
 *
 *        Version:  1.0
 *        Created:  03/27/2018 09:05:57 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bo Christensen (), BowmanChristensen@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#ifndef  SHOPPINGCART_INC_
#define  SHOPPINGCART_INC_

#include "ItemToPurchase.h"

#define CART_LEN 50


typedef struct ShoppingCart_s
{
    char customerName[CART_LEN];
    char currentDate[CART_LEN];
    ItemToPurchase cartItems[10];
    int cartSize;

}ShoppingCart;


ShoppingCart AddItem(ItemToPurchase item, ShoppingCart cart);// adds item to cart
ShoppingCart RemoveItem(char name[], ShoppingCart cart); // removes item from cart
ShoppingCart ModifyItem(ItemToPurchase item, ShoppingCart cart); // modify quanity

int GetNumItemsInCart(ShoppingCart cart);// return number of items in cart
void PrintTotal(ShoppingCart cart); // outputs total cost
void PrintDescriptions(ShoppingCart cart); // outputs all descriptions
int GetCostOfCart(ShoppingCart cart);

#endif /* ----- #ifndef SHOPPINGCART__INC__ ----- */

