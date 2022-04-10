/* A copy constructor is a type of constructor that creates a copy of another object.
 If we want one object to resemble another object we can use a copy constructor.
  If no copy constructor is written in the program compiler will supply its own copy constructor.
  */

 #include<iostream>
 using namespace std;
 
 class Number
 {
     int a;

     public:
            Number()
            {
                a=0;
            }

            Number(int c)
            {
                a=c;
            }

            Number(Number &obj)
            {
                a=obj.a;
                cout<<"Copy Constructor called"<<endl;
            }

            void show()
            {
                cout<<"The value is : "<<a<<endl;
            }
 };

 
 int main()
 {
    Number x,y,z(100),z3;
  
   
    x.show();

    
    y.show();

    
    z.show();

   Number z1(z);//Copy constructor invoked
    z1.show();
    Number z2= z;//Copy constructor invoked
    z2.show();
    z3=z;//Copy Constructor not invoked
    z3.show();
     return 0;
     
 }