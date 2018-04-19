/*
 * =====================================================================================
 *
 *       Filename:  helloClass.cpp
 *
 *    Description:  Hello World Class
 *
 *        Version:  1.0
 *        Created:  04/10/2018 09:12:03 AM
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
using namespace std; //Cor C++

// Constants
class HelloNum
{
    //only developer can see this section
    private:
        int number; // Attribute

    // The user has access here, by writing Functions or Methods in C++
    public:
        void SetNumber(int n); // setter
        int GetNumber();      // Getter
        void ShowNumber();// prototype
};
// Function Prototypes

// Main Function
int main()
{
    int num;
    // n1 is an instance of the class HelloNum
    HelloNum n1;// an object
    n1.SetNumber(91);
    n1.ShowNumber();

    num = n1.GetNumber();
    cout << "1) Number is " << num << endl;
    num*= 2;
    cout << "2) Number is " << num << endl;
    return 0;
}
// Function Definitions
void HelloNum::ShowNumber()
{
    cout << "Your num is " << number << endl;
    return;
}

void HelloNum::SetNumber(int n) // setter
{
    //set private number
    number = n;
}

int HelloNum::GetNumber()      // Getter
{
    // return private number
    return number;
}


