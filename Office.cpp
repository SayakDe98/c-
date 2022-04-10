#include<iostream>
using namespace std;

class Office
{
    int id;
    public:
        void setID(void);
        void getID(void);
};

void Office :: setID(void)
{
    cout<<"Enter the ID of employee:"<<endl;
    cin>>id;
}

void Office :: getID(void)
{
    cout<<"The ID of the empoyee is :"<<id<<endl;
}

int main()
{
    Office Sayak,Sam,Ron,Dan;
    Sayak.setID();
    Sayak.getID();
    //This is not possible to do if number of employee is very large.Then we have to use arrays to store the data.
    return 0;
    
}