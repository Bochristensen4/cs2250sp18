/*
 * =====================================================================================
 *
 *       Filename:  guessNum.c
 *
 *    Description:  Guess game with a loop
 *
 *        Version:  1.0
 *        Created:  02/13/2018 09:28:57 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bo Christensen (), BowmanChristensen@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Constants
const int LEN = 5; // number of chances
const int num = 20 ; // number between 0 - num
int guess = 0;
int opp = 0;
char answer = 'y';

// Main Function
int main()
{
    int input[LEN];
    //int guess = 0;
    // 1) create a random number between 0-20
    srand((int)time(0));
    // task: when done to play again:
    //  'y' for yes
    //  if  yes repeat
    //  'n' for no
    //  else quit and print "bye"
    //  anything else ask question again.
    while(answer != 'n')
    {
    guess = rand() % num;
    // 2) ask user to enter a guess number  between 0-20
    // input in an array
    //for(int i = 0; i < LEN; i++)
    while(opp < LEN)
    {
        printf("enter a number between 0 and %d\n", num);
        scanf("%d", &input[opp]);
        // 2.2 validateinpit
        if(input[opp] > num || input[opp] < 0)
        {
            continue; // repeat question
        }
        if(input[opp] < guess)
            {
                printf("Go higher\n");
            }
        else if (input[opp] == guess)
            {
                printf("You got it! [%d]\n", guess);
                break; // exit loop
            }
        else
            {
                printf("Go lower\n");
            }
        opp = opp + 1;
    }
    // 3) if number is less than the random number
    
    //      print go higher  else print go lower
    
    // 4) You have 5 chances to guess the corret number

    // 5) display all the choices you entered
    printf("You entered: ");
    for(int i = 0; i <= opp; i++)
        {
            printf(" [%d] \n", input[i]);
        }
        //Ask question
        printf("Do you want to play again?\n");
        printf("\t 'y' for yes\t 'n' for no\n");
        // remember to take the enter key into consideration
        scanf(" %c", &answer);
        opp = 0; // reset values

    } // end of while: answer != 'n'
    printf("Thank you for playing\n");
        return 0;
}
// Function Definitions


