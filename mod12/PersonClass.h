/*
 * =====================================================================================
 *
 *       Filename:  PersonClass.h
 *
 *    Description: Person Class Information 
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
#ifndef  PERSONCLASS__INC__
#define  PERSONCLASS__INC__

class Person
{
    private:
        int age;
        string name;
        double weight;
    public:
        Person();// Default Constructor
        // TODO: Set parameters as optional
        //Person(int a = 0, string n = "None", double w = 0.0);// Second Constructor
        Person(int a, string n, double w);// Second Constructor

        void SetAge(int a); // setter
        int GetAge();       // Getter

        void SetName(string n);
        string GetName();

        void SetWeight(double w);
        double GetWeight();

        void ShowInfo() const; // Constant Getter

        Person operator+(Person rhs); // operator + overload  rhs = right hand side
};

#endif /* ----- #ifndef PERSONCLASS__INC__ ----- */

