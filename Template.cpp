/*

program to demonstrate the need of templates
*/
#include<iostream>
using namespace std;

class vector
{
    public:
    int *arr;
    int size;

    vector(int m)
    {
        size=m;
        arr= new int[size];
    }


    int DotProduct(vector &v)
    {
        int d=0;
        for(int i=0;i<size;i++)
        {
            d+=this->arr[i]*v.arr[i];
        }

        return d;
    }
};

int main()
{
    vector v1(3);
    v1.arr[0]=1.2;
    v1.arr[1]=2.1;
    v1.arr[2]=3.2;

    vector v2(3);
    v2.arr[1]=0.2;
    v2.arr[0]=1.2;
    v2.arr[2]=3.4;

    int a=v1.DotProduct(v2);
    cout<<a<<endl;

    return 0;
}
/*
In the last tutorial, we learnt about what a template is, why a template is used in programming and what its syntax is. Let's give ourselves a quick revision of everything about templates.

Long story short, a template does the same thing to a class, what a class does to the objects. It parametrizes the data type hence making it easy for us to use different classes without having to write the whole thing again and again, violating the DRY rule. Templates furthermore give our program a generic view, where declaring one template suffices the task.

Today, we’ll learn to make a program using templates to give you a better understanding about its uses. I'll make the process effortless for you to learn, so, you stay calm and keep learning.

Now suppose we have two integer vectors and we want to calculate their Dot Product. This part should not be troublesome since we have learnt pretty well the use of classes and constructors. We had learnt to write the code like the one mentioned below. 


Understanding the code below to calculate the DotProduct of two integer vectors:

Here we declare a class vector, with an integer pointer arr.
 We declared an integer variable to store the size.
We made the constructor for the integer vector. These things should be unchallenging for you by now as they have been already taught. 
We then wrote a function which returns an integer value, to calculate the Dot Product and named it dotProduct which will take a vector as a parameter.
We traversed through the vectors multiplying their corresponding elements and adding it to the sum variable named d.
We finally returned it to the main.
And the output we received is this: 
*/