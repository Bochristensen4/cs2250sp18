/*
 * =====================================================================================
 *
 *       Filename:  mymalloc.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/29/2018 08:47:29 AM
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


// Main Function
int main()
{
    int num;
    int* sa = NULL;

    printf("How many numbers you need?\n");
    scanf("%d", &num);
    // %lu for long unsigned
    printf("int is [%lu] bytes\n", sizeof(int));
    printf("int array of [%d] is [%lu] bytes\n", 
            num, num * sizeof(int));
    // malloc(<#bytes>)
    // cast address to pointer type (*<type>)
    sa = (int*) malloc(num * sizeof(int));
    //init array
    for(int i = 0; i < num; i++)
    {
        sa[i] = i + 10;
    }
    //display array
    for(int i = 0; i < num; i++)
    {
        printf("%d element is [%d]\n", i, sa[i]);
    }

    free(sa);

    return 0;
}
// Function Definitions


