#include<iostream>
using namespace std;
int main()
{
    int a=3;
    int *b=&a;//the pointer b holds address of a. b points to integer
    //we can also do: int *b;b=&a;we get same thing
    cout<<"the address of a : "<<&a<<endl;//prints in output terminal the address where a was assigned in ram during code run.
    cout<<"the address of a : "<<b<<endl;//prints in output terminal the address where a was assigned in ram during code run.

    cout<<"The value of a : "<<a<<endl;//prints the value of a
    cout<<"The value at address b : "<<*b<<endl;//b has the address of a hence *b gives value of a which is equal to 3
    
    int **c;
    c=&b;//here pointer to pointer variable is c.c pointer stores address of b

    cout<<"The address of b : "<<&b<<endl;
    cout<<"The address of b : "<<c<<endl;
    cout<<"the value at address c : "<<*c<<endl;//gives the address of a which is stored in pointer b//we are dereferencing once
    cout<<"the value at (value at c) : "<<**c<<endl;//gives the value of a //we are dereferencing twice
    return 0;
    
}
/* Pointer is a data type which holds the address of other data types.
    "&" is (address of) operator

    After we write a c++ code.We run the code , this happens only after the code gets copied to the ram.
    Each variable gets a seperate address in ram.
    "*" is (value at) dereferencing of operator
*/
