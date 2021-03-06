/*
 * =====================================================================================
 *
 *       Filename:  xycoord.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/24/2018 08:20:17 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bo Christensen (), BowmanChristensen@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#ifndef  XYCOORD__INC__
#define  XYCOORD_INC__
// Constants
static const int X = 0;
static const int Y = 1;
static const int DIM = 2;
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


#endif /* ----- #ifndef XYCOORD__INC__ ----- */

