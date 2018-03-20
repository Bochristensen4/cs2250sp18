/*
 * =====================================================================================
 *
 *       Filename:  PAch6_warm.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/19/2018 01:46:43 PM
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
int GetNumOfCharacters(char countStr[]);
void OutputWithoutWhitespace(char spaceStr[]);
// Main Function
int main()
{
    char userInput[STRSIZE];
    printf("Enter a sentence or phrase:\n");
    fgets(userInput,STRSIZE, stdin);
    printf("\nYou entered: ");
    for(int i = 0; i < strlen(userInput); i++)
    {
        printf("%c", userInput[i]);
    }
    printf("\n");
    printf("\nNumber of characters: %d\n", GetNumOfCharacters(userInput));
    OutputWithoutWhitespace(userInput);

    return 0;
}
// Function Definitions
int GetNumOfCharacters(char countStr[])
{
    int inc = 0;
    for (int i = 0; i < strlen(countStr); ++i)
    {
        inc = inc + 1;
    }
   // printf("Number of characters: %d\n", inc);

    return inc;
}
void OutputWithoutWhitespace(char spaceStr[])
{
    printf("String with no whitespace: ");
    for(int i = 0; i < strlen(spaceStr); i++)
    {
        if(spaceStr[i] != ' ')
        {
            printf("%c", spaceStr[i]);
        }
    }
    printf("\n");
    return;
}
