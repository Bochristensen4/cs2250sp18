/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.c
 *
 *    Description:  Shopping cart functions
 *
 *        Version:  1.0
 *        Created:  03/27/2018 09:16:20 AM
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
#include "ShoppingCart.h"
#include "ItemToPurchase.h"
// Constants

// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  AddItem
 *  Description:  Add an ItemTopurchase from Shopping Cart and updates item cart num
 * =====================================================================================
 */
ShoppingCart AddItem(ItemToPurchase item, ShoppingCart cart)
{
    strcpy(cart.cartItems[cart.cartSize].itemName, item.itemName);
    strcpy(cart.cartItems[cart.cartSize].itemDescription, item.itemDescription);

    cart.cartItems[cart.cartSize].itemPrice = item.itemPrice;
    cart.cartItems[cart.cartSize].itemQuantity = item.itemQuantity;

    cart.cartSize++;
    return cart;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  RemoveItem
 *  Description:  Remove an ItemTopurchase based on name from Shopping Cart
 *  increment: cart size
 * =====================================================================================
 */
ShoppingCart RemoveItem(char name[], ShoppingCart cart)
{
    //strcmp to find the item vs cart.cartItem[Index].name
    for (int i = 0; i < cart.cartSize; i++)
    {
        if  (strcmp(cart.cartItems[i].itemName, name) == 0)//if you find it, adjust your indeces
        {
            cart.cartItems[i] = cart.cartItems[i + 1];
            cart.cartSize--;
            return cart;
        }
    }
    printf("Item not found in cart. Nothing removed.\n");
    //else: print no item

    return cart;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ModifyItem
 *  Description:  changes QTY
 * =====================================================================================
 */

ShoppingCart ModifyItem(ItemToPurchase item, ShoppingCart cart)
{
    for (int i = 0; i < cart.cartSize; i++)
    {
        if(strcmp(cart.cartItems[i].itemName, item.itemName) == 0)
        {
            cart.cartItems[i].itemQuantity = item.itemQuantity;
        }
    }
    return cart;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetNumItemsInCart
 *  Description:  outputs number of items in cart
 * =====================================================================================
 */
int GetNumItemsInCart(ShoppingCart cart)
{
    int totalItems = 0;
    for (int i = 0; i < cart.cartSize; i++)
    {
        totalItems += cart.cartItems[i].itemQuantity;

    }

    return totalItems;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetCostofCart
 *  Description:  outputs cost of cart
 * =====================================================================================
 */
int GetCostOfCart(ShoppingCart cart)
{
    int cartsum = 0;
    for(int i = 0; i < cart.cartSize; i++)
    {
        cartsum += cart.cartItems[i].itemPrice * cart.cartItems[i].itemQuantity;
    }
    return cartsum; // returning sum to print total
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintTotal
 *  Description:  prints total
 * =====================================================================================
 */
void PrintTotal(ShoppingCart cart)
{
    printf("%s's Shopping Cart - %s\n", cart.customerName, cart.currentDate);
    printf("Number of Items: %d\n\n", GetNumItemsInCart(cart));
   if (cart.cartSize) 
   {
       for (int i = 0; i < cart.cartSize; i++)
       {
           PrintItemCost(cart.cartItems[i]);
       }
    }
       else
       {
           printf("SHOPPING CART IS EMPTY\n");
       }
   
   printf("\n");
   printf("Total: $%d\n", GetCostOfCart(cart));

    return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintDescriptions
 *  Description: Prints Desc 
 * =====================================================================================
 */
void PrintDescriptions(ShoppingCart cart)
{
    printf("%s's Shopping Cart - %s\n\n", cart.customerName, cart.currentDate);
    printf("Item Descriptions\n");

    for (int i = 0; i < cart.cartSize; i++)
    {
        PrintItemDescription(cart.cartItems[i]);
    }
    return;
}


