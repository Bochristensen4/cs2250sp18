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
//char PrintMenu(char userStr);
int GetNumOfNonWSCharacters(char userNumSpace[]);
int GetNumOfWords(char userNumWord[]);
//void FixCapitalization(char userCapFix[]);
void ReplaceExclamation(char userReplace[]);



//
int main()
{
    char userInput[STRSIZE];
   //prompt user for text
    printf("Enter a sample text:\n");
    // capturing and outputting user text
    fgets(userInput,STRSIZE, stdin);
    printf("\nYou entered: ");
    for(int i = 0; i < strlen(userInput); i++)
    {
        printf("%c", userInput[i]);
    }
    printf("\n");
//
//char option;
//option = PrintMenu(userInput);
printf("Number of non-whitespace characters: %d\n" ,  GetNumOfNonWSCharacters(userInput));
printf("Number of words: %d\n" , GetNumOfWords(userInput));
//FixCapitalization(userInput);
ReplaceExclamation(userInput);
    
    return 0;
}
// Function Definitions
//char PrintMenu(char userStr)
//{
//       char menuOption;
//        {
//        printf("MENU\n");
//        printf("c - Number of non-whitespace characters\n");
//        printf("w - Number of words\n");
//        printf("f - Fix capitalization\n");
//        printf("r - Replace all !'s\n");
//        printf("s - Shorten spaces\n");
//        printf("q - Quit\n");
//        printf("\nChoose an option:\n");

//        scanf(" %c", &menuOption);
//        }

//    return menuOption;
//}
//
//
//
//
int GetNumOfNonWSCharacters(char userNumSpace[])
{
    int numSpace = 0;
    for (int i = 0; i < strlen(userNumSpace); ++i)
    {
        if(userNumSpace[i] != ' ')
        {
            numSpace = numSpace +1;
        }
    }
    return numSpace - 1;
}
//
//
//
//
int GetNumOfWords(char userNumWord[])
{
    int numWord = 0;
    for (int i = 0; i < strlen(userNumWord); ++i)
    {
        if(userNumWord[i] == ' ')
        {
            numWord = numWord + 1;
        }
    }
    return numWord + 1;
}
//
//
//
//
//void FixCapitalization(char userCapFix[])
//{
//    for (int i = 0; i < strlen(userCapFix); ++i)
//    {
//        if
//        {

//        }
//     printf("%c", userCapFix[i]);
//   }
//}

//
//
//
//
//
//
//
void ReplaceExclamation(char userReplace[])
{
    for (int i = 0; i < strlen(userReplace); ++i)
    {
        if(userReplace[i] == '!')
        {
            userReplace[i] = '.';
        }
     printf("%c", userReplace[i]);
    }
}

