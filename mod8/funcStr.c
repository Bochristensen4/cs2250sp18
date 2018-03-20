/*
 * =====================================================================================
 *
 *       Filename:  funcStr.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/18/2018 09:36:19 PM
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
const int INPUT_STR_SIZE = 50; // input string size

// Function Prototypes
void StrSpaceToHyphen(char modString[]);
// Main Function
int main()
{
    char userStr[INPUT_STR_SIZE] // input string size

    // prompt user for input
    printf("Enter string with spaces: \n");
    fgets(userStr, INPUT_STR_SIZE, stdin);

    //call function to modify user defined string
    StrSpaceToHypen(userStr);

    printf("String with hyphens: ");
    return 0;
}
// Function Definitions


