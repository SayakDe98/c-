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

/*
Class objects as static: Just like variables, objects also when declared as static have a scope till the lifetime of program.
Consider the below program where the object is non-static.

// CPP program to illustrate
// when not using static keyword
#include<iostream>
using namespace std;
  
class GfG
{
    int i;
    public:
        GfG()
        {
            i = 0;
            cout << "Inside Constructor\n";
        }
        ~GfG()
        {
            cout << "Inside Destructor\n";
        }
};
  
int main()
{
    int x = 0;
    if (x==0)
    {
        GfG obj;
    }
    cout << "End of main\n";
}
Output:

Inside Constructor
Inside Destructor
End of main
In the above program the object is declared inside the if block as non-static. So, the scope of variable is inside the if block only. So when the object is created the constructor is invoked and soon as the control of if block gets over the destructor is invoked as the scope of object is inside the if block only where it is declared.
We saw the change in output if we declare the object as static in the uncommented code.
*/