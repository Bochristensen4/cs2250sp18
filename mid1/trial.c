/*
 * =====================================================================================
 *
 *       Filename:  trial.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/28/2018 10:56:53 PM
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

// Function Prototypes
int AskNum(void);
int TheSum(int n1, int n2);
void TheAltSum(int n1, int n2);
// Main Function
int main()
{
int input;
int input2;

    input = AskNum();
    input2 = AskNum();
    printf("You Entered: %d and %d\n", input, input2);
    printf("The sum is: %d\n", TheSum(input, input2) );

    TheAltSum(input, input2);

    return 0;
}
// Function Definitions
int AskNum(void)
{
    int num1;
    printf("Please enter a integer: \n");
    scanf("%d", &num1);

    return num1;
}
//
int TheSum(int n1, int n2)
{
return (n1 + n2);
}
//
void TheAltSum(int n1, int n2)
{
int altsum = n1 + n2;
    printf("The sum is: %d\n", altsum);
}

