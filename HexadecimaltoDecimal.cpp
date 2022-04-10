#include<bits/stdc++.h>
using namespace std;

int HexadecimaltoDecimal(string n)
{
    int ans=0;//initializing ans=0 since we have to find sum Local variables have no defined value (and you may not use their values) until a value is first assigned, so it is necessary to provide an initial value via one of those two forms.
    int base=1;//this is used to help us get the powers of 16 like we initialize base=1 since 16 to the power of 0 is 1
    
    int s=n.size();//to find the size of n,we get it from string.h which is available in bits/stdc++.h
    for(int i=s-1;i>=0;i--)//loop from LSB to MSB
    {
        if(n[i]>='0' && n[i]<='9')//for 0 to 9 numbers only decimal present
            ans+=base*(n[i]-'0');//we are doing -0 because decimal starts from 0 
        else if(n[i]>='A'&&n[i]<='F')//for numbers greater than 9
            ans+=base*(n[i]-'A'+10);//+10 because A equivalent to 10,simlarly B equivalent to 11

        base*=16;//base=16 for hexadecimal
    }
    return ans;// an integer function return an int value provided by variable "ans"
}

int32_t main()
{
    string n;
    cin>>n;//inputs a binary number

    cout<<HexadecimaltoDecimal(n)<<endl;//sends the octal number to Hexadecimal to Decimal function the calculations occur in that function and returns the ans which gets printed here
    
    return 0;
}