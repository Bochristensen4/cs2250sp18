/*
 * =====================================================================================
 *
 *       Filename:  chars.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/23/2018 08:51:45 AM
 *       Revision:  none
 *       Compiler:  gcc chars.c -o chars
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
    char input, dummy;
    printf("Do you like to code?:\n");
    scanf("%c", &input);
    printf("1) You entered [%c]\n", input);
    printf("Do you really like to code?:\n");

    printf("enter your age");
    scanf("%d", &age);

    scanf("%c %c", &dummy, &input);
    printf("2) You entered [%c]\n", input);
    
    printf("Do you like to code?:\n");
    scanf("%c", &input);
    printf("3) You entered [%c]\n", input);
    printf("Do you like to code?:\n");
    scanf("%c", &input);

    return 0;
}
// Function Definitions

