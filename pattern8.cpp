#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)//for rows traversal of upper part
    {
        for(int j=1;j<=i;j++)//for columns,for star printing ,i is row number
        {
            cout<<"*";//printing stars
        }

        int space= 2*n - 2*i;//for space 

        for(int j=1;j<=space;j++)
            cout<<" ";

        for(int j=1;j<=i;j++)//for columns,for star printing ,i is row number
        {
            cout<<"*";//printing stars
        }
        cout<<endl;//line break after each row to reach next line,this is also end of upper part
    }

    for(int i=n;i>=1;i--)//for rows traversal for lower part
    {
        for(int j=1;j<=i;j++)//for columns,for star printing ,i is row number
        {
            cout<<"*";//printing stars
        }

        int space= 2*n - 2*i;

        for(int j=1;j<=space;j++)
            cout<<" ";

        for(int j=1;j<=i;j++)//for columns,for star printing ,i is row number
        {
            cout<<"*";//printing stars
        }
        cout<<endl;//line break after each row to reach next line,this is also end of upper part
    }
    return 0;
}