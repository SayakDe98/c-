#include<iostream>
using namespace std;

int c=45;//global variable

int main()
{
    int a,b,c;
    
    cin>>a>>b;

    c=a+b;

    cout<<"sum = "<<c<<endl;    
    cout<<"global c = "<<::c<<endl;//outputs the global variable c which is defined outside main function , "::" is scope resolution operator

    return 0;
    
}