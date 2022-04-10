#include<iostream>
using namespace std;

typedef struct employee
{
    int Eid;
    float Salary;
    char Echar;
}ep;

int main()
{
    ep Sayak;
    
    Sayak.Eid=1;
    Sayak.Salary=1000000;
    Sayak.Echar='c';

    ep Akash;

    Akash.Eid=2;
    Akash.Salary=200000;
    Akash.Echar='d';
    
    cout<<"Sayak's Eid="<<Sayak.Eid<<endl;
    cout<<"Sayak's Salary="<<Sayak.Salary<<endl;
    cout<<"Akash's Eid="<<Akash.Eid<<endl;
    cout<<"Akash's Salary="<<Akash.Salary<<endl;

    return 0;
}
//this is same as structure but typedef is used to define the name of struct employee as ep
