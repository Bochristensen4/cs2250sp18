/*
 * =====================================================================================
 *
 *       Filename:  task3.c
 *
 *    Description:  Update map positions: 
 *                  X-Coordinate
 *                  Y-Coordinate
 *
 *        Version:  1.0
 *        Created:  02/22/2018 09:17:01 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Vale (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
const int X = 0;
const int Y = 1;
const int DIM = 2;
// Function Prototypes
// 1) Initialize your Point to (0, 0)
void InitPoint(int* xa, int* ya); // pass by reference
// 2) Display current Point position
void ShowPoint(int x, int y); // pass by value
// 3) Move/Update your Point position
//  pass newx and newy by value
//  pass xa and ya by reference
void MovePoint(int newx, int newy, int* xa, int* ya); 
// Update Point. You ask user to enter new values
void UpdatePoint(int* xa, int* ya); // pass by reference

// Main Function
int main()
{
    //int point[DIM]; 
    int x = -99;
    int y = -99;
    ShowPoint(x, y);
    InitPoint(&x, &y);
    ShowPoint(x, y);
    MovePoint(3, 5, &x, &y);
    ShowPoint(x, y);
    UpdatePoint(&x, &y);
    ShowPoint(x, y);

    return 0;
}
// Function Definitions
// 1) Initialize your Point to (0, 0)
void InitPoint(int* xa, int* ya)
{
    printf("Beg InitPoint\n");
    // To update the values at a given address
    // use the de-reference operator "*"
    ShowPoint(*xa, *ya); // values of xa and ya
    // Update the values
    *xa = 0;
    *ya = 0;
    ShowPoint(*xa, *ya);
    printf("End InitPoint\n");
    return;
}
// 2) Display current Point position
void ShowPoint(int x, int y)
{
    printf("X-Position = [%d]\n", x);
    printf("Y-Position = [%d]\n", y);
    return;
}
// 3) Move/Update your Point position
//  pass newx and newy by value
//  pass xa and ya by reference
void MovePoint(int newx, int newy, int* xa, int* ya) 
{
    *xa = newx;
    *ya = newy;
    return;
}

// Update Point. You ask user to enter new values
void UpdatePoint(int* xa, int* ya)
{
    printf("Enter your x-coordinate:");
    // When using an address/pointer, do not use
    // the Address "&" operator
    scanf("%d",xa);
    printf("Enter your y-coordinate:");
    scanf("%d",ya);
    return;
}
