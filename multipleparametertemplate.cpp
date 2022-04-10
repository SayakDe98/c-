#include<iostream>
using namespace std;

template <class T1 , class T2>//comma seperated(multiple parameter) template
class multipletemplate
{
    public:
        T1 data1;
        T2 data2;

        multipletemplate(T1 a,T2 b)
        {
            data1 = a;
            data2 = b;
        }

        void display()
        {
            cout<<this->data1<<endl<<this->data2<<endl;
        }
};

int main()
{
    multipletemplate<char,double> obj('J',3.23);//we can also use other data types like we can code like:multipletemplate<int,float> obj(1,2.33); we can use like this too
    obj.display();

    return 0;
}
/*
C++ Templates: Templates with Multiple Parameters | C++ Tutorials for Beginners #65
In the last tutorial, we had ample understanding of a template and its uses. We had created a template which would calculate the Dot Product of two vectors of any data type just by declaring a simple template parameterizing the data type we usually hardcoded in the classes. This already made our task easier but here we are, with our next tutorial focusing on how to handle multiple parameters in a template.

 

To give you a short overview of how templates work with multiple parameters, you can think of it as a function where you have that power to pass different parameters of the same or different data types. A simple template with two parameters would look something like this. The only effort it demands is the declaration of parameters. 

Code Snippet 1: Syntax of a template with multiple parameter

Suppose we have a class named myClass which has two data in it of data types int and char respectively, and the function embedded just displays the two. Fair enough, no big deal, we’ll construct our class something like this. The problem arises when we wish to have both our data types anonymous and to be put from the main itself.  You will be surprised to know that very subtle modifications in yesterday's code would do our task. Instead of declaring a single parameter T, we would declare two of them namely T1 And T2.

Code Snippet 2: Constructing a class

Refer to changes we have done below to parametrize both our data types using a single template: 

We have declared data1 and data2 with data types T1 and T2 respectively. 
We have applied the constructor filling the values we receive from the main into data1 and data2.
Finally, we have displayed both of them.

Code Snippet 2: Constructing a template with two parameters.

Let me now show you how this template works for different parameters. I’ll pass different data types from the main and see if it's flexible enough.

Firstly, we put an integer and a char,

So yes, this is functioning all good. 

And this was all about templates with multiple parameters, just don’t miss out the commas while defining the parameters in a template. And you can have 2, 3 or more of them according to your needs. Could you believe how luxurious it has become to work with customized data types? It is now you, who’ll decide what the data type of some variable in a class should be. It is no longer pre-specified.  It has given you some unimaginable power which, if you realise, can save you a lot of energy and time. 
*/