#include<iostream>
using namespace std;
int main()
{
  float x=455;//original variable
  cout<<x<<endl;
  float &y=x;//y points to x hence y is reference variable
  cout<<y<<endl;//prints value of y which is same as value of x since y points to x
    return 0;
    
}
//reference variable is like calling same person by different names
//my name in aadhar is sayak,my calls me khutu,my father calls me babua and so on...