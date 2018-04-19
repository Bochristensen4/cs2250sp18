/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  main function
 *
 *        Version:  1.0
 *        Created:  03/27/2018 09:02:18 PM
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
#include <ctype.h>
#include "ItemToPurchase.h"
#include "ShoppingCart.h"


char PrintMenu(ShoppingCart* cart, ItemToPurchase* item);

// Main Function
int main()
{
    ShoppingCart cart;
    ItemToPurchase item;
    char fn[30];
    char ln[30];
    // asking and capturing customers info
    // getting name
    printf("Enter Customer's Name:\n");
    scanf("%s %s", fn, ln);
    strcat(fn, " ");
    strcat(fn, ln);
    strcpy(cart.customerName, fn);

    fflush(stdin);

    //getting date
    char month[20];
    char day[3];
    char year[5];
    printf("Enter Today's Date:\n");
    scanf("%s %s %s", month, day, year);
    strcat(month," ");
    strcat(month, day);
    strcat(month," ");
    strcat(month, year);
    strcpy(cart.currentDate, month);
    
    fflush(stdin);

    // Outputting name
    printf("\nCustomer Name: %s\n", cart.customerName);
    // Outputting Date
    printf("Today's Date: %s\n", cart.currentDate);
    
char op = 'z';

    do
    {
        op = PrintMenu(&cart, &item);
    } while (op != 'q');
    

    return 0;
}

char PrintMenu(ShoppingCart* cart, ItemToPurchase* item)
{
    char menuOp;
    char s1[15];
    char s2[15];
    char r1[15];
    char r2[15];
    char c1[15];
    char c2[15];
    printf("\nMENU\n");
    printf("a - Add item to cart\n");
    printf("r - Remove item from cart\n");
    printf("c - Change item quantity\n");
    printf("i - Output items' descriptions\n");
    printf("o - Output shopping cart\n");
    printf("q - Quit\n\n");
    printf("Choose an option:\n");

    scanf(" %c", &menuOp);

    //getchar();
    fflush(stdin);
    
    while(menuOp != 'a' && menuOp != 'r' && menuOp != 'c' && menuOp != 'i' && menuOp != 'o' && menuOp != 'q')
    {
        printf("Choose an option:\n");
        scanf(" %c", &menuOp);
    }

   if(menuOp == 'a')
    {
        printf("ADD ITEM TO CART\n");
// Obtaining User's input to add item to cart
        printf("Enter the item name:\n");
//        fgets(item->itemName, ITEM_NAME_LEN, stdin);
        scanf("%s %s", s1, s2);
        strcat(s1, " ");
        strcat(s1, s2);
        strcpy(item->itemName,s1);

        fflush(stdin);

char desc[ITEM_LEN];

    getchar();

        printf("Enter the item description:\n");
        fgets(desc, ITEM_LEN, stdin);
        strcpy(item->itemDescription, desc);

        printf("Enter the item price:\n");
        scanf("%d", &item->itemPrice);
        printf("Enter the item quantity:\n");
        scanf("%d", &item->itemQuantity);

        getchar();

       // printf("\n");
        *cart = AddItem(*item, *cart);
         
    }
    else if (menuOp == 'r')
    {
        printf("REMOVE ITEM FROM CART\n");
        printf("Enter name of item to remove:\n");
        scanf("%s %s", r1, r2);
        strcat(r1, " ");
        strcat(r1, r2);
        // printf("\n\nr1 = [%s]\n\n", r1); test to see if item is captured corretly
        strcpy(item->itemName,r1);
        //fflush(stdin);
        getchar();
       *cart = RemoveItem(item->itemName, *cart);
    //
    }

    else if (menuOp == 'c')
    {
        printf("CHANGE ITEM QUANTITY\n");
        printf("Enter the item name:\n");
        scanf("%s %s", c1, c2);
        strcat(c1, " ");
        strcat(c1, c2);
        strcpy(item->itemName,c1);
       // printf("\n\nc1 = [%s]\n\n", c1);// test to see if item is captured corretly
        printf("Enter the new quantity:\n");
        scanf("%d", &item->itemQuantity);
        
        getchar();
        *cart = ModifyItem(*item, *cart);
     }

   else if (menuOp == 'i')
   {
       printf("OUTPUT ITEMS' DESCRIPTIONS\n");
       PrintDescriptions(*cart);
   }

   else if (menuOp == 'o')
   {
       printf("OUTPUT SHOPPING CART\n");
       PrintTotal(*cart);
   }


    return menuOp;
}
