#include<iostream>
using namespace std;

class A
{
    public:
        int a=10;
    A()
    {
        cout<<"a = "<<a<<endl;
    }
};

class B:public virtual A
{

};

class C:virtual public A
{

};

class D:virtual public B,public virtual C
{

};

int main()
{
    D obj;
    obj.a;

    return 0;
}

/*
Virtual base classes are used in virtual inheritance in a way of preventing
 multiple “instances” of a given class appearing in an inheritance hierarchy
  when using multiple inheritances.
  To resolve this ambiguity when class A is inherited in both class B and class C,
   it is declared as virtual base class by placing a keyword virtual

   Note: virtual can be written before or after the public.
    Now only one copy of data/function member will be copied to class C and
     class B and class A becomes the virtual base class.
Virtual base classes offer a way to save space and avoid 
ambiguities in class hierarchies that use multiple inheritances. 
When a base class is specified as a virtual base, it can act as an 
indirect base more than once without duplication of its data members.
A single copy of its data members is shared by all the base classes that use virtual base.

Explanation :The class A has just one data member a which is public.
 This class is virtually inherited in class B and class C. 
 Now class B and class C becomes virtual base class and no duplication of data member a is done.
 */