/*
 * =====================================================================================
 *
 *       Filename:  task3.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/22/2018 09:20:07 AM
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
const int x = 0;
const int y = 1;
const int DIM = 2;
// Function Prototypes
// 1) intialize your Point to (0,0)
void InitPoint(int* xa, int* ya); // pass by refrence
// 2) display current point position
void ShowPoint(int x, int y); // pass by value
// 3) Move/Update your Point position
// pass x and y by value
// pass xa and ya by reference
void MovePoint(int newx, int newy, int* xa, int* ya); // pass by reference

// Main Function
int main()
{
    //int point[DIM];
    int x = -99;
    int y = -99;
    ShowPoint(x,y);
    InitPoint(&x,&y);
    ShowPoint(x,y);
    MovePoint(3, 5, &x, &y);
    ShowPoint(x,y);

    return 0;
}
// Function Definitions
// 2) display current point position
void ShowPoint(int x, int y)
{
    printf("x-postion = %d\n", x);
    printf("y-postion = %d\n", y);
}
// 1) intialize your Point to (0,0)
void InitPoint(int* xa, int* ya)
{
    printf("Beg InitPoint\n");
   // to update the values at a given address
   // use the de-reference operator "*"
    ShowPoint(*xa,*ya);
    *xa = 0;
    *ya = 0;
    ShowPoint(*xa,*ya);
    printf("End InitPoint\n");
    return;
}
// 3) Move/Update your Point position
// pass x and y by value
// pass xa and ya by reference
void MovePoint(int newx, int newy, int* xa, int* ya)
{
    *xa = newx;
    *ya = newy;
    return;
}
// 3) Move/Update your Point position
