/*
 * =====================================================================================
 *
 *       Filename:  inFile.c
 *
 *    Description:  read data from files
 *
 *        Version:  1.0
 *        Created:  04/03/2018 09:17:30 AM
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

//constants
#define NUM 4
// const int NUM = 4;

// Main Function
int main()
{
    //int data[NUM]; // static mem=
    int* userNums;       // User numbers; dynamic mem.
    FILE* inFile = NULL;
    int arrSize = 0; // user specfied number of integers
    printf("Opening file data.txt\n");
    // Open for file for Reading purposes
    inFile = fopen("data.txt", "r");
    // Test for success
    if(inFile == NULL)
    {
        printf("Could not open file\n");
        return -1;
    }
    // Scan file, get number of records
    fscanf(inFile, "%d", &arrSize);
    printf("arrSize[%d]\n", arrSize);
    // allocate memory
    userNums = (int*)malloc(sizeof(int)*arrSize);
    //check you got your memory
    if(userNums == NULL)
    {
        printf("Unable to malloc mem\n");
        fclose(inFile);
        return -2;
    }
    // arr size isfirst number of file, which in this case is
    // the HEADER record or the number of records in the file
    int i = 0; // skip the HEADER records
    while(i <= arrSize)
    {
        // i - 1 so you skip the header record, but allocate your info
        // starting at index 0
        fscanf(inFile, "%d", &(userNums[i- 1]));
        i = i + 1;
    }
// print record
    while(i < arrSize)
    {
        printf("Numbers [%d]\n", userNums[i]);
        i++;
    }
    // close
    fclose(inFile);
    return 0;
}
// Function Definitions


