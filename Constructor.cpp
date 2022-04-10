#include<iostream>
using namespace std;

class Complex
{   
    int a,b;
    public:
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    //It is used to initialize the objects of its class
    //It is automatically invoked whenever an object is created
        Complex();

        void Print()
        {
            cout<<"The complex number is:"<<a<<"+"<<b<<"i"<<endl;
        } 
    
};

Complex ::Complex()//constructor which doesnt accept any parameters is default constructor and this is a default constructor
{
    a=10;//if we dont enter these values then compiler by default will put in garbage value.
    b=9;//if we dont enter these values then compiler by default will put in garbage value.
}
int main()
{
    Complex c;
    c.Print();//we can also create multiple objects and print same thing
    return 0;
    
}
/*
Properties of Constructors:
1.It should be declared in the public section of the class.
2.They areautomatically invoked whenever the object is created.
3.They cannot return values and do not have return types.
4.It can have default arguments.
5.We cannot refer to their address.
*/