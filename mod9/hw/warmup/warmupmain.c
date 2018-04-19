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
#include "ItemToPurchase.h"

// Constants

// Main Function
int main()
{
    char s1[15];
    char s2[15];
    ItemToPurchase item1;
    ItemToPurchase item2;
// Obtaining User's input for the first item's name
    printf("Item 1\n");
    printf("Enter the item name:\n");
    scanf("%s %s", s1, s2);
    strcat(s1, " ");
    strcat(s1, s2);
    strcpy(item1.itemName, s1);
// Obtaining User's input for first item's price
    printf("Enter the item price:\n");
    scanf("%d", &item1.itemPrice);
// Obtaining User's input for first item's qty
    printf("Enter the item quantity:\n");
    scanf("%d", &item1.itemQuantity);
// calling fflush to allow the user to input a new string
    fflush(stdin);

// Obtaining User's input for the second item's name
    printf("\nItem 2\n");
    printf("Enter the item name:\n");
    scanf("%s %s", s1, s2);
    strcat(s1, " ");
    strcat(s1, s2);
    strcpy(item2.itemName, s1);
// Obtaining User's input for second item's price
    printf("Enter the item price:\n");
    scanf("%d", &item2.itemPrice);
// Obtaining User's input for second item's qty
    printf("Enter the item quantity:\n");
    scanf("%d", &item2.itemQuantity);

    //Test 1
   // printf("TEST 1  >>>>>>>>\n");
   // printf("Item 1 Name: %s\n", item1.itemName);
   // printf("Item 1 Price: %d\n", item1.itemPrice);
   // printf("Item 1 Qty: %d\n", item1.itemQuantity);
   // printf("Item 2 Name: %s\n", item2.itemName);
   // printf("Item 2 Price: %d\n", item2.itemPrice);
   // printf("Item 2 Qty: %d\n", item2.itemQuantity);
   // printf("TEST 1 END >>>>>>>\n");

   // MakeItemBlank(&item1);
   // MakeItemBlank(&item2);

    //Test 2
   // printf("TEST 1  >>>>>>>>\n");
   // printf("Item 1 Name: %s\n", item1.itemName);
   // printf("Item 1 Price: %d\n", item1.itemPrice);
   // printf("Item 1 Qty: %d\n", item1.itemQuantity);
   // printf("Item 2 Name: %s\n", item2.itemName);
   // printf("Item 2 Price: %d\n", item2.itemPrice);
   // printf("Item 2 Qty: %d\n", item2.itemQuantity);
   //  printf("TEST 1 END >>>>>>>\n");

int subCost1 = 0;
int subCost2 = 0;
int totalCost = 0;

subCost1 = (item1.itemPrice * item1.itemQuantity);
subCost2 = (item2.itemPrice * item2.itemQuantity);
totalCost = subCost1 + subCost2;
printf("\nTOTAL COST\n");
printf("%s %d @ $%d = $%d\n",item1.itemName, item1.itemQuantity, item1.itemPrice, subCost1);
printf("%s %d @ $%d = $%d\n",item2.itemName, item2.itemQuantity, item2.itemPrice, subCost2);
printf("\nTotal: $%d\n", totalCost);
// Function Prototypes
    return 0;
}


