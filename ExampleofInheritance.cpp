#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator
{    
       //protected:
        int a,b;
        
        public:
        
        void get_data_simple()
        {
            cout<<"Enter two numbers:"<<endl;
            cin>>a>>b;
        }

        void performOperationsSimple()
        {
            cout<<"The sum(+) of "<<a<<" and "<<b<<" is "<<a+b<<endl;
            cout<<"The difference(-) between "<<a<<" and "<<b<<" is "<<a-b<<endl;
            cout<<"The product(*) of "<<a<<" and "<<b<<" is "<<a*b<<endl;
            cout<<"The division(/) of "<<a<<" and "<<b<<" is "<<a/b<<endl;
        }
};

class ScientificCalculator
{
        int a,b;
        
        public:
        void get_data_scientific()
        {
            cout<<"Enter two numbers:"<<endl;
            cin>>a>>b;
        }
        
        void performOperationsScientific()
        {
            cout<<"The square root of "<<a<<" is "<<sqrt(a)<<endl;
            cout<<"The square root of "<<b<<" is "<<sqrt(b)<<endl;
            cout<<a<<" to the power of "<<b<<" is "<<pow(a,b)<<endl;
            cout<<"The sine of "<<a<<" is "<<sin(a)<<endl;
            cout<<"The sine of "<<b<<" is "<<sin(b)<<endl;
            cout<<"The cosine of "<<a<<" is "<<cos(a)<<endl;
            cout<<"The cosine of "<<a<<" is "<<cos(b)<<endl;
            cout<<"The log base 10 of "<<a<<" is "<<log10(a)<<endl;
            cout<<"The log base 10 of "<<b<<" is "<<log10(b)<<endl;
            cout<<"Exponential of "<<a<<" is "<<exp(a)<<endl;
        }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{};

int main()
{
    HybridCalculator calc;
    SimpleCalculator c;
    calc.get_data_simple();
    calc.performOperationsSimple();
    calc.get_data_scientific();
    calc.performOperationsScientific();
    //ScientificCalculator s;
    //h.output();
   // h.get_data();
   // h.SimpleCalcshow();
    //h.Scientificcalcshow();
    
    return 0;
    
}