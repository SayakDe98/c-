#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    int x,y;
    cout<<"Enter two numbers:"<<endl;
    cin>>x>>y;    
    cout<<"The maximum among the two numbers are : "<<max(x,y)<<endl;
    cout<<"The minimum among the two numbers are : "<<min(x,y)<<endl;
    cout<<"x to the power of y is : "<<pow(x,y)<<endl;
    cout<<"Cube root of x is :"<<cbrt(x)<<endl;
    cout<<"Absolute value of y is : "<<abs(y)<<endl;
    cout<<"Exponent of x is : "<<exp(x)<<endl;
    cout<<"sine of x is :"<<sin(x)<<endl;
    cout<<"arc sine of x is :"<<sinh(x)<<endl;
    cout<<"cosine of x is :"<<cos(x)<<endl;
    cout<<"arc cosine of x is :"<<cosh(x)<<endl;
    cout<<"tangent of x is :"<<tan(x)<<endl;
    cout<<"tangent hyperbolic of x is :"<<tanh(x)<<endl;

    float a,b;

    cout<<"Enter the value of a which is of float type :"<<endl;
    cin>>a;
    
    cout<<"Floor of a : "<<floor(a)<<endl;
    cout<<"Ceil of a : "<<ceil(a)<<endl;
    cout<<"Absolute value of a is :"<<endl;
    cout<<"Enter the value of b which is of float type :"<<endl;
    cin>>b;
    cout<<"Minimum of a and b is : "<<fmin(a,b)<<endl;
    cout<<"Maximum of a and b is : "<<fmax(a,b)<<endl;
    cout<<" a mod b is : "<<fmod(a,b)<<endl;
    
    return 0;
    
}