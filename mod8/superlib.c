/*
 * =====================================================================================
 *
 *       Filename:  superlib.c
 *
 *    Description:  super function defitions
 *
 *        Version:  1.0
 *        Created:  03/24/2018 07:02:57 PM
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
#include "superlib.h"
// Function Definitions
void StrSpaceToHyphen(char modString[])
{
    int i = 0; // loop index
    for(i = 0; i < strlen(modString); ++i)
    {
        if(modString[i] == ' ')
        {
            modString[i] = '-';
        }
    }
    return;
}

// function count digits 0-9 in a string.
// takes one argument string
int StrCountDigits(char modString[])
{
    int countdig = 0;
    for(int i = 0; i < strlen(modString); ++i)
    {
        if(isdigit(modString[i]))
        {
            countdig = countdig + 1;
        }
    }
return countdig;
}

