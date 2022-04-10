/*#include<iostream>
using namespace std;

class Base1
{
    public:
        void greet()
        {
            cout<<"Hi,how are you?"<<endl;
        }
};

class Base2
{
    public:
        void greet()
        {
            cout<<"Kemon achis?"<<endl;
        }
};

class Derived:public Base1, public Base2
{

};

int main()
{
    Derived d;
    d.greet();
    
    
    return 0;
    
}
output:
d.greet() is ambiguious because there are greet in Base1 and Base2 but the compiler doesnt know which one to use so this error is shown.

*/

/*
#include<iostream>
using namespace std;

class Base1
{
    public:
        void greet()
        {
            cout<<"Hi,how are you?"<<endl;
        }
};

class Base2
{
    public:
        void greet()
        {
            cout<<"Kemon achis?"<<endl;
        }
};

class Derived:public Base1, public Base2
{
    public:
        void greet()
        {
            Base2::greet();//by doing this we can output the greet of Base2,similarly if we do Base2::greet() instead of this then we get output of greet of Base1
            //thus ambiguity is resolved 
        }
};

int main()
{
    Derived d;
    d.greet();
    
    
    return 0;
    
}
*/

/*
#include<iostream>
using namespace std;

class Base1
{
    public:
        void greet()
        {
            cout<<"Hi"<<endl;
        }
};

class Base2
{
    public:
        void say()
        {
            cout<<"Nomoskar"<<endl;
        }
};

class Derived:public Base1, public Base2
{
    //as there is no say()function here so we use that of the base class
};

int main()
{
    Derived d;
    d.say();
    
    
    return 0;
    
}
*/

#include<iostream>
using namespace std;

class Base1
{
    public:
        void say()
        {
            cout<<"Hi,how are you?"<<endl;
        }
};

class Base2
{
    public:
        void greet()
        {
            cout<<"Kemon achis?"<<endl;
        }
};

class Derived:public Base1, public Base2
{
        public:
            void say()
            {
                cout<<"Use this!"<<endl;//as we have created say() inside Derived class and the object is of the derived class so this statement will be printed
            }
};

int main()
{
    Derived d;
    d.say();
    
    
    return 0;
    
}