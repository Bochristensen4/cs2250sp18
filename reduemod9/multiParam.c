/*
 * =====================================================================================
 *
 *       Filename:  multiParam.c
 *
 *    Description:  Pass multiple parameters to functions
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

// Constants
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
void ShowInfoStruct(SuperDude sd);

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
// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ShowInfo
 *  Description:  Display age
 * =====================================================================================
 */
void ShowInfo(int age, double weight)
{
    printf("Your age is [%d]\n", age);
    printf("Your weight is [%.2lf]\n", weight);

    return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ShowInfoStruct
 *  Description:  displays SuperDude infomation
 * =====================================================================================
 */

void ShowInfoStruct(SuperDude sd)
{
    printf("Your age is [%d]\n", sd.age);
    printf("Your weight is [%.2lf]\n", sd.weight);
    printf("Your sex is [%c]\n", sd.sex);

    return;
}
