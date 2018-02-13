/*
 * =====================================================================================
 *
 *       Filename:  while.c
 *
 *    Description:  Practice while loop
 *
 *        Version:  1.0
 *        Created:  02/06/2018 08:50:52 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bo Christensen (), BowmanChristensen@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#include <stdio.h>
// constant
const int low = 1;
const int max = 20;
// Main Function
int main()
{
    int num = 0;
    unsigned int fact = 1;
    printf("Please enter a number from %d-%d\n", low, max);
    printf(" and I will give you the factorial\n");
    scanf("%d", &num);
    if(num >= 1 && num <=9)
    {
        printf("Calculating Factorial\n");
        while(num > 0)
        {
            // Do your work
            printf("Num = [%d], fac[%u]\n", num, fact);
            fact = fact * num;
            num = num - 1;
            //
            //
        }
    }
    else
    {
        printf("You did not follow the instructions\n");
    }
        printf("Done. Your fact is [%d]\n", fact);
    return 0;
}
// Function Definitions


