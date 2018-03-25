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
#include <string.h>
#include "superlib.h"

// Main Function
int main()
{
    char userStr[INPUT_STR_SIZE]; // input string size

    // prompt user for input
    printf("Enter string with spaces: \n");
    fgets(userStr, INPUT_STR_SIZE, stdin);

    //call function to modify user defined string
    StrSpaceToHyphen(userStr);

    printf("String with hyphens: %s\n", userStr);
    
    int numDigits = StrCountDigits(userStr);
    printf("Number of digits is: %d\n)", numDigits);

    return 0;
}



