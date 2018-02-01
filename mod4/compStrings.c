/*
 * =====================================================================================
 *
 *       Filename:  compStrings.c
 *
 *    Description:  Compare string vaules
 *
 *        Version:  1.0
 *        Created:  02/01/2018 09:05:46 AM
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
    char word[51];
    char words[52];
    printf("Enter a word:\n");
    scanf("%s", word);
    printf("you entered [%s]\n", word);

    // compare strings
    if(strcmp(word, "Hello") == 0)
    {
        printf("You entered Hello\n");
    }
    else
    {
        printf("you did not enter Hello\n");
    }
    //copy strings
    strcpy(word2, word); // word2 = word
    printf("[%s] and [%s]\n", word, word2);




    return 0;
}
// Function Definitions


