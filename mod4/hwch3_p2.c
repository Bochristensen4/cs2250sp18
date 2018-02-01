/*
 * =====================================================================================
 *
 *       Filename:  hwch3_p2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/01/2018 10:04:12 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bo Christensen (), BowmanChristensen@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
    char oil[11];
    int oilVaule = 35;
    char tire[] = "tire rotation";
    int tirevalue = 19;
    printf("Davy's auto shop services\n Oil change -- $35\n Tire rotation -- $19\n Car wash -- $7\n Car wax -- $12\n");
    strcpy(oil, "Oil Change");
    printf("[%s] $%d\n", oil, oilVaule);
    printf("[%s] $%d\n", tire, tireValue);

    
    return 0;
}
// Function Definitions


