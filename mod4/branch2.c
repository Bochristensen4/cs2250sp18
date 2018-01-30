/*
 * =====================================================================================
 *
 *       Filename:  branch2.c
 *
 *    Description: Test for race medals
 *
 *        Version:  1.0
 *        Created:  01/30/2018 09:30:30 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bo Christensen (), BowmanChristensen@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#include <stdio.h>

int main()
{
    int pos = 0;
    printf("What is your position?\n");
    scanf("%d", &pos);
    // 
    if(pos == 1)
    {
        printf("you are %d gold medal\n", pos);
    }
    //
    else if(pos == 2)
    {
        printf("you are %d silver medal\n", pos);
    }
    //
    else if(pos == 3)
    {
        printf("you are %d bronze medal\n", pos);
    }
    //
    else
    {
        printf("you are %d place. sorry no medal\n", pos);
    
    }
    return 0;
}
// Function Definitions


