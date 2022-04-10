#include<iostream>
using namespace std;

template <class T>
class Sayak
{
    public:
        T data;

        Sayak(T a)
        {
            data = a;
        }

        void display();

};

template <class T>
void Sayak<T> :: display()
{
    cout<<data<<endl;
}

int main()
{
    Sayak<float> obj(8.5);
    cout<<obj.data<<endl;
    obj.display();

    return 0;
}

/*
So, since we have finished learning about the two template categories, we can now swiftly dive deep into if it's possible for a template function to get overloaded, and if yes, then how.

Before starting to know what an overloaded template function is, we’ll learn how to declare a template function outside a using the scope resolution operator, ‘::’. 


First, we’ll revise how to write a function inside the class by just following the snippet given below. 

We’ll declare a template, then a class named Sayak.
We’ll then define a variable data inside that class with variable data type T. 
We then make a constructor feeding the value received from the main to data. 
And then, we’ll write the function, display and write its code. 
This was an unchallenging task.

Code Snippet 1: Writing function inside the class

Here, we first write the function declaration in the class itself. Then move to the outside and use the scope resolution operator before the function and after the name of the class Harry along with the data type T. We must specify the function data type, which is void here. And it must be preceded by the template declaration for class T.

*/