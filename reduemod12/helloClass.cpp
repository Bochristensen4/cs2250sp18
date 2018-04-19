/*
 * =====================================================================================
 *
 *       Filename:  helloClass.cpp
 *
 *    Description:  Hello World Class!
 *
 *        Version:  1.0
 *        Created:  04/16/2018 09:17:11 PM
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
class HelloNum
{

    private://only developer can see this section.
        int number;// attribute

    public:// the user has access here, by writing functions 
       // or methods in c++
       void SetNumber(int n); // setter
       int GetNumber(); // getter
       void ShowNumber();// prototype
};
// Function Prototypes

// Main Function
int main()
{
    int num;
    // n1 is an instance of the class HelloNum
    HelloNum n1;
    n1.SetNumber(91);
    n1.ShowNumber();

    num = n1.GetNumber();
    cout << "1) Number is " << num << endl;
    num *= 2;
    cout << "2) Number is " << num << endl;
    n1.ShowNumber();

    return 0;
}
// Function Definitions
void HelloNum::SetNumber(int n)
{
    number = n;
}
int HelloNum::GetNumber()
{
    return number;
}
void HelloNum::ShowNumber()
{
    cout << "Your number is " << number << endl;
    return;
}


