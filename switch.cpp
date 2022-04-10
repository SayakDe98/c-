#include<iostream>
using namespace std;

int main()
{
    char button;
    cout<<"Input a character:"<<endl;
    cin>>button;

    if(button=='a')
        cout<<"Hello"<<endl;
    else if(button=='b')
        cout<<"Namaste"<<endl;
    else if(button=='c')
        cout<<"Ciao"<<endl;
    else if(button=='d')
        cout<<"Salut"<<endl;
    else if(button=='e')
        cout<<"Nomoskar"<<endl;
    else
        cout<<"I am still learning new languages";

    return 0;    
}