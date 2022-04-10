#include<iostream>
using namespace std;

inline int product(int x, int y)
{
    return x*y;
}

int main()
{
    int x,y;
    cout<<"Enter two Numbers:"<<endl;
    cin>>x>>y;
    cout<<"Product of x and y = "<<product(x,y)<<endl;
     cout<<"Product of x and y = "<<product(x,y)<<endl;
      cout<<"Product of x and y = "<<product(x,y)<<endl;
       cout<<"Product of x and y = "<<product(x,y)<<endl;
        cout<<"Product of x and y = "<<product(x,y)<<endl;
         cout<<"Product of x and y = "<<product(x,y)<<endl;
          cout<<"Product of x and y = "<<product(x,y)<<endl;
           cout<<"Product of x and y = "<<product(x,y)<<endl;
            cout<<"Product of x and y = "<<product(x,y)<<endl;
             cout<<"Product of x and y = "<<product(x,y)<<endl;

    return 0;
    
}
/*inline function uses more memory and doesnt copy the values of x and y again and again.inline function is used when they function
has limited number of lines of code like 1 or 2 lines, if more lines are present, then inline function will eat more memory 
thus it will have disadvantage than having an advantage 
dont use inline function when doing recursion,static variables,loop,switch case,etc
*/