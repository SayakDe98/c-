/*
Useful classes to work with files in c++:
1. fstreambase
2. ifstream-->derived from fstreambase
3. ofstream-->derived from fstreambase

There are two ways of opening a file:
1.using constructor
2. using open function
*/

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string s="Hello!";
    //Opening files using constructor and writing into the same file
    //The below 2 lines are used to write to a file,here we wrote to Sample.txt
    ofstream out("Sample.txt");
    out<<s;

    string s1;
    //Opening files using constructor and reading from the same file
    ifstream in("Sample1.txt");
    //in>>s1;//this is used to read only one word from file
    getline(in,s1);//this is used to get an entire sentence from a single line,to get just the 2nd line of the file write getline(in,s1) again in next line
    
    cout<<s1<<endl;
    
    return 0;
    
}
