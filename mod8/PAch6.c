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
#include <ctype.h>
//#include <stdbool.h>
// Constants
const int STRSIZE = 500;

// Function Prototypes
char PrintMenu(char userStr[]);
int GetNumOfNonWSCharacters(char userNumSpace[]);
int GetNumOfWords(char userNumWord[]);
void FixCapitalization(char userCapFix[]);
void ReplaceExclamation(char userReplace[]);
void ShortenSpace(char spaceFix[]);

// main funtion
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

char option;
option = PrintMenu(userInput);
    while(option != 'q')
    {
        option = PrintMenu(userInput);
    }
    return 0;
}
// Function Definitions
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintMenu
 *  Description: Takes String as Input and outputs menu with a 
 * =====================================================================================
 */
char PrintMenu(char userStr[])
{
       char menuOption;
        printf("\n");
        printf("MENU\n");
        printf("c - Number of non-whitespace characters\n");
        printf("w - Number of words\n");
        printf("f - Fix capitalization\n");
        printf("r - Replace all !'s\n");
        printf("s - Shorten spaces\n");
        printf("q - Quit\n");
        printf("\nChoose an option:\n");

        scanf(" %c", &menuOption);
        
        if(menuOption == 'c')
        {
            printf("Number of non-whitespace characters: %d\n" ,  GetNumOfNonWSCharacters(userStr) - 1);
        }
        else if (menuOption == 'w')
        {
            printf("Number of words: %d\n" , GetNumOfWords(userStr));
        }
        else if (menuOption == 'f')
        {
            printf("Edited text: ");
            FixCapitalization(userStr);
        }
        else if (menuOption == 'r')
        {
            printf("Edited text: ");
            ReplaceExclamation(userStr);
        }
        else if (menuOption == 's')
        {
            printf("Edited text: ");
            ShortenSpace(userStr);
        }

    return menuOption;
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetNumOrNonwSCharacters
 *  Description:  inputs user string and output int number of
 *                non white space characters
 * =====================================================================================
 */
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
    numSpace = numSpace;
    return numSpace;
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetNumOfWords
 *  Description: Takes user string input and outputs Int number of
 *               words in sring
 * =====================================================================================
 */
int GetNumOfWords(char userNumWord[])
{
    int numWord = 0;
    for (int i = 0; i < strlen(userNumWord); ++i)
    {
        if(i == 0 && isalpha( userNumWord[i]))
        {
            numWord = numWord + 1;
        }

        if(userNumWord[i] == ' ' && isalpha(userNumWord[i+1]))
        {
            numWord = numWord + 1;
        }
    }
    return numWord;
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  FixCapitalization
 *  Description: Takes user sting input and Prints First letter Cap
 * =====================================================================================
 */
void FixCapitalization(char userCapFix[])
{

// initial loop starting from the start
    for (int i = 0; i < strlen(userCapFix); ++i)
    {
//loop if first character is a letter but not cap fix
        if(i == 0 && isalpha( userCapFix[i]))
         {
            userCapFix[i] = toupper(userCapFix[i]);
         }
// loop if first char is space. Finds first letter and capitilzes

        if(i == 0 && userCapFix[i] == ' ')
        { 
            int k = 0;
            for (int j = i; k < 1; ++j)
            { 
                if(isalpha(userCapFix[j]))
                {
                    userCapFix[j] = toupper(userCapFix[j]);
                    k = k + 1;
                }
                
            }

        }

// loop fixes first letter of senteces
        if(userCapFix[i] == '.' || userCapFix[i] == '!' || userCapFix[i] == '?')
        {
            int k = 0;
            for (int j = i; k < 1; ++j)
            {
                if(isalpha(userCapFix[j]))
                {
                    userCapFix[j] = toupper(userCapFix[j]);
                    k = k + 1;
                }
            }
         }
     printf("%c", userCapFix[i]);
   }
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Replace Exclamation
 *  Description:  
 * =====================================================================================
 */
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

//
//
//
//

void ShortenSpace(char spaceFix[])
{
    for (int i = 0; i < strlen(spaceFix); ++i)
    {
        int printstart = 0;
        int print = 0;
        if(i == 0 && spaceFix[i] == ' ')
        {
            printstart = 1;
        }

        if(spaceFix[i] == ' ' && spaceFix[i+1] == ' ')
        {
            print = 1;
        }
        if( print == 0 && printstart == 0)
        {
            printf("%c", spaceFix[i]);
        };
    }
    return;
}
//{
//    for (int i = 0; i < strlen(spaceFix); ++i)
//    {
//        bool print = true;
//        if(spaceFix[i] == ' ' && spaceFix[i+1] == ' ')
//        {
//            print = false;
//        }
//        if( print == true)
//     printf("%c", spaceFix[i]);
//    }
//}
