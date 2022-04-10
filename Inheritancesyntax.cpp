/* Inheritance is a process of inheriting attributes of the base class by a derived class
After writing the class keyword we have to write the derived class name and then put a “:” sign.
After “:” sign we have to write the visibility mode and then write the base class name.

Default visibility mode is private
Public Visibility Mode: Public members of the base class becomes Public members of the derived class
Private Visibility Mode: Public members of the base class become private members of the derived class
Private members are never inherited

1st we created an “employee” class which consists of public data member’s integer “id” and float “salary”.
2nd the “employee” class consists of a parameterized constructor that takes an integer “inpid” parameter and assigns its value to the data member “id”. The value of variable “salary” is set to “34”.
3rd the “employee” class also consists of default constructor.
4th we created a “programmer” class that is inheriting “employee” class. The main thing to note here is that the “visibility-mode” is “public”.
5th the “programmer” class consists of public data member’s integer “languageCode”.
6th the “programmer” class consists of a parameterized constructor that takes an integer “inpid” parameter and assigns its value to the data member “id”. The value of variable “languageCode” is set to “9”.
7th “programmer” class consists of a function “getData” which will print the value of the variable “id”.

1st objects “harry” and “rohan” is created of the “employee” data type. Object “harry” is passed with the value “1” and the object “rohan” is passed with the value “2”.
2nd the “salary” of both objects “rohan” and “harry” are printed.
3rd object “skillF” is created of the “programmer” data type. Object “skillF” is passed with the value “10”.
4th the “languageCode” and “id” of both object “skillF” is printed.
5th the function “getData” is called by the “skillF” object. This will print the “id”.

 // Derived Class syntax
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}

*/

#include<iostream>
using namespace std;

// Base Class
class Employee
{
    public:
        int id;
        float salary;

        Employee(int Inp_id)
        {
            id=Inp_id;
            salary=100000;
        }

        Employee(){}//default constructor since this class gets called.
};

// Creating a Programmer class derived from Employee Base class

class Programmer:public Employee
{
    public:
            int language;
            
            Programmer(int Inp_id)
            {
                id=Inp_id;
                language=9;
            }

            void show()
            {
                cout<<"Id is : "<<id<<endl;
            }

};

int main()
{
    Employee Sayak(1),Harry(2);
    cout<<Sayak.salary<<endl;
    cout<<Harry.salary<<endl;

    Programmer p(10);
    cout<<p.language<<endl;
    cout<<p.id<<endl;

    p.show();
    return 0;
}