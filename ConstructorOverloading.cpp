#include<iostream>
using namespace std;

class Complex
{
    int a,b;
    public:
            Complex()//default constructor
            {
                a=0;
                b=0;
            }

            Complex(int x)//parameterized constructor
            {
                a=x;
                b=0;

            }

            Complex(int x,int y)//parameterized constructor
            {
                a=x;
                b=y;
            }

            void PrintComplex()
            {
                cout<<a<<"+"<<b<<"i"<<endl;
            }

};

int main()
{
    Complex c1;
    c1.PrintComplex();

    Complex c2(1);
    c2.PrintComplex();

    Complex c3(4,6);
    c3.PrintComplex();

    return 0;
}
/*
Constructor overloading is a concept in which one class can have 
multiple constructors with different parameters. 
The main thing to note here is that the constructors 
will run according to the arguments for example 
if a program consists of 3 constructors with 0, 1, and 2 arguments, 
so if we pass 1 argument to the constructor the compiler will automatically run
 the constructor which is taking 1 argument.
*/