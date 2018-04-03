/*
 * =====================================================================================
 *
 *       Filename:  testDude.c
 *
 *    Description:  Pass struct
 *
 *
 *        Version:  1.0
 *        Created:  03/24/2018 08:35:29 PM
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
// Main Function
int main()
{
    int a = 17;
    double w = 172.5;
    ShowInfo(a, w);
    struct Dude man1;
    man1.age = 32; // use dot operator
    man1.weight = 186.9;
    ShowInfo(man1.age, man1.weight);

    SuperDude man2;
    man2.age = 22; // use dot operator
    man2.weight = 286.9;
    man2.sex = 'M';
    ShowInfoStruct(man2);

    
    return 0;
}
