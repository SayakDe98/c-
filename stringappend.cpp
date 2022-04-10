#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1="fam",s2="ily";
    s1.append(s2);//Here s2 is getting appened to s1 this is same as s1+s2
    cout<<s1<<endl;
    
    return 0;
}