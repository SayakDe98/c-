#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a=1,b=2,c=3;
    //without setw:
    cout<<"the value of a = "<<a<<endl;
     cout<<"the value of b = "<<b<<endl;
      cout<<"the value of c = "<<c<<endl;
    //with setw:
    cout<<"the value of a = "<<setw(4)<<a<<endl;
     cout<<"the value of b = "<<setw(4)<<b<<endl;
      cout<<"the value of c = "<<setw(4)<<c<<endl;
    return 0;
    
}
/*manipulators help in formatting the data display
example: endl,the others are present in header file iomanip like setw
setw means right justified
*/