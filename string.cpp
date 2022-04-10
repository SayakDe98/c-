/* strings have multiple characters in it

CHARACTER                   STRINGS
1)Need to know              1)No need to know the size beforehand.
the size beforehand.    

2)Operations like append,       2)Operations like append and concatenate take less memory.
concatenate take more memory.
3)No terminating extra character.   3)Terminates with '\0'
*/

#include<iostream>
#include<string>    //this header file contains all functions of strings
using namespace std;

int main()
{
    string str;//string is the data type of string, str is the identifier of string

    cin>>str;//inputs a string
    cout<<str;//outputs a string till the string reaches space,like if input is sayak is coding,output will be sayak
    return 0;
}

