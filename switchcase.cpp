#include<iostream>
using namespace std;

int main()
{
    char button;
    cin>>button;

    switch(button)
    {
        case 'a':
                cout<<"Hello"<<endl;
                break;
        case 'b':
                cout<<"Namaste"<<endl;
                break;
        case 'c':
                cout<<"Ciao"<<endl;
                break;
        case 'd':
                cout<<"Salut"<<endl;
                break;
        case 'e':
                cout<<"Nomoskar"<<endl;
        default:
                cout<<"I am still learning new languages"<<endl;
                break;
    }

    return 0;
}