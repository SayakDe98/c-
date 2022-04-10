#include<iostream>
using namespace std;

void display(const char *c)//the value of constant doesnt change in the whole function
{
    cout<<c;
}

int main()
{
    char c;
    cin>>c;
    return 0;
    
}