#include<iostream>
using namespace std;

int main()
{
    int i,n;

    cin>>n;
    for(i=2;i<n;i++)                //when we write i<n means loop runs till n-1
    {
        if(n%i==0)
        {
            cout<<"Non prime"<<endl;
            break;
        }
    }

    if(i==n)
        cout<<"Prime"<<endl;
    return 0;
}