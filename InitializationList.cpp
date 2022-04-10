#include<iostream>
using namespace std;

class Test
{
    int a, b;
    public:
    Test(int i , int j):a(i),b(j)//initialization list
    {
        cout<<"Constructor called"<<endl;
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};

int main()
{
    Test t(4,6);

    return 0;
}
/*
Test(int i,int j):a(i),b(i+j) can be done
Test(int i,int j):a(i),b(2*j) can be done
Test(int i,int j):a(i),b(a+j) can be done
Test(int i,int j):b(i),a(b+i) cannot be done
*/
