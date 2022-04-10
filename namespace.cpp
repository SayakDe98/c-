/*
NOTE for namespace std:As the same name can’t be given to multiple variables, functions, classes, etc. in the same scope.
So to overcome this situation namespace is introduced.

Namespaces allow us to group named entities that otherwise would have global scope into narrower scopes, giving them namespace scope. This allows organizing the elements of programs into different logical scopes referred to by names.
Namespace is a feature added in C++ and not present in C.
A namespace is a declarative region that provides a scope to the identifiers (names of the types, function, variables etc) inside it.
Multiple namespace blocks with the same name are allowed. All declarations within those blocks are declared in the named scope.
*/

/*
int main()
{
    int value;
    value=0;
    double value;//this will throw an error, that value is already defined earlier 
    value=0.0;

}
*/
/*
// Below we can see that more than one variables 
// are being used without reporting any error.
// That is because they are declared in the 
// different namespaces and scopes.
#include<iostream>
using namespace std;
namespace first
{
    int value=0;//variable declared inside namespace

}

double value =0.0;//global variable

int main()
{
    float value = 0.0f;//local variable
    cout<<first :: value <<endl;
    return 0;//since the main function is of integer data type so it must return an integer value
}
*/

/*

Namespaces allow us to group named entities that otherwise would have global scope into narrower scopes, giving them namespace scope. This allows organizing the elements of programs into different logical scopes referred to by names.
Namespace is a feature added in C++ and not present in C.
A namespace is a declarative region that provides a scope to the identifiers (names of the types, function, variables etc) inside it.
Multiple namespace blocks with the same name are allowed. All declarations within those blocks are declared in the named scope.
A namespace definition begins with the keyword namespace followed by the namespace name as follows:

Namespace declarations appear only at global scope.
Namespace declarations can be nested within another namespace.
Namespace declarations don’t have access specifiers. (Public or private)
No need to give semicolon after the closing brace of definition of namespace.
We can split the definition of namespace over several units.


*/
/*
#include<iostream>
using namespace std;

namespace ns1
{
    int value(){return 5;}
}

namespace ns2
{
    const double  d = 100;
    double value(){
        return 2*d;
    }
}

int main()
{
    cout<<ns1::value()<<endl;
    cout<<ns2::value()<<endl;
    cout<<ns2::d<<endl;

    return 0;
}
*/

/*
Following is a simple way to create classes in a name space


#include<iostream>
using namespace std;
namespace n1
{
    class geek
    {
        public:
            void display()
            {
                cout<<"n1 :: geek :: display()"<<endl;
            }
    };
}

int main()
{
    n1::geek obj;
    obj.display();
    return 0;
}

*/

/*
//class can also be defined outside namespace:

#include<iostream>
using namespace std;

namespace ns
{
    class geek;
}

class ns::geek
{
    public:
        void display()
        {
            cout<<"ns :: geek :: display()"<<endl;
        }

};

int main()
{
    ns::geek obj;
    obj.display();
    return 0;
}
*/
