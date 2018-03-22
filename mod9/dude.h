/*
 * =====================================================================================
 *
 *       Filename:  dude.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2018 09:24:26 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bo Christensen (), BowmanChristensen@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#ifndef  DUDE__INC__
#define  DUDE_INC__
struct Dude
{
    int age;
    double weight;
}; // do not forget ";"

typedef struct SuperDude
{
    int age;
    double weight;
    char sex;
}SuperDude; // do not forget ";"

// Function Prototypes
void ShowInfo(int age, double weight);
// Pass a const address instead of the vaule
void ShowInfoStruct(const SuperDude* sd);
void InitInfoStruct(SuperDude* sd); // address of SuperDude Type

#endif /* ----- #ifndef DUDE__INC__ ----- */

