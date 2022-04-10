#include<iostream>
using namespace std;

class Complex
{
    int real,imaginary;
    public:
        void set_Complex(int a , int b)
        {
            real=a;
            imaginary=b;
        }

        void get_complex()
        {
            cout<<"The real part of complex number is : "<<real<<endl;
            cout<<"The imaginary part of complex number is : "<<imaginary<<endl;
        }
};

int main()
{
    /*
    Complex c1;
    c1.set_Complex(1,4);
    c1.get_complex();
    */
    //The above can also be coded as:
    /*
    Complex *ptr=new Complex;//we are creating an object
    (*ptr).set_Complex(1,4);
    (*ptr).get_complex();
    */
    //the above can also be coded as:

    /*Complex *ptr=new Complex[4];//we are creating 4 objects,this is an array of objects
    (*ptr).set_Complex(1,4);
    (*ptr).get_complex();
    */

    //the above can also be coded as:
    //we can also use the arrow operator to do the above 2:
    /*
    Complex *ptr=new Complex;//we are creating an object
    ptr->set_Complex(1,4);//we used the arrow operator
    ptr->get_complex();//we used the arrow operator
    */

   //the above code can also be coded as:
   Complex *ptr=new Complex[4];//we are creating 4 objects,this is an array of objects
    ptr->set_Complex(1,4);
    ptr->get_complex();

    return 0;
    
}

/*
Pointer to objects in C++
As discussed before pointers are used to store addresses of variables which have data types like int, float, double etc. But pointer can also store the address of an object. An example program is shown below to demonstrate the concept of pointer to objects.

We created a class “Complex”, which contains two private data members “real” and “imaginary”.
The class “complex” contains two member functions “getdata” and “setdata”
The Function “setdata” will take two parameters and assign the values of parameters to the private data members “real” and “imaginary”
The Function “getdata” will print the values of private data members “real” and “imaginary”
In the main program object is created dynamically by using the “new” keyword and its address is assigned to the pointer “ptr”
The member function “setdata” is called using the pointer “ptr” and the values “1, 54” are passed.
The member function “getdata” is called using the pointer “ptr” and it will print the values of data members.

The main thing to note here is that we called the member function with pointers instead of object but still it will give same result because pointer is pointing to the address of that object.


Arrow Operator in C++
We created a class “Complex”, which contains two private data members “real” and “imaginary”.
The class “complex” contains two member functions “getdata” and “setdata”
The Function “setdata” will take two parameters and assign the values of parameters to the private data members “real” and “imaginary”
The Function “getdata” will print the values of private data members “real” and “imaginary”
In the main program object is created dynamically by using the “new” keyword and its address is assigned to the pointer “ptr”
The member function “setdata” is called using the pointer “ptr” with the arrow operator “->” and the values “1, 54” are passed.
The member function “getdata” is called using the pointer “ptr” with the arrow operator “->” and it will print the values of data members.
Array of objects is created dynamically by using the “new” keyword and its address is assigned to the pointer “ptr1”
The member function “setdata” is called using the pointer “ptr1” with the arrow operator “->” and the values “1, 4” are passed.
The member function “getdata” is called using the pointer “ptr1” with the arrow operator “->” and it will print the values of data members.
The main thing to note here is that we called the member function with pointers by using arrow operator “->” instead of the dot operator “.” but still it will give the same results.
*/