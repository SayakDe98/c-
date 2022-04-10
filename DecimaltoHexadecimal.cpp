#include<bits/stdc++.h>
using namespace std;

string DecimaltoOctal(int n)
{
    int base=1;
    string ans="";

    while(base<=n)
    {
        base*=16;
    }

    base/=16;//since we multiplied base with 16 so we divide with 16 at end

    while(base>0)
    {
        int lastDigit=n/base;
        n-=lastDigit*base;
        base/=16;
        
        if(lastDigit<=9)
            ans=ans+to_string(lastDigit);//we are appending
        
        else
        {
            char c='A'+lastDigit-10;//c is temp variable
            ans.push_back(c);
        }
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