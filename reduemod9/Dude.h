/*
 * =====================================================================================
 *
 *       Filename:  Dude.h
 *
 *    Description:  Dude Information
 *
 *        Version:  1.0
 *        Created:  03/24/2018 09:23:10 PM
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
}; // DO NOT forget the ';'

typedef struct SuperDude
{
    int age;
    double weight;
    char sex;
}SuperDude; // DO NOT forget the ';'

// Function Prototypes
void ShowInfo(int age, double weight);
// Pass s const address instead of the vaule
void ShowInfoStruct(SuperDude sd);
void InitInfoStruct(SuperDude* sd);// address of SuperDude type

#endif /* ----- #ifndef DUDE__INC__ ----- */

