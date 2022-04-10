#include<iostream>
using namespace std;

class SimpleInterest
{
    float principal;
    float rate;
    int time;
    float interest;
    float amount;

    public:
            SimpleInterest(float p,int t,float r)
            {
                principal=p;
                time=t;
                rate=((float)r)*100;

                interest=(principal*rate*time)/100;
                amount=principal+interest;
            }

            SimpleInterest(float p,int t,int R)
            {
                principal=p;
                time=t;
                rate=R;

                interest=(principal*rate*time)/100;
                amount=principal+interest;
            }
            void show()
            {
                cout<<"The amount for the principal investment of "<<principal<<" for "<<time<<" years "<<" at rate of "<<rate<<" is"<<amount<<endl;
            }
};

int main()
{
    //SimpleInterest s1,s2; 
    float p;
    int t;
    float r;
    int R;
    cout<<"Enter p,time in years,r(in decimal):"<<endl;
    cin>>p>>t>>r;
    SimpleInterest s1(p,t,r);//SimpleInterest is like a data type,see it looks as if we are declaring a variable s1 with data type SimpleInterest
    s1.show();

    cout<<"Enter p,time in years,R(in %):"<<endl;
    cin>>p>>t>>R;
    SimpleInterest s2(p,t,R);//SimpleInterest is like a data type,see it looks as if we are declaring a variable s1 with data type SimpleInterest
    s2.show();
    
    return 0;
    
}
/*we can also do like below just replace BankDeposit with SimpleInterest
int main(){
    BankDeposit bd1, bd2, bd3;//if we get errors by doing this way then make a default constructor in class and it will have nothing in the body
    int p, y;
    float r;
    int R;
    
    
    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;//dynamic intialization of objects happening here
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    return 0;
}
*/