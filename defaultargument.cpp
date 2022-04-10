#include<iostream>
using namespace std;

float moneyrecieved(int money, float factor=1.04)//factor is default argument 
{
    return money*factor;
}

int main()
{
    int money;
    cin>>money;
    cout<<"If you deposit "<<money<<" then at end of 1 year you will recieve "<<moneyrecieved(money)<<endl;
    cout<<"If you are vip and you deposit "<<money<<" then at end of 1 year you will recieve "<<moneyrecieved(money,1.1)<<endl;  
    return 0;
    
}
//default argument must be in right side and compulsory argument must be in left side