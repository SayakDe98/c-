#include<iostream>
using namespace std;
int getBit(int n,int pos)//returns 1 if 1 is present in pos or else 0
{
    return ((n&(1<<pos))!=0);
    
}

int setBit(int n,int pos)//sets the bit at position pos as 1  and returns the new number after setting 1 at position pos
{
    return (n|(1<<pos));
    
}

int resetBit(int n,int pos)//sets(clears) the bit at position pos as 1  and returns the new number after setting 1 at position pos
{
    int mask =~(1<<pos);//1's complement
    return (n&mask);

}

int updateBit(int n,int pos,int value)//makes a bit 1 or 0 according to user input.this can be done by reset bit+ set bit 
{
    int mask = ~(1<<n);
    n=n&mask;
    return (n|value<<pos);
}
int main()
{
    cout<<getBit(5,2)<<endl;
    cout<<setBit(5,1)<<endl;
    cout<<resetBit(5,2)<<endl;
     cout<<updateBit(5,1,1)<<endl;
    return 0;
    
}