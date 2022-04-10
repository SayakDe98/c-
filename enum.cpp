/* Enum is used to store data like we have an example of breakfast,lunch and dinner
if we print breakfast then we get 0,
            lunch then we get 1,
            dinner thenwe get 2.
*/

#include<iostream>
using namespace std;

int main()
{
    enum Meal{breakfast,lunch,dinner};

    cout<<breakfast<<endl;

    Meal m1=lunch;//using Meal as a data type
    cout<<m1<<endl;

    cout<<"Check if m1 is equals to 0: "<<(m1==0)<<endl;//we getoutput=0 since this is false

    cout<<"Check if m1 equals to 1: "<<(m1==1)<<endl;//we getoutput=1 since m1  equals to 1 
    return 0;
}
