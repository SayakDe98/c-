#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n>10)
        cout<<"Number greater than 10"<<endl;
    else if(n<10)
        cout<<"Number less than 10"<<endl;
    else
        cout<<"Number equal to 10"<<endl;

    return 0;
}