/*
 * =====================================================================================
 *
 *       Filename:  PersonClass.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/10/2018 09:48:21 AM
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

//Constructor
Person::Person()
{
    //init all/Most of your variable or attributes
    age = 0;
    name = "None";
    weight =  0.0;
    return;
}
//
Person::Person(int a, string n, double w)// Second Constructor
{
    age = a;
    name = n;
    weight =  w;
    return;
}
void Person::ShowInfo() const
{
    // the "This" pointer is an alias to
    // the object itself
    cout << "Name " << this->name << endl;
    cout << "Age " << this->age << endl;
    cout << "Weight " << this->weight << endl;
    return;
}
// Function Definitions
void Person::SetAge(int a)
{
    age = a;
    return;
}
int Person::GetAge()
{
    return age;
}

void Person::SetName(string n)
{
    name = n;
    return;
}
string Person::GetName()
{
    return name;
}    

void Person::SetWeight(double w)
{
    weight = w;
    return;
}
double Person::GetWeight()
{
    return weight;
}



Person Person::operator+(Person rhs) // operator + overload  rhs = right hand side
{
    Person tmp;
    // Add elements
    //       first    second
    tmp.age = age + rhs.age;
    tmp.name = name + " " + rhs.name;
    tmp.weight = weight + rhs.weight;

    return tmp;
}
