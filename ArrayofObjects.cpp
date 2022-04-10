#include<iostream>
using namespace std;

class Employee
{
    int id;
    public:
        void setID()
        {
            cout<<"Enter the ID : "<<endl;
            cin>>id;
        }

        void getID()
        {
            cout<<"The ID of the employee is : "<<id<<endl;
        }

};

int main()
{
    Employee ep[4];
    for(int i=0;i<4;i++)
    {
        ep[i].setID();
        ep[i].getID();
    }

    return 0;
}