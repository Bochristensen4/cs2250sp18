/*
 * =====================================================================================
 *
 *       Filename:  task4.c
 *
 *    Description:  :
 *
 *        Version:  1.0
 *        Created:  02/08/2018 09:17:02 AM
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
    int num = 1;
    int counter = 0;
    while(1)
    {
        //print even numbers
        if( (num % 2) == 0)
        {
            printf("Even number [%d]\n", num);
        }
        else
        {
            // skip odd numbers
            printf("\t Skip odd number [%d]\n", num);
            num++; // increment condition
            continue; // go to the top of loop
        }
        // when 20 even number, break loop
        num++; // increment condition
        counter++;
        if(counter == 20)
        break;
    }



    return 0;
}
// Function Definitions


