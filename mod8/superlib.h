/*
 * =====================================================================================
 *
 *       Filename:  superlib.h
 *
 *    Description:  It is super duper functions for strings
 *
 *        Version:  1.0
 *        Created:  03/24/2018 06:59:47 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bo Christensen (), BowmanChristensen@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */

#ifndef  SUPERLIB__INC__
#define  SUPERLIB_INC__
// Constants
// Inside header fillers, add keyword: static before
// the definition
static const int INPUT_STR_SIZE = 50; // input string size
// Function Prototypes
void StrSpaceToHyphen(char modString[]);
//Task1: Function takes string, returns number of digits
int StrCountDigits(char modString[]);

#endif /* ----- #ifndef SUPERLIB__INC__ ----- */

