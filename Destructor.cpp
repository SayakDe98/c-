/*
A destructor is a type of function which is called when the object is destroyed.
 Destructor never takes an argument nor does it return any value. 

 1st global variable “count” is initialized.
2nd we created a “num” class.
3rd default constructor of the “num” class is defined which has no parameters and does increment in the variable “count” and prints its value. 
The main thing to note here is that every time the new object will be created this constructor will run.
4th destructor of the “num” class is defined. The destructor prints the value of the variable “count” and decrement in the value of “count”. 
The main thing to note here is that every time the object has been destroyed this destructor will run.

1st object “n1” is created of the “num” data type. The main thing to note here is that when the object “n1” is created the constructor will run.
2nd inside the block two objects “n2” and “n3” are created of the “num” data type.
The main things to note here are that when the objects “n2” and “n3” are created the constructor will run for both objects and when the block ends the destructor will run for both objects “n2” and “n3”.
3rd when the program ends the destructor for the object “n1” will run.

As shown in figure 1, first the constructor for the object “n1” was called;
 second the constructor for the objects “n2” and “n3” was called; third the destructor
  was called for the objects “n2” and “n3”; at the end destructor for the object “n1” was called.
*/
#include<iostream>
using namespace std;

int count=0;

class Num
{
    public:
            Num()
            {
                count++;
                cout<<"This is time constructor is called for object "<<count<<endl;   
            }

            ~Num()
            {
                cout<<"This is the time destructor is called for object "<<count<<endl;
                count--;
                
            }
};

int main()
{
    cout<<"This is inside main function"<<endl;
    cout<<"We are going to create object 1"<<endl;
    Num n1;
    {
        cout<<"We have now entered inside a block"<<endl;
        cout<<"We are going to create two objects (2 and 3)"<<endl;
        Num n2,n3;
        cout<<"We are now going to exit this block"<<endl;
    }
    cout<<"We are back in the main function"<<endl;
    
    return 0;
}