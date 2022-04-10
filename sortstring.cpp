#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string s="nincompoop";
    sort(s.begin() , s.end());//we get starting iterator by using s.begin() and ending iterator by using s.end(),sorting algortihm is used to sort the string in ascending order
    cout<<s<<endl;
    
    
    
    return 0;
}