#include<iostream>
using namespace std;

class GFG
{
    public:
        int i=0;
        GFG()
        {
            i=0;
            cout<<"Inside the constructor"<<endl;
        }

        ~GFG()
        {
            cout<<"Inside the destructor\n";
        }
};

int main()
{
    static int x=0;
    x=0;
    GFG obj;
    cout<<"Inside the main function\n";
    
    return 0;
    
}