/*
 * =====================================================================================
 *
 *       Filename:  dude.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2018 09:26:50 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bo Christensen (), BowmanChristensen@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#include <stdio.h>
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


void ShowInfoStruct(SuperDude* sd)
{
    printf("Your age is [%d]\n", sd.age);
    printf("Your weight is [%lf]\n", sd.weight);
    printf("Your sex is [%c]\n", sd.sex);


return;
}
void InitInfoStruct(SuperDude* sd)
{
    // when using address of a structure, use the -> operator
    // to access the struct members instead of the . operator
    //which is used when you have the structure instead of the
    //address
    sd->age = -99;
    sd->weight = -99.0;
    (*sd).sex = 'N'; // alternate way of updating the values
    //sd->sex = "M"; same as above

    return,
}
