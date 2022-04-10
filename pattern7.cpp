#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int count=1;

    for(int i=1;i<=n;i++)//for rows traversal
    {
        for(int j=1;j<=i;j++)//for columns,for row number printing ,i is row number
        {
            cout<<count<<" ";//printing count because it is a number space for clarity
            count+=1;//can also do count++
        }

        cout<<endl;//line break after each row to reach next line
    }

    return 0;
}