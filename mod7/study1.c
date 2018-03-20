/*
 * =====================================================================================
 *
 *       Filename:  study1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/23/2018 09:21:12 PM
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
void PrintShampooInstructions(int numCycles)
{
    for(int i = 0; i <=  numCycles; i++)
    {
        if( numCycles < 1 )
        {
            printf("Too few\n");
        }
        else if (numCycles > 4)
        {
            printf("Too many\n");
        }
        else
        {
            printf("%d: Lather and rinse\n", i + 1);
        }
    }
    printf("done\n");
}

// Main Function
int main(void)
{
    PrintShampooInstructions(0);
    return 0;
}
// Function Definitions


