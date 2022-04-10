#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=n;i>=1;i--)//for rows
    {
        for(int j=1;j<=i;j++)//for star printing ,i is row number,print stars=row number
            cout<<"*";
        
        cout<<endl;//line break after each row
    }

    return 0;
}