/*
pointer arithmetic:
    address new=address old + i*(sizeofdatatype)
*/
#include<iostream>
using namespace std;
int main()
{
    int arr[]={23,45,69,100};

    int *p=arr;
    //pointer arithmetic by pointer dereferencing:

    cout<<"Marks at position 0:"<<*p<<endl;//*p gives value at position 0
    cout<<"Marks at position 1:"<<*(p+1)<<endl;//*p gives value at position 1
    cout<<"Marks at position 2:"<<*(p+2)<<endl;//*p gives value at position 2
    cout<<"Marks at position 3:"<<*(p+3)<<endl;//*p gives value at position 3

    cout<<*(p++)<<endl;//gives value at 0th position but post increment
    cout<<*p<<endl;//gives value at p+1 since p++ done before
    cout<<*(++p)<<endl;//points to 2nd last value
    return 0;
    
}