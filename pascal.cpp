#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact=1;

    int i;

    for(i=2;i<=n;i++)
        fact=fact*i;

    return fact;
}

int main()
{
    int n;
    
    cin>>n;

    int i,j;

    int number;

    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++) //since columns range from 0 to row no
        {
            number=factorial(i)/(factorial(j)*factorial(i-j));
            cout<<number<<" ";
        }
        cout<<endl;
    }

    return 0;
}