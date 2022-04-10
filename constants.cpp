//constants: if we declare a variable as constant we ant change its value

#include<iostream>
using namespace std;
int main()
{
    const int a=55;
  //  a=45;//we will get an error since a is declared as constant
    cout<<a<<endl;
    return 0;
    
}