#include<bits/stdc++.h>
using namespace std;

int sum(int num)
{
    int ans=0;
    
    ans=(num*(num+1))/2;

    return ans;
}

int32_t main()
{
    int n;
    cin>>n;

    cout<<sum(n);
    return 0;
}