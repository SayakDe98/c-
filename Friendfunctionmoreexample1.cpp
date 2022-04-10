#include<iostream>
using namespace std;

class B;//forward declaration

class A
{
    int num1;
    friend void Swap(A &, B &);
    public:
        void get_num1(int a)
        {
            num1=a;
        }

        void print_num1()
        {
            cout<<num1<<endl;
        }
};

class B
{
    int num2;
    friend void Swap(A &, B &);
    public:
        void get_num2(int a) 
        { 
            num2 = a;
} 
    void print_num2()
    {
         cout << num2 << endl;
    }
};

void Swap(A &x , B &y)//if we use just x , y then we just copy the variables then we wont be able to swap
{
    int temp;
    temp=x.num1;
    x.num1=y.num2;
    y.num2=temp;
}

int main()
{
    A o1;
    o1.get_num1(21);
    B o2;
    o2.get_num2(33);
    Swap(o1,o2);
    cout<<"num1 after swapping is :"<<endl;
    o1.print_num1();
    cout<<"num2 after swapping is :"<<endl;
    o2.print_num2();
    return 0;

}

/*
1st object “a1” of the data type “X” is declared
2nd function “setValue” is called by the object “a1” and the value “3” is passed
3rd object “b1” of the data type “Y” is declared
4th function “setValue” is called by the object “b1” and the value “15” is passed
5th function “add” is called and the objects “a1” and “b1” are passed to it. The function “add” will add the values of both objects and print them.

1st class “c2” is declared at the top which is known as forward declaration to let the compiler know that this class is defined somewhere in the program.
2nd class “c1” is defined which consists of private data member “val1” and friend function “exchange” which takes reference variables “c1” and “c2” as parameters. The public member function “indata” is defined which assigns the value to the private data member “val1” and the function “display” prints the value of the data member “val1”.
3rd class “c2” is defined which consists of private data member “val2” and friend function “exchange” which takes reference variables “c1” and “c2” as parameters. The public member function “indata” is defined which assigns the value to the private data member “val2” and the function “display” prints the value of the data member “val2”.
4th function “exchange” is defined which swap the values.

1st object “oc1” of the data type “c1” is declared
2nd object “oc2” of the data type “c2” is declared
3rd function “indata” is called by the object “oc1” and the value “34” is passed
4th function “indata” is called by the object “oc2” and the value “67” is passed
5th function “exchange” is called and the objects “oc1” and “oc2” are passed to it. The function “exchange” will swap both values and
6th function “display” is called by the objects “oc1” and “oc2” which will print their values.
*/