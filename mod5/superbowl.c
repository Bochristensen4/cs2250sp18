/*
 * =====================================================================================
 *
 *       Filename:  superbowl.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/06/2018 08:32:28 AM
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
// Main Function
int main()
{
    char qbfn[50] = "";
    char qbln[50] = "";

    printf("select a QB, ");
    printf("and I'll tell you a number of Super bowl wins: \n");
    printf("Tom Brady\n");
    printf("Peyton Manning\n");
    printf("Eli Manning\n");
    printf("None\n");
    // take input
    scanf("%s", qbfn); // requires 1 input
    // scanf(),
    if( strcmp(qbfn, "None") == 0)
    {
        printf("No Super Bowls\n");
    }
    else
    {
        scanf("%s", qbln); // requires 1 input
        printf("Hi %s %s\n", qbfn, qbln);
    }




    return 0;
}
// Function Definitions


