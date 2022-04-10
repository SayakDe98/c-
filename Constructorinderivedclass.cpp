#include<iostream>
using namespace std;

class Base1
{
    int data1;

    public:
        Base1(int a)
        {
            cout<<"This is inside Base 1"<<endl;
            data1=a;
        }

        void showBase1()
        {
            cout<<"Data in Base 1 is : "<<data1<<endl;
        }
};

class Base2
{
    int data2;

    public:
        Base2(int a)
        {
            cout<<"This is inside Base 2"<<endl;
            data2=a;
        }

        void showBase2()
        {
            cout<<"Data in Base 2 is : "<<data2<<endl;
        }
};
class Derived : public Base1 , public Base2//here base1 is declared first hence base 1 will get executed first then base 2 
{
    int deriveddata1,deriveddata2;

    public:
        Derived(int a,int b,int c,int d):Base1(a),Base2(b)//here even if i change order of base 1 and base 2 that is we write base 2 first then base 1,then also we will get same result.
        {
            cout<<"This is inside Derived"<<endl;
            deriveddata1=c;
            deriveddata2=d;
        }

        void showDerived()
        {
            cout<<"Data in Derived  is : "<<deriveddata1<<" , "<<deriveddata2<<endl;
        }
};

int main()
{
    Derived d(1,2,3,4);
    d.showBase1();
    d.showBase2();
    d.showDerived();
    
    return 0;
    
}
/*
As we have discussed before about the constructors in derived class 
in a code snippet below three cases are given to clarify the execution of constructors.

Code Snippet 1: Constructors Execution Example Cases

As shown in Code Snippet 1,

In case 1, class “B” is inheriting class “A”, so the order of execution
 will be that first the constructor of class “A” will be executed and then
  the constructor of class “B” will be executed.
In case 2, class “A” is inheriting two classes “B” and “C”, 
so the order of execution will be that first constructor of class “B”
 will be executed and then the constructor of class “C” will be executed
  and at the end constructor of class “A” will be executed.
In case 3, class “A” is inheriting two classes “B” and virtual class “C”,
 so the order of execution will be that first constructor of class “C” will
  be executed because it is a virtual class and it is given more preference
   and then the constructor of class “B” will be executed and at the end constructor
    of class “A” will be executed.
As shown in code snippet 2,

We have created a “Base1” class which consists of private data member “data1” 
and parameterized constructor which takes only one argument and set the value of
 data member “data1”. The “Base1” class also contains the member function “printDataBase1” 
 which will print the value of data member “data1”.
We have created a “Base2” class which consists of private data member “data2” and
 parameterized constructor which takes only one argument and set the value of data member “data2”. 
 The “Base2” class also contains the member function “printDataBase2” which will print the value of data member “data2”.
We have created a “Derived” class that is inheriting base classes “Base1” and “Base2”. The “Derived” 
class consists of private data members “derived1” and “derived2”. The “Derived” class contains 
parameterized constructor which calls the “Base1” and “Base2” class constructors to pass the values,
 it also assigns the values to the data members “derived1” and “derived2”. The “Derived” class also
  contains member functions “printDataDerived”. The function “printDataDerived” will print the values 
  of the data member “derived1” and “derived2”.
The main thing to note here is that the constructors will be executed in the order in which the classes
 are being inherited. As in the example program above the “Base2” class is being inherited first and 
 then “Base1” class is being inherited, so the constructor of “Base2” class will be executed first. 
 The main program of the following example code is shown below.

Object “harry” is created of the “Derived” data type and the values (1, 2, 3, 4) are passed.
The function “printDataBase1” is called by the object “harry”.
The function “printDataBase2” is called by the object “harry”.
The function “printDataDerived” is called by the object “harry”.
*/