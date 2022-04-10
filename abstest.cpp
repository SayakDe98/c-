#include<iostream>

using namespace std;

class implementabstraction
{

    private:
    int a,b;

    public:
    void set(int x,int y)
    {   
        
        a=x;
        b=y;
    }

    void display()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};

int main()
{
    implementabstraction obj;
    obj.set(20,40);
    obj.display();

    return 0;
}