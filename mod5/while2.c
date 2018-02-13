/*
 * =====================================================================================
 *
 *       Filename:  while2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/06/2018 09:24:28 AM
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
    int num = 2;
    int age = 21;
    while(num)
    {
        printf("Num [%d]\n", num);
        num --;
    }
    // this look reqiures a break statement
    while(1)
    {
        if(age == 0)
        {
        printf("Thank you\n");
        // breaks works on loops, switch blocks
        break; // out of loop
        }
        printf("Your age is [%d]\n", age);
        age--;
    }
    printf("Done\n");

return 0;

}
// Function Definitions


