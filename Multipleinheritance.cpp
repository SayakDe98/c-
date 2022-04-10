#include<iostream>
using namespace std;

class Base1
{
    protected:
        int base1;
    
    public:
        void set_base1(int a)
        {
            base1=a;
        }
};

class Base2
{
    protected:
        int base2;
    
    public:
        void set_base2(int a)
        {
            base2=a;
        }
};

class Derived:  public Base1    ,   public Base2
{
    public:
        int base3;

        void set_base3(int a)
        {
            base3=a;
        }

        void show()
        {
            int sum=base1+base2+base3;

            cout<<"The value of base 1 is : "<<base1<<endl;
            cout<<"The value of base 2 is : "<<base2<<endl;
            cout<<"The value of base 3 is : "<<base3<<endl;
            cout<<"The sum of these values is :"<<base1+base2+base3<<endl;
        }
};

int main()
{
    Derived d;
    d.set_base1(2);
    d.set_base2(3);
    d.set_base3(5);
    d.show();
}