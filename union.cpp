/*Unions are like structure but they provide better memory management,let us assume there is a barter system in a village 
and the different types of currency are amount of rice(in kgs)-integer,
car (with starting letter of car being among a,b,c)-character OR
pounds-float
we can use one data type at a time,here we can give or take money(currency) in the form of amount of rice , car or pounds
In C++,if we use unions we can optimize the memory allocation,we only use the memory of the largest data type used 
the memory allocation for one integer data type is 4 bytes
                            one char data type is 1 byte
                            one float data type is 4 bytes
hence we choose 4 bytes memory allocation for union
whereas if this was a structure then the memory allocation would be 4+1+4=9 bytes instead of 4 bytes of union
*/

#include<iostream>
using namespace std;

union money
{
    int rice;//4 bytes
    char car;//1 byte
    float pounds;//4 bytes
};

int main()
{
    union money m1;
    m1.rice=100;//define only one at a time or get garbage value
    //m1.car='b';//if we use this alongwith any other then we get garbage value use only one at a time ,also defineonly one among three at a time
    //m1.pounds=100.6;//define only one at a time or get garbage value
    cout<<m1.rice;
    //cout<<m1.car;
    //cout<<m1.pounds;
    return 0;
}
