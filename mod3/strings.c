/*
 * =====================================================================================
 *
 *       Filename:  strings.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/23/2018 10:04:59 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bo Christensen (), BowmanChristensen@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    char name[21]; // allocate 20 chars + NULL char
    printf("Enter your name:\n");
    // Note: if you use as array, for ex: string,
    // DO NOT use the & address operator
    // 2) The input ends with a space
    scanf("%s", name);
    printf("Your name is[%s]\n", name);



    return 0;
}
// Function Definitions


