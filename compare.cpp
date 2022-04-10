#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1="abc";
    string s2="xyz";
    cout<<s2.compare(s1)<<endl;//as we get positive value it means xyz is bigger than abc , if we do s1.compare then we get -1 means xyz is bigger than abc
    /*if we make both strings equal and compare with either we get output as 0*/
    
    return 0;
}