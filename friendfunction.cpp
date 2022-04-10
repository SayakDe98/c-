#include<iostream>
using namespace std;

class Complex
{
    int a,b;

    public:
           void setnumber(int n1,int n2)
           {
               a=n1;
               b=n2;
           }
            /*Below line means non member function can do anything with thisclass's data members*/
           friend Complex SumComplex(Complex o1,Complex o2);//friend function.   o1 and o2 are two objects
           void PrintComplex()
           {
               cout<<a<<"+"<<b<<"i"<<endl;
           }
};

Complex SumComplex(Complex o1, Complex o2)//foreign function trying to access pvt data of class Complex
{
    Complex o3;
    o3.setnumber((o1.a+o2.a),(o1.b+o2.b));//seperately add real and imaginary parts

    return o3;
}

int main()
{
    Complex c1,c2,sum;
    c1.setnumber(1,3);
    c1.PrintComplex();
    c2.setnumber(3,5);
    c2.PrintComplex();
    sum=SumComplex(c1,c2);
    sum.PrintComplex();
    return 0;
    
}
/*Properties of friend function:
1.Not in the scope of class(means not a part of class )
2.Since friend function is not a member function hence it cannot be called from object of the class.
hence c1.SumComplex is invalid.
3.Can be invoked without any object.
4.Usually contains objects as arguments(like o1 and o2).
5.Can be declared in private or public access modifier of class
6.It cannot access the data members directly by their name it requires object_name.member_name to access any member
*/