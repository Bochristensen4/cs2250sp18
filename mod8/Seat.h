/*
 * =====================================================================================
 *
 *       Filename:  Seat.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/22/2018 09:31:30 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bo Christensen (), BowmanChristensen@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#ifndef  SEAT__INC__
#define  SEAT_INC__

#include <stdbool.h>

typedef struct Seat_struct 
{
char firstName[50];
char lastName[50];
int  amountPaid;
} Seat;

#endif /* ----- #ifndef SEAT__INC__ ----- */

