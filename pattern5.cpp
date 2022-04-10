#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)//for rows traversal
    {
        for(int j=1;j<=n;j++)//for printing space or star
        {
            if(j<=n-i)//i is row number
                cout<<"  ";
            else
                cout<<"* ";
        }    
            
        cout<<endl;//line break after each row
    }

    return 0;
}