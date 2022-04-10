#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s="nincompoop";
    cout<<"Before:"<<s<<endl;
    s.erase(3,2);//erases from 3rd position, 2 letters
    cout<<"After:"<<s<<endl;
    
    return 0;
}