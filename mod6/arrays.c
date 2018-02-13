/*
 * =====================================================================================
 *
 *       Filename:  arrays.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/13/2018 08:49:56 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bo Christensen (), BowmanChristensen@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#include <stdio.h>


const int LEN = 32;


int main()
{
    int ar[LEN];
    ar[0] = 33;
    ar[1] = 22;
    ar[2] = 66;
    ar[3] = 99;

    // print info
    printf("first value %d/n", ar[0]);
    printf("fourth value %d/n", ar[3]);

    // intialize full array
    for(int i = 0; i < LEN; i++)
        {
            if(i % 3 == 0)
            {
                ar[i] = 0;
            }
            else
            {
                ar[i] = -99;
            }
        }
        
        
        for(int i = 0; i < LEN; i++)
        {
            printf("the %d vaule is %d\n", i + 1, ar[i]);
        }

    return 0;
}
// Function Definitions


