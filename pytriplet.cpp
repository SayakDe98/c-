#include<bits/stdc++.h> // in C++ It is basically a header file that includes every standard library. In programming contests, using this file is a good idea, when you want to reduce the time wasted in doing chores; especially when your rank is time sensitive.
using namespace std;

bool pytriplet(int x, int y, int z)
{
    int a=max(x,max(y,z));

    int b,c;

    if(a==x)
    {
        b=y;
        c=z;
    }

    else if(a==y)
    {
        b=x;
        c=z;
    }

    else
    {
        b=x;
        c=y;
    }

    if(a*a==b*b+c*c)
        return true;
    
    else
        return false;
}

int32_t main()  // int32_t provides exact 32 bit integer. This is important because you can port your applications to different platforms without rewriting algorithm (if they will compile and yes, int is not always 16 or 32 or 64 bit wide
{
    int x,y,z;

    cin>>x>>y>>z;

    if(pytriplet(x,y,z))
        cout<<"Pythagorian triplet";
    
    else
        cout<<"not Pythagorian triplet";

    return 0;
}