/*
 * =====================================================================================
 *
 *       Filename:  testMultiDudes.c
 *
 *    Description:  test multiple structs
 *
 *        Version:  1.0
 *        Created:  03/24/2018 09:53:01 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bo Christensen (), BowmanChristensen@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "Dude.h"

// Constants

// Function Prototypes

// Main Function
int main()
{
    SuperDude s1;
    InitInfoStruct(&s1); // init struct info
    ShowInfoStruct(s1); // display struct info
    
    return 0;
}
// Function Definitions

