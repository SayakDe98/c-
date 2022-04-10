#include<iostream>
using namespace std;

int factorial(int num)
{
    int f=1,i;
    for(i=2;i<=num;i++)
    {
        f*=i;
    }
    
    

    return f;
}
int main()
{
    int n;
    cin>>n;

    int ans=factorial(n);
    cout<<ans;
    return 0;
}