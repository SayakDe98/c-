#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n%2==0&&n%3==0)
        cout<<"Number divisible by 2 and 3"<<endl;
    else if(n%2==0)
        cout<<"Number is divisible by 2"<<endl;
    else if(n%3==0)
        cout<<"Number is divisible by 3"<<endl;
    else
        cout<<"Number is neither divisible by 2 nor 3"<<endl;

    return 0;
}