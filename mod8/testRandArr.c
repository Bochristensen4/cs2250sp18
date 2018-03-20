/*
 * =====================================================================================
 *
 *       Filename:  testRandArr.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/15/2018 09:13:10 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bo Christensen (), BowmanChristensen@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "randArr.h"

// Constants


// Function Prototypes

// Main Function
int main()
{
    int ar[ASIZE];

    InitRandArray(ar);
    ShowRandArray(ar);
 
    return 0;
}
// Function Definitions


