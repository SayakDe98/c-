#include<iostream>
using namespace std;

class Data
{
    int data1,data2,data3;
    public:
        Data(int x,int y=8,int z=4)//Constructor with default arguments : y=8,z=4
        {
            data1=x;
            data2=y;
            data3=z;
        }

        void PrintData();
};

void Data :: PrintData()
{
    cout<<"The data 1,data 2 and data 3 are respectively : "<<data1<<" , "<<data2<<" and "<<data3<<endl;
}

int main()
{
    Data d1(1);
    d1.PrintData();

    Data d2(4,3);
    d2.PrintData();

    Data d3(1,0,19);
    d3.PrintData();

    return 0;
    
}