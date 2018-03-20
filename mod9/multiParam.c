/*
 * =====================================================================================
 *
 *       Filename:  multiParam.c
 *
 *    Description:  
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

// Constants
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
void ShowInfoStruct(SuperDude sd);

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
// Function Definitions
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ShowInfo
 *  Description:  
 * =====================================================================================
 */
void ShowInfo(int age, double weight)
{
    printf("Your age is [%d]\n", age);
    printf("Your weight is [%lf]\n", weight);

return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ShowInfoStruct
 *  Description:  
 * =====================================================================================
 */


void ShowInfoStruct(SuperDude sd)
{
    printf("Your age is [%d]\n", sd.age);
    printf("Your weight is [%lf]\n", sd.weight);
    printf("Your sex is [%c]\n", sd.sex);


return;
}
