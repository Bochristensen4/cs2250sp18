/*
 * =====================================================================================
 *
 *       Filename:  HelloFunc.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/20/2018 09:21:42 AM
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
int MySquare(int n);

// Main Function
int main()
{
    printf("The square of 9 is %d\n", MySquare(9));
    return 0;
}

// func my square
int MySquare(int n)
{
    return n * n;
}


// Function Definitions


