#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int original=n;
    int sum=0;
    
    while(n>0)
    {
        int lastdigit=n%10;
        sum+=lastdigit*lastdigit*lastdigit;
        n=n/10;
    }

    if(sum==original)
        cout<<"Armstrong Number"<<endl;
    else
        cout<<"Not armstrong"<<endl;

    return 0;
}