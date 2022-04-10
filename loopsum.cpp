#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int counter;//we are initializing  counter here
    int sum=0;
    for(counter=1;counter<=n;counter++)
        sum=sum+counter;
    
    cout<<"Sum:"<<sum<<endl;

    return 0;
}