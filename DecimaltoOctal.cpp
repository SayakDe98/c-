#include<bits/stdc++.h>
using namespace std;

int DecimaltoOctal(int n)
{
    int base=1;
    int ans=0;

    while(base<=n)
    {
        base*=8;
    }

    base/=8;//since we multiplied base with 8 so we divide with 8 at end

    while(base>0)
    {
        int lastDigit=n/base;
        n-=lastDigit*base;
        base/=8;
        ans=ans*10+lastDigit;
    }

    return ans;
    
}

int32_t main()
{
    int n;
    cin>>n;

    cout<<DecimaltoOctal(n)<<endl;

    return 0;
}