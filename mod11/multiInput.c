/*
 * =====================================================================================
 *
 *       Filename:  multiInput.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/03/2018 08:46:09 AM
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
void Help(void);

// Main Function
int main()
{
    //int feet, in;
    //printf("Enter feet and inches separated by a space:\n");
    //scanf("%d %d", &feet, &in);
    //printf("You entered: %d feet and %d inches\n", feet, in);
    
    int hour = 0;
    int min = 0;
    int rc = 0;
    char AmPm[3];
    printf("Enter the time in this format: HH:MM AM/PM\n");
    // validate scanf
    rc = scanf("%2d:%2d %2s", &hour, &min, AmPm);
    if(rc != 3)
    {
        Help();
    }
    else
    {
    printf("Your time is %2d:%2d %s\n", hour, min, AmPm);
    }

    return 0;
}
// Function Definitions

void Help(void)
{
    printf("Bad format. Please make sure you enter time as shown below\n");
    printf("Format: HH:MM AM/PM");
    return;
}


