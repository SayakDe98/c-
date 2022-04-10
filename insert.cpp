#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s="nincompoop";
    cout<<s<<endl;
    
    cout<<"lol is inserted in 3rd position:"<<s.insert(3,"lol")<<endl;// first we pass the index where we want to insert,then we pass the string
    
    return 0;
}