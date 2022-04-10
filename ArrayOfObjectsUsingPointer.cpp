#include<iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

    public:
        void setData(int a,float b)
        {
            id = a;
            price = b;
        }

        void getData()
        {
            cout<<"The ID of the item is : "<<id<<endl;
            cout<<"The price of the item is : "<<price<<endl;
        }
};

int main()
{
    int size=3;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;//we are using a temporary pointer because once we have reached the last memory location during entering values of ShopItems in for loop,we have to again point to first(0th index) memory location for displaying the values of the ShopItems.

    int i;
    int y;
    float z;
    for(i=0;i<size;i++)
    {
        cout<<"Enter the ID and price of the "<<i+1<<"th Item is: "<<endl;
        cin>>y>>z;

        //(*ptr).setData(y,z);
        //The above line can also be coded using arrow operator instead of dot operator
        ptr->setData(y,z);
        ptr++;//we are doing this incremement because we need to point to next memory location.
    }

    for(i=0;i<size;i++)
    {
        cout<<"The ID and price of the "<<i+1<<"th Item is: "<<endl;
        //(*ptr).getData();
        //The above line can also be coded using arrow operator instead of dot operator
        ptrTemp->getData();
        ptrTemp++;//we are doing this so that we can point to next memory location.
    }

}