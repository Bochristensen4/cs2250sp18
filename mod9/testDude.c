/*
 * =====================================================================================
 *
 *       Filename:  testDude.c
 *
 *    Description: pass structre
 *
 *        Version:  1.0
 *        Created:  03/20/2018 08:45:36 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bo Christensen (), BowmanChristensen@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <"dude.h">
#include <"dude.c">

// Constants

// Main Function
int main()
{
    int a = 27;
    double w = 200;
    ShowInfo(a, w);

    struct Dude man1;
    man1.age = 32;
    man1.weight = 186.9;
    ShowInfo(man1.age, man1.weight);

    SuperDude man2;
    man2.age = 32;
    man2.weight = 186.9;
    man2.sex = 'M';
    ShowInfoStruct(man2);

    return 0;
}

