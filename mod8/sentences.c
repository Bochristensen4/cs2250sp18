/*
 * =====================================================================================
 *
 *       Filename:  sentences.c
 *
 *    Description:  capture full strings including spaces
 *
 *        Version:  1.0
 *        Created:  03/18/2018 09:01:31 PM
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
const int STRSIZE = 128;

// Function Prototypes

// Main Function
int main()
{
    char fullName[STRSIZE];
    printf("Please enter your full name: ");
    // scanf("%s", fullName);
    fgets(fullName, STRSIZE, stdin);
   // printf("Hi [%s]\n", fullName);

    printf("Hi ");
// from string.h use strlen for string length
    for(int i = 0; i < strlen(fullName); i++)
    {
        printf("%c", fullName[i]);
    }

    return 0;
}
// Function Definitions


