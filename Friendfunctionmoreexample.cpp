#include<iostream>
using namespace std;

class Y;//forward declaration to tell the compiler that class Y exists in the program.

class X
{
    int data;
    public:
        void get_data(int a)
        {
            data=a;
        }

        void print_data()
        {
            cout<<"The data is : "<<data<<endl;
        }

        friend void Sum(X,Y);

};

class Y
{
    int num;
    public:
        void get_num(int a)
        {
            num=a;
        }

        void print_num()
        {
            cout<<"num is : "<<num<<endl;
        }

        friend void Sum(X,Y);
};

void Sum(X o1, Y o2)
{
    cout<<"The sum of data and num is : "<<o1.data+o2.num<<endl;
}

int main()
{
    X obj1;
    obj1.get_data(20);

    Y obj2;
    obj2.get_num(23);

    Sum(obj1,obj2);
    
    return 0;
    
}

/*
Friend Functions in C++
As we have already discussed in previous lectures friend functions are those functions that can access the private data members of the other class.
1st class “Y” is declared at the top which is known as forward declaration to let the compiler know that this class is defined somewhere in the program.
2nd class “X” is defined which consists of private data member “data” and public member function “setValue” which assigns the value to the private data member “data”. At the end friend function “add” is declared.
3rd class “Y” is defined which consists of private data member “num” and public member function “setValue” which assigns the value to the private data member “num”. At the end friend function “add” is declared.
4th function “add” is defined which add the value of the objects of class “X” and “Y” and print it.


*/