#include<iostream>
using namespace std;

template <class T1 , class T2>
float Average(T1 a , T2 b)
{
    float average = (a+b)/2.0;
    return average;
}

template<class T>
float swapp(T &w , T &h)
{
    T temp = w ;
    w = h ;
    h = temp ;
}

int main()
{
    float avg = Average (5 , 2.7 );
    cout<<"Average of 5 and 2.7 is : "<<avg<<endl;
    printf("Average of 5 and 2.7 is : %.3f \n",avg);//to display upto 3 decimal places

    int a = 33 , b = 98;
    cout<<"Before swapping value of a is : "<<a<<endl;
    cout<<"Before swapping value of b is : "<<b<<endl;

    swapp(a,b);
    cout<<"After swapping value of a is : "<<a<<endl;
    cout<<"After swapping value of b is : "<<b<<endl;

    return 0;
    
}

/*
C++ Function Templates & Function Templates with Parameters | C++ Tutorials for Beginners #67
In this tutorial, we are wishing to learn how a function template works. Prior to this video, we have only talked about a class template and its functionalities. In class template we used to have template parameters which we, very often, addressed as a variable for our data types. 

Today, we’ll be interested in knowing what a function template does. So. let’s get ourselves on our editors. 


Suppose we want to have a function which calculates the average of two integers. So, this must be very easy for you to formulate. Look for the snippet below. 

We have declared a float function named funcAverage which will have two integers as its parameters, a and b.
We stored its average in a float variable avg and returned the same to the main.
Later we called this function by value, and stored the returned float in a float variable a and printed the same.
So this was the small effort we had to make to get a function which calculates the average of two integers.

But the effort we made here defining a single function for two integers increases several folds when we demand for a similar function for two floats, or one float and one integer or many more data type combinations. We just cannot repeat the procedure and violate our DRY rule. We’ll use function templates very similar to what we did when we had to avoid defining more classes. 

See what are the subtle changes we had to make, to make this function generic.

We’ll first declare a template with two data type parameters T1 and T2. And replace the data types we mentioned in the function with them. And that’s it. Our function has become general for all sorts of data types. Refer to the snippet below. 

Let’s call this function by passing into it two sorts of data types combination, first, two integers and then one integer and one float. And see if the outputs are correct.

So, this is how we utilize this powerful tool to avoid writing such overloaded codes. And this was all about function templates with single or multiple parameters. We covered them all in this tutorial. 
*/