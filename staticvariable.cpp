#include<iostream>
using namespace std;

int sumandpdt(int a,int b)
{
    static int c=0;//this executes only once
    c=c+1;//next time the function runs the value of c gets retained
    return a+b*c;
}


int main()
{
    int a=9,b=2;

    cout<<"Answer:"<<sumandpdt(a,b)<<endl;
    return 0;
    
}
/*Static variables in a Function: When a variable is declared as static, 
space for it gets allocated for the lifetime of the program. 
Even if the function is called multiple times, 
space for the static variable is allocated only once 
and the value of variable in the previous call 
gets carried through the next function call. 
This is useful for implementing coroutines in C/C++ 
or any other application where previous state of function needs to be stored.

You can see in the above program that the variable count is declared as static. So, its value is carried through the function calls. The variable count is not getting initialized for every time the function is called.
As a side note, Java doesn’t allow static local variables in functions.
*/