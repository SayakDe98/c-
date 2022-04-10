#include<iostream>
using namespace std;

class BaseClass
{
    public:
        int var_Base;

        void display()
        {
            cout<<"Base Class variable var_Base is : "<<var_Base<<endl;
        }
};

class DerivedClass : public BaseClass
{
    public:
        int var_Derived;
        
        void display()
        {
            cout<<"Base Class variable var_base is : "<<var_Base<<endl;
            cout<<"Derived Class variable var_derived is : "<<var_Derived<<endl;
            
        }

};

int main()
{
    BaseClass *Base_class_pointer;//creating a pointer of data type BaseClass
    BaseClass obj_Base;//creating an Object of data type BaseClass
    DerivedClass obj_Derived;//creating an Object of data type DerivedClass

    Base_class_pointer = &obj_Derived;//Base_pointer(BaseClass pointer)pointing to Derived class object

    Base_class_pointer->var_Base = 100;
    Base_class_pointer->display();

    Base_class_pointer->var_Base = 3333;
    Base_class_pointer->display();

    DerivedClass *Derived_class_pointer;
    Derived_class_pointer = &obj_Derived;
    Derived_class_pointer->var_Base=33;
    Derived_class_pointer->var_Derived = 2;
    Derived_class_pointer->display();
    
    
    return 0;
}

/*
Pointer to Derived Class in C++
In C++ we are provided with the functionality to point the pointer to derived class or base class. 

We created a class “BaseClass” which contains public data member “var_base” 
and member function “display”. The member function “display” will print the 
value of data member “var_base”
We created another class “DerivedClass” which is inheriting “BaseClass” 
and contains data member “var_derived” and member function “display”. 
The member function “display” will print the values of data members “var_base” and “var_derived”


We created a pointer “base_class_pointer” of the data type “Baseclass”.
Object “obj_base” of the data type “BaseClass” is created.
Object “obj_derived” of the data type “DerivedClass” is created
Pointer “base_class_pointer” of the base class is pointing to the object “obj_derived” 
of the derived class
By using the pointer “base_class_pointer” of the base class 
we have set the value of the data member “var_base” by “34”. 
The main thing to note here is that we cannot set the value 
of the derived class data member by using the base class pointer
 otherwise the compiler will throw an error.
The function “display” is called using a base class pointer. 
The main thing to note here is that the base class “display” function will run here.
Again by using the pointer “base_class_pointer” of the 
base class we have set the value of the data member “var_base” by “3400”
 which will update the previous value and the function “display” is called.
We created a pointer “derived_class_pointer” of the data type “DerivedClass”
Pointer “Derived_class_pointer” of the derived class is pointing to the
 object “obj_derived” of the derived class
By using pointer “Derived_class_pointer” of the derived class
 we have set the value of the data member “var_base” of the 
 base class by “9448”. The main thing to note here is that 
 this will not throw an error because we can set the value 
 of base class data member by using derived class pointer
  but we cannot set the value of derived class data member
   by using base class pointer
By using pointer “Derived_class_pointer” of the derived class 
we have set the value of the data member “var_derived” of the derived class by “98”.
The function “display” is called using a derived class pointer. 
The main thing to note here is that the derived class “display” function will run here.

*/