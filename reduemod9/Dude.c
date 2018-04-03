/*
 * =====================================================================================
 *
 *       Filename:  Dude.c
 *
 *    Description:  Dude function definitions
 *
 *        Version:  1.0
 *        Created:  03/24/2018 09:25:52 PM
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
// constants
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


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  InitInfoStruct
 *  Description:  initalize vaules of super dude struct
 * =====================================================================================
 */
void InitInfoStruct(SuperDude* sd)
{
    //when using an address of a structure, use the -> operator 
    //to accesss the struct members instead of the . operator
    //which is used when you have the structure instead of the address
    sd->age = -99;
    sd->weight = -99.0;
    (*sd).sex = 'N';// alternate way
    return;
}
