#include<iostream>
using namespace std;

int main()
{
    float n1,n2;//two no's n1 and n2 with decimal values
    cout<<"enter two numbers:"<<endl;
    cin>>n1>>n2;
    char op;
    cout<<"enter an operator:"<<endl;
    cin>>op;

    switch(op)
    {
        case '+':
                cout<<n1+n2<<endl;
                break;
        case '-':
                cout<<n1 - n2<<endl;
                break;
        case '*':
                cout<<n1 * n2<<endl;
                break;
        case '/':
                cout<<n1 / n2<<endl;
                break;
        default:
                cout<<"Enter another operator"<<endl;
                break;
    }

    return 0;
}