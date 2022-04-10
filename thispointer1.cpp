#include<iostream>
using namespace std;

class A
{
    int a;

    public:
        A& setData(int a)
        {
            this->a=a;
            return *this;//we are returning this pointer means setData method returns an object
        }

        void getData()
        {
            cout<<"The value of a is : "<<a<<endl;
        }
};

int main()
{
    A a;
    a.setData(5).getData();//we can do like this because setData returns object , so we can write a.setData(some integer).getData();
   // a.getData();//now we dont need to write getData() explicitly as we have used a.setData(some integer).getData();
    
    return 0;
    
}