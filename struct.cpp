#include<iostream>
using namespace std;

struct employee
{   /* data */
    int Eid;
    float Salary;
    char Echar;
};

int main()
{
    struct employee Sayak;//employee named Sayak,now Sayak is a data type
    Sayak.Eid=1;
    Sayak.Salary=9999999;
    Sayak.Echar='c';

    cout<<"Sayak's salary is:"<<Sayak.Salary<<endl;
    cout<<"Sayak's Employee Id is:"<<Sayak.Eid<<endl;
    cout<<"Sayak's employee character is:"<<Sayak.Echar<<endl;
    return 0;
}
//struct is structure it is user defined data type ,we can make data types of my own like we made Sayak as a data type we can also make Akash as another data type