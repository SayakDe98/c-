#include<iostream>
using namespace std;

class Complex
{
    int a,b;
    public:
        Complex(int,int);
        void printNumber()
        {
            cout<<a<<"+"<<b<<"i"<<endl;
        }
};

Complex ::Complex(int x,int y)//This is parameterized constructor as it takes some paramters,and as it is a constructor we dont specify return type
{
    a=x;
    b=y;
}

int main()
{
    
    Complex a(4,5);//Implicit Call
    Complex b =Complex(8,7);//Explicit Call
    a.printNumber();
    b.printNumber();
    return 0;
    
}