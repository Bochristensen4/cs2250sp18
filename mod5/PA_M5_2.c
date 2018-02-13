/*
 * =====================================================================================
 *
 *       Filename:  PA_M5_2.c
 *
 *    Description:  Module 5 Program assignment
 *
 *        Version:  1.0
 *        Created:  02/10/2018 01:51:22 PM
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
    int baseHeight = 0;
    int baseWidth = 0;
    int headWidth = 0;
    int bh = 1;
    int bw = 1;
    int hrow = 1;
    int hcol = 1;

    printf("Enter arrow base height:\n");
    scanf("%d", &baseHeight);

    printf("Enter arrow base width:\n");
    scanf("%d", &baseWidth);

    printf("Enter arrow head width:\n");
    scanf("%d", &headWidth);


 // part 4 check for  headwidth  > basewidth
while (headWidth <= baseWidth)
    {    
    printf("Enter arrow head width:\n");
    scanf("%d", &headWidth);
    }
 // rectangle start----------------------
printf("\n");
for (bh = 1; bh <= baseHeight; ++bh )
    {
        for (bw = 1; bw <= baseWidth; ++bw )
            {
                printf("*");
            }
        printf("\n");
    }
// rectangle end------------------------------------
// half arow start-----------------------------------

hrow = headWidth;
while (hrow >= 1 )
    {
    hcol = 1;
        {
         while(hcol <= hrow)
            {
                 printf("*");
                hcol = hcol + 1;
            }
         printf("\n");
        }
     hrow = hrow - 1;
    }




    return 0;
}
// Function Definitions


