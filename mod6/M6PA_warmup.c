/*
 * =====================================================================================
 *
 *       Filename:  M6PA_warmup.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/19/2018 08:40:05 PM
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
const int NUM_ELEMENTS = 5;
double userVals[NUM_ELEMENTS];
int i;
double tw = 0; // total weight
double aw = 0; // average weight
double mw = 0; // max weight

// 1) ask user to enter 5 number
    for ( i = 0; i < NUM_ELEMENTS; ++i)
    {
    printf("Enter weight %d:\n", i+1 );
    scanf("%lf", &userVals[i]);
    }
   // printf("You entered: %lf %lf %lf %lf %lf ", userVals[0],  userVals[1], userVals[2], userVals[3], userVals[4]);

     printf("You entered: ");
    for ( i = 0; i < NUM_ELEMENTS; ++i)
        {
            printf("%lf ", userVals[i]);
        }
    printf("\n");
// 2) outputting total weight
    printf("\n");
    printf("Total weight: ");
    for ( i = 0; i < NUM_ELEMENTS; ++i)
        {
        tw = tw + userVals[i];
        }
        printf("%lf\n", tw );
// 3)outputting  average of the array's elements 
    printf("Average weight: ");
    aw = tw / NUM_ELEMENTS;
    printf("%lf\n", aw);
// 4) outputting the max vaule
    printf("Max weight: ");
    for ( i = 0; i < NUM_ELEMENTS; ++i)
        {
        if(userVals[i] > mw)
            {
                mw = userVals[i];
            }
        }
    printf("%lf\n", mw);





    return 0;
}
// Function Definitions


