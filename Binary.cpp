#include<iostream>
#include<string>
using namespace std;

class Binary
{
    string s;//by default data members and member functions are private
    
    public:
            void input(void);
            void chk_bin(void);
            void display(void);
            void OnesComplement(void);

};

void Binary :: input(void)
{
    cout<<"Enter the binary number:"<<endl;
    cin>>s;
}

void Binary :: chk_bin(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0'&& s.at(i)!='1')
        {
            cout<<"Invalid binary number format "<<endl;
            exit(0);
        }
    }
}


void Binary :: display(void)
{
    for(int i=0;i<s.length();i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}

void Binary :: OnesComplement(void)
{
    chk_bin();
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='1')
            s.at(i)='0';

        else 
            s.at(i)='1';
    }
}

int main()
{
    Binary binobj;
    binobj.input();
    binobj.chk_bin();
    binobj.display();
    binobj.OnesComplement();
    binobj.display();
    
    return 0;
    
}

// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions