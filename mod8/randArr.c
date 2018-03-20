/*
 * =====================================================================================
 *
 *       Filename:  randArr.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/15/2018 09:18:03 AM
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

#include "randArr.h"

// Constants


// Function Definitions
// initalize array with a random number
// between 0-100
void InitRandArray(int superArr[])
{
    // set random seed
    srand((int)time(0));
    for(int i=0; i < ASIZE; i++)
    {
        superArr[i] = rand()%100;
    }
    return;
}
// Display array content
void ShowRandArray(int superArr[])
{
    for(int i=0; i < ASIZE; i++)
    {
        printf("%04d ", superArr[i]);
    }
    printf("\n");
    return;
}

