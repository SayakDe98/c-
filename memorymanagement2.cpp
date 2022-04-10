#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size:"<<endl;
    cin>>size;

    int *ptr;
    
//we can also use *(arr+1)=12//where arr[0] is starting element then *(arr+1) is arr[1].
    ptr=new int[size];//lets dynamically allocate memory for whole array
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Element: "<<endl;
        cin>>ptr[i];
    }

    cout<<"The elements that you had entered:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Element: "<<ptr[i]<<endl;
    }

    delete [] ptr;//memory deallocated
    cout<<"The elements after deallocating the contigious block of memory is : "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Element: "<<ptr[i]<<endl;
    }
}