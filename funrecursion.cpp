#include<iostream>
using namespace std;

int fun(int x,int y)
    {
        if(x>1)
            fun(x-2,y+2);
        cout<<y;
        }
int main()
{
    int x=4,y=5;
    
    fun(x,y);

    

}