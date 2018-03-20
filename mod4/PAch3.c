/*
 * =====================================================================================
 *
 *       Filename:  hwch3_p2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/01/2018 10:04:12 AM
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
// Constants

const int oilVaule = 35;
const int tirevalue = 19;
const int washVaule = 7;
const int waxvaule = 12;
// Function Prototypes
void ShowMenu(void);
char SelectService(void);
// Main Function
int main()
{ 

char first_service[15];//, second_service;
    // outputting menu
    ShowMenu();
    // select service
    SelectService();
    printf("service 1: %s\n", first_service);
   // printf("service 2: %s\n", second_service);

   // char oil[] = "Oil Change";
   // char tire[] = "Tire rotation";
   // char carwash[] = "Car Wash";
   // char carwax = "Car Wax";
        
    return 0;
}
// End of Main function
//
// Function Definition
//
// Function: print/show Menu
void ShowMenu(void)
{   
    printf("Davy's auto shop services\n Oil change -- $35\n Tire rotation -- $19\n Car wash -- $7\n Car wax -- $12\n");
return;
}
// FUNCTION:
char SelectService(void)
{
    char first_service[15];//, second_service;
    printf("Select first service:\n");
    scanf("\n%[^\n]s", first_service);
    //printf("Select second service:\n");
   // scanf("\n%[^\n]s", second_service);

return first_service[15];//, second_service;
}
