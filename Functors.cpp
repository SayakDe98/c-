#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {1,22,0,222,45,98};
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    sort(arr , arr+5);//we are sorting upto 5th postion(4th index) and not 5th index so last element will be unsorted.
    cout<<"\nAfter sorting except last element"<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}