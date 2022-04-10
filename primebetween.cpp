#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    
    for(int num=a;num<=b;num++)
    {   
        int i;

        for(i=2;i<num;i++)
        {
            if(num%i==0)
                break;//as the num is not prime we get out of this loop
        }

        if(i==num) //if a number is getting completed it is a prime
            cout<<num<<endl;
    }

    return 0;
}