#include<bits/stdc++.h>
using namespace std;

int BinarytoDecimal(int n)
{
    int ans=0;//initializing ans=0 since we have to find sum Local variables have no defined value (and you may not use their values) until a value is first assigned, so it is necessary to provide an initial value via one of those two forms.
    int base=1;//this is used to help us get the powers of 2 like we initialize base=1 since 2 to the power of 0 is 1
    int y;//it is another temp variable to store the current LSB
    while(n>0)
    {
        y=n%10;//variable for storing LSB ,like for a number 127 we first store 7 then in next iteration we store 2 and in next iteration we store 1
        ans+=base*y;//this variable stores the decimal equivalent of the binary number
        base*=2;//this variable stores the powers of 2 so the base is 2 so we multiply by 2
        n/=10;//this is used for dividing the number since we already found the equivalent of the LSB of this iteration so we divide this number by 10 so that we can get next LSB of  in next iteration
    }

    return ans;// an integer function return an int value provided by variable "ans"
}

int32_t main()
{
    int n;
    cin>>n;//inputs a binary number

    cout<<BinarytoDecimal(n)<<endl;//sends the binary number to BinarytoDecimal function the calculations occur in that function and returns the ans which gets printed here
    
    return 0;
}