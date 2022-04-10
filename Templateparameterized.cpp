#include<iostream>
using namespace std;

template <class T1 = int , class T2 = float , class T3 = char>//parameterized templates
class Z
{
    public:
    T1 x;
    T2 y;
    T3 z;
    Z(T1 a , T2 b , T3 c)
    {
        x = a;
        y = b;
        z = c;
    }

    void display()
    {
        cout<<"x = "<<x<<endl<<"y = "<<y<<endl<<"z = "<<z<<endl;
    }
};

int main()
{
    Z<> obj1(10 , 90.6 , 'L');

    obj1.display();

    Z<char,int,double> obj2('0' , 66 , 45.98 );
    cout<<endl;
    obj2.display();

    return 0;
}

/*
So far, we have already covered the C++ templates with single parameters. In the last tutorial, we learnt about templates with multiple parameters, when it comes to handling different data types of two or more containers. 

Today, we’ll be learning a very easy yet powerful attribute of templates, its ability to have default parameters. Its ability to have default specifications about the data type, when it receives no arguments from the main.

 

So, let's start by making a program manifesting the use of default parameters in a C++ template. Refer to the code snippet below and follow the steps:

We’ll start by constructing a class named Harry.
We’ll then define a template with any number of arguments, let three, T1, T2, and T3. If you remember, we had this feature of specifying default arguments for functions, similarly we’ll mention the default parameters, let, int, float and char for T1, T2 and T3 respectively.
This ensures that if the user doesn’t put any data type in main, default ones get considered. 
In public, we’ll  define variables a, b and c of the variable data types T1, T2 and T3. And build their constructors. 
The constructor accepts the values featured by the main, and assigns them to our class variables a, b and c. If the user specifies the data types along with the values, the compiler assigns them to T1 , T2 and T3, otherwise gives them the default ones, as specified while declaring the template itself.
We’ll then create a void function display, just to print the values the user inputs.

Firstly, we’ll create an object, let's name it h, of the class Harry. And we’ll pass into it three values, an int, a float and a char, suppose 4, 6.4 and c respectively. Now since we have not specified the data types of the values we have just entered, the default data types, int, float and char would be considered. 
We’ll then display the values, which you’ll be seeing when we run the same.
And then we’ll create another object g, of the class Harry but this time, with the data types of our choice. Let’s specify them to be float, char and char.
We can then pass some values into it, suppose 1.6, o, and c and call the display function again.
These objects are sufficient to give us the main concept behind using a default parameter and the variety of classes we could make via this one template.

We’ll now refer to the output the above codes combinedly gave. As you can see below, it worked all fine. Had we not specified the default parameters; the above program would have thrown an error. Thanks to this feature of C++ templates.
*/