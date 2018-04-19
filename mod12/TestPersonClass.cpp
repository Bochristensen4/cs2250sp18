/*
 * =====================================================================================
 *
 *       Filename:  TestPersonClass.cpp
 *
 *    Description: Test Person Class  
 *
 *        Version:  1.0
 *        Created:  04/18/2018 12:04:01 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bo Christensen (), BowmanChristensen@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
//#include <stdio.h> // For C
#include <iostream> // For C++
using namespace std; //For C++
#include "PersonClass.h"

// Constants
// Function Prototypes
// Main Function

int main()
{
    /*
    Person p1; // Before Constructor
    p1.SetAge(21);
    p1.SetName("Waldo");
    p1.SetWeight(185.2);
    cout << "Name " << p1.GetName() << endl;
    cout << "Age " << p1.GetAge() << endl;
    cout << "Weight " << p1.GetWeight() << endl;
    */
    Person p2; // Default Constructor
    p2.ShowInfo();

    Person p3(4, "Waldo", 33.2 ); // Default Constructor
    p3.ShowInfo();

    Person p4(66,"Mario", 2.0); // Default Constructor
    p4.ShowInfo();
    // task 2: Enable Person + Person operation
    p2 = p3 + p4;
    p2.ShowInfo();
    
    /*
    // Task: Define an array of 4 person and set their values to defaults
    // display all the members of the array
    int Size = 4;
    Person persons[Size];
    for(int i = 0; i < Size; i++)
    {
        cout << i << " ";
        persons[i].ShowInfo();
        cout << endl;
    }
    */

    return 0;
}
// Function Definitions


