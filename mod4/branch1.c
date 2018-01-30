/*
 * =====================================================================================
 *
 *       Filename:  branch1.c
 *
 *    Description:  basics of branchs
 *
 *        Version:  1.0
 *        Created:  01/30/2018 08:51:48 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bo Christensen (), BowmanChristensen@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#include <stdio.h>

// Main Function
int main()
{
    int age = 0;
    int temp = 0;
    // request input
    printf("How old are you\n");
    scanf("%d",&age);

    if(age >= 18)
    {
        printf("you can vote\n");
    }
    else
    {
        temp = 18 - age; 
        printf("You have %d years to vote\n", temp);
    }
    if(age >= 21)
    {
        printf("you can legally drink\n");
    }
    else
    {
        temp = 21 - age; 
        printf("You have %d years until you can buy alcohol\n", temp);
    }
    if(age == 35) 
    {
        printf("You are at the special age %d\n", age);
    }
    printf("Adios amigo\n");
    
    return 0;
}
// Function Definitions


