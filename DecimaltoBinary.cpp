#include<bits/stdc++.h>
using namespace std;

int DecimaltoBinary(int n)
{
    int base=1;
    int ans=0;

    while(base<=n)
    {
        base*=2;
    }

    base/=2;//since we multiplied base with 2 so we divide with 2 at end

    while(base>0)
    {
        int lastDigit=n/base;
        n-=lastDigit*base;
        base/=2;
        ans=ans*10+lastDigit;
    }

    return ans;
    
}

int32_t main()
{
    int n;
    cin>>n;

    cout<<DecimaltoBinary(n)<<endl;

    return 0;
}