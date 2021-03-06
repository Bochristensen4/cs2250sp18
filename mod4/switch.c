/*
 * =====================================================================================
 *
 *       Filename:  branch2.c
 *
 *    Description: Test switch statements.
 *    Note: only works on integers, single char
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
    switch(pos)
    {
        case 1:      // if (pos == 1)
            printf("you are %d gold medal\n", pos);
            break;
        case 2:      // if (pos == 2)
            printf("you are %d silver medal\n", pos);
            break;
        case 3:      // if (pos == 3)
            printf("you are %d bronze medal\n", pos);
            break;
        case 14:      // if (pos == 14)
        case 28:      // if (pos == 28)
        case 36:      // if (pos == 36)
            printf("you are %d plastic medal\n", pos);
            break;
        default:      // else
        printf("you are %d place. sorry no medal\n", pos);
    
    }//end of switch
    printf("Adios amigo\n");
    return 0;
}
// Function Definitions


