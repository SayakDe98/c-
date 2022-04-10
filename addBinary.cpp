#include<bits/stdc++.h>
using namespace std;

int reverse(int n)
{
    int ans=0;
    int lastdigit;

    while(n>0)
    {
        lastdigit=n%10;
        ans=ans*10+lastdigit;
        n/=10;
    }

    return ans;
}

int addBinary(int a,int b)
{
    int ans=0;
    int prevcarry=0;

    while(a>0 && b>0)
    {
        if(a%2==0&&b%2==0)//case 1 a,b=0
        {
            ans=ans*10+prevcarry;
            prevcarry=0;
        }

        else if((a%2==0 && b%2 ==1)||(a%2==1 && b%2 ==0))//case2 a=0,b=1 or a=1,b=0
        {
            if(prevcarry==1)
            {
            ans=ans*10+0;
            prevcarry=1;
            }
            else//case3:a,b=1
            {
                ans=ans*10+1;
                prevcarry=0;
            }

        }

        else
        {
           ans=ans*10+prevcarry;
           prevcarry=1;
        }

        a/=10;
        b/=10;

    }

    while(a>0)//when a has more no of bits than b
    {
        if(a%2==0)//if a=0
        {
            if(prevcarry==0)
            {
                ans=ans*10+0;
                prevcarry=0;
            }
            else//if prevcarry=1
            {
                ans=ans*10+1;
                prevcarry=0;
            }
        }

        else//if a=1
        {
            if(prevcarry==0)
            {
                ans=ans*10+1;
                prevcarry=0;
            }
            else//if prevcarry=1
            {
                ans=ans*10+0;
                prevcarry=1;
            }
        }
        a/=10;
    }

    while(b>0)//when b has more no of bits than a
    {
        if(b%2==0)//if b=0
        {
            if(prevcarry==0)
            {
                ans=ans*10+0;
                prevcarry=0;
            }
            else//if prevcarry=1
            {
                ans=ans*10+1;
                prevcarry=0;
            }
        }

        else//if b=1
        {
            if(prevcarry==0)
            {
                ans=ans*10+1;
                prevcarry=0;
            }
            else//if prevcarry=1
            {
                ans=ans*10+0;
                prevcarry=1;
            }
        }
        b/=10;
    }
    
    if(prevcarry==1)
        ans=ans*10+1;
    
    ans=reverse(ans);//we need this because we were appending in reverse direction
    return ans;
}

int32_t main()
{
    int a,b;
    cin>>a>>b;

    cout<<addBinary(a,b);

    return 0;
}