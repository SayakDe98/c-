#include<iostream>
using namespace std;

class A
{
    int a;

    public:
        void setData(int a)
        {
            this->a=a;//this is a keyword which is a pointer which points to the object which invokes(call/execute) the member function
        }//in c++ priority is given to local variables
        //if we would have taken parameter as int a1 and then inside the method if we would have written a=a1;it means we were implicitly calling "this" pointer.As C++ supports implict "this" pointer so we dont have to write "this " pointer if we do a=a1;
        //as we are using same name for parameter and variable hence we have to call "this" pointer explicitly.

        void getData()
        {
            cout<<"The value of a is : "<<a<<endl;
        }
};

int main()
{
    A a;
    a.setData(5);
    a.getData();
    
    return 0;
    
}