/*
 * =====================================================================================
 *
 *       Filename:  charComp.c
 *
 *    Description:  Learn operations on characters
 *
 *        Version:  1.0
 *        Created:  02/01/2018 09:43:48 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bo Christensen (), BowmanChristensen@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <ctype.h>
// Main Function
int main()
{
    char num;
    printf("enter a number 0-9\n");
    scanf("%c", &num);
    if(num == '0')
    {
    printf("You entered 0\n");
    }
    else
    {
        printf("you entered non-zero [%c]\n", num);
    }
    // test for alpha character
    if( isalpha(num) != 0 )
    {
        printf("It is alpha\n");
    }
    else if (is digit(num) !=0)
    {
        print("");
    }
    else
    {
        printf("You are not alpha\n");
    }



    return 0;
}
// Function Definitions


