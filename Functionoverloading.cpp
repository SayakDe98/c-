#include<iostream>
using namespace std;

int Sum(int a,int b)
{
    cout<<"This function has two arguments"<<endl;
    return a+b;
}

int Sum(int a,int b,int c)
{
    cout<<"This function has three arguments"<<endl;
    return a+b+c;
}

int main()
{
    cout<<"The Sum of 3 and 6 is :"<<Sum(3,6)<<endl;
    cout<<"The Sum of 3,6 and 8 is :"<<Sum(3,6,8)<<endl;
    return 0;
    
}