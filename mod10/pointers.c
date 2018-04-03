/*
 * =====================================================================================
 *
 *       Filename:  pointers.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/27/2018 09:43:15 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bo Christensen (), BowmanChristensen@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    int i = 7;
    int pa [2];
    int* pi = NULL;// pointer of Int

    //pi = &i;
    //printf("i[%d] value that points to pi[%d]", i, *pi);
    printf("Enter Number of elements: \n");
    scanf("%i", &i);
    // Define array with input
    // use malloc; takes one argument number of bytes
    // To get number of bytes of a type use: sizeof(type)
    // type pointer = malloc(sizeof(type))
    // .. when you are done
    //  free (memory or address, pointer)
    pi = (int*) malloc(i*sizeof(int))// needs to be dynamically allocated
    for(int j = 0; j < i; j++)
    {
        //printf("ar[%d] = %d\n", j, ar[j]);
    }

    //return your memory
    free(pi);

    return 0;
}
// Function Definitions


