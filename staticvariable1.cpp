#include<iostream>

using namespace std;

class GFG
{
    public:
        static int i;
        GFG()
        {
            //does nothing
        }
};

int GFG::i=1;

int main()
{
    GFG obj;
    cout<<obj.i;
    return 0;
}
/*
// C++ program to demonstrate static
// variables inside a class
  
#include<iostream>
using namespace std;
  
class GfG
{
   public:
     static int i;
      
     GfG()
     {
        // Do nothing
     };
};
  
int main()
{
  GfG obj1;
  GfG obj2;
  obj1.i =2;
  obj2.i = 3;
    
  // prints value of i
  cout << obj1.i<<" "<<obj2.i;   
}
You can see in the above program that 
we have tried to create multiple copies
 of the static variable i for multiple objects.
  But this didn’t happen.
   So, a static variable inside 
   a class should be 
   initialized explicitly 
   by the user using the class name and scope resolution operator outside the class 
   as shown in the uncomented program
*/