#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    cin>>n1>>n2;

    int i,fact1,fact2;
    fact1=1;
    fact2=1;
    
    for(i=1;i<=n1;i++)
        fact1=fact1*i;

    for(i=1;i<=n2;i++)
        fact2=fact2*i;
    
    cout<<fact1<<" "<<fact2<<endl;

}