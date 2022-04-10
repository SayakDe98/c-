#include<iostream>
using namespace std;

class BaseClass
{
    public:
        int var_base=1;

        virtual void display()//this means if a pointer of data type BaseClass points to DerivedClass's member function then it will run only the member function of derived class an wont show any error and doesnt run display() of base class.It overwrites default behaviour
        {
            cout<<"This is the Base method/function inside Base Class.The value of var_base is:"<<var_base<<endl;
        }
};

class DerivedClass:public BaseClass
{
    public:
        int var_derived=2;

        void display()
        {
            cout<<"This is inside Derived Class,the value of var_base is:"<<var_base<<endl;
            cout<<"This is inside Derived class,the value of var_derived is:"<<var_derived<<endl;
        }
};

int main()
{
    BaseClass * Base_class_pointer;
    BaseClass obj_Base_class;
    DerivedClass obj_Derived_class;
    Base_class_pointer=&obj_Derived_class;
    Base_class_pointer->display();

    return 0;
    
}
/*
A member function in the base class which is declared using virtual keyword is called virtual functions. 
They can be redefined in the derived class.
We created a class “BaseClass” which contains public data member “var_base” which has the value “1” 
and member function “display”. The member function “display” will print the value of data member “var_base”
We created another class “DerivedClass” which is inheriting “BaseClass” 
and contains data member “var_derived” which has the value “2” and member function “display”.
 The member function “display” will print the values of data members “var_base” and “var_derived”

 We created a pointer “base_class_pointer” of the data type “Baseclass”
Object “obj_base” of the data type “BaseClass” is created.
Object “obj_derived” of the data type “DerivedClass” is created
Pointer “base_class_pointer” of the base class is pointing to the object “obj_derived” of the derived class
The pointer “base_class_pointer” is pointed to the object “obj_derived” of the derived class.
The function “display” is called using the pointer “base_class_pointer” of the base class.
The main thing to note here is that if we don’t use the “virtual” keyword with the “display” function of the base class 
then beside of the point that we have pointed our base call pointer to derived class object still the compiler 
would have called the “display” function of the base class because this is its default behavior as we have seen 
in the previous tutorial.

But we have used the “virtual” keyword with the “display” function of the 
base class to make is virtual function so when the display function is called 
by using the base class pointer the display function of the derived class will run
 because the base class pointer is pointing to the derived class object.

 Run time polymorphism is achieved here.
 The binding of objects and functions is done at run time if we use virtual function.
*/
