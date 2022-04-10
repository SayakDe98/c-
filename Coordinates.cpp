#include<iostream>
#include<cmath>
using namespace std;

class Coordinates
{
    int x,y;
    public:
        Coordinates(int a,int b)
        {
            x=a;
            y=b;
        }
        
        friend void Distance(Coordinates,Coordinates);
        void PrintCoordinates()
        {
            cout<<"The point is:"<<endl;
            cout<<"("<<x<<","<<y<<")"<<endl;
        }
};

/*Coordinates :: Coordinates(int a,int b)
{
    x=a;
    y=b;
}*/

void Distance(Coordinates o1,Coordinates o2)
{
    float distance;
    distance=sqrt(pow((o2.x-o1.x),2)+pow((o2.y-o1.y),2));
    cout<<"Distance : "<<distance<<endl; 

}

int main()
{
    Coordinates a(5,1);
    a.PrintCoordinates();

    Coordinates b(1,4);
    b.PrintCoordinates();

    Distance(a,b);

    return 0;
}