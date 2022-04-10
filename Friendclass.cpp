#include<iostream>
using namespace std;


class Complex;// Forward declaration,telling compiler this class exists somewhere below in the program

class Calculator//a class for doing calculation
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(Complex, Complex);//member function of Calculator
    int sumImagComplex(Complex, Complex);//member function of Calculator
};

class Complex
{
    int a, b;
    // Individually declaring functions as friends
    // friend int Calculator ::sumRealComplex(Complex, Complex);
    // friend int Calculator ::sumCompComplex(Complex, Complex);

    
    friend class Calculator;/* Aliter: Declaring the entire calculator class as friend,
    meaning Complex class says complex class is friend of calculator class 
     all functions inside calculator class is friend of this complex class */ 

public:
    void setNumber(int n1, int n2)//member function of Calculator
    {
        a = n1;
        b = n2;
    }

    void printNumber()//member function of Calculator
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)//we can use friend function of Calculator
{
    return (o1.a + o2.a);
}

int Calculator ::sumImagComplex(Complex o1, Complex o2)//we can use friend function of Calculator
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int resi = calc.sumImagComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << resi << endl;
    return 0;
}