/*
 * =====================================================================================
 *
 *       Filename:  hello.cpp
 *
 *    Description:  Hello world in C++
 *
 *        Version:  1.0
 *        Created:  04/10/2018 08:42:01 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bo Christensen (), BowmanChristensen@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
//#include <stdio.h>// for C
#include <iostream>  // for C++
using namespace std; // for C++ standard name
// Main Function
int main()
{
    int age;
    string name;
    //std::cout << "Hello World C++" << std::endl;
    cout << "Hello World C++" << endl;
    cout << "How old are you?" << endl;
    cin >> age;
    cout << "You are " << age << " old" << endl;
    //
    cout << "What is your name?" << endl;
    //cin >> name; // take input up to the first space
    // TODO: I need to take care of the enter key from previous
    // cin calls
    cin.ignore(); // should take care of extra enter key
    getline(cin, name); // take All input including spaces
    cout << "Hello "<< name << endl;

    return 0;
}


