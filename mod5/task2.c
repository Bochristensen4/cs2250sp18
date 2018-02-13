/*
 * =====================================================================================
 *
 *       Filename:  task2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/06/2018 10:06:20 AM
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
    int num = -1;
    while (num < 0)
    {
        printf("Enter a number < 0: \n");
        scanf("%d", &num);
    }

    printf("Done!\n");
    return 0;
}
// Function Definitions


