/*
 * =====================================================================================
 *
 *       Filename:  hello.cpp
 *
 *    Description:  Hello World in C++
 *
 *        Version:  1.0
 *        Created:  04/16/2018 08:12:40 PM
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

// Constants

// Function Prototypes

// Main Function
int main()
{
    int age;
    string name;

    cout << "Hello World C++" << endl;
    cout << "How old are you? " << endl;
    cin >> age;
    cout << "You are " << age << " years old." << endl;
    cout << "What is your name?" << endl;
    cin >> name;// take input up to first space
    // TODO: I need to take care of enter key from previous Cin calls
   //getline(cin, name);// take input up to first space
    cout << "Hello " << name << endl;

    return 0;
}
// Function Definitions


