#include<iostream>
using namespace std;

void swap(int* x, int* y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int x=2,y=1;
    
    cout<<"Before execution of swap:"<<endl;
    cout<<"x = "<<x<<" , y = "<<y<<endl;
    swap(&x,&y);
    cout<<"After execution of swap(Call by pointer):"<<endl;
    cout<<"x = "<<x<<" , y = "<<y<<endl;
    return 0;
    
}
//numbers are getting swapped