/*program to show how the templates are useful as compared to previous program*/
#include<iostream>
using namespace std;
//by using templates we save our time for writing the code as well
template <class T>//using templates in program ,means the data type will be specified when we create objects.we can even specify user defined data type like class instead of just predefined data types like int,etc
class vector
{
    public:
        T *arr;
        int size;

        vector(int m)
        {
            size = m;
            arr = new T[size];
        }

        T DotProduct(vector &v)
        {
            T d=0;//T is custom data type which can be changed into int,float,etc depending how we callit by from main function

            for(int i=0;i<size;i++)
            {
                d+=this->arr[i]*v.arr[i];
            }

            return d;
        }
};

int main()
{
    vector <float>v1(3);
    v1.arr[0]=1.2;
    v1.arr[1]=2.1;
    v1.arr[2]=3.2;

    vector <float>v2(3);
    v2.arr[0]=0.2;
    v2.arr[1]=1.2;
    v2.arr[2]=3.4;

    float a=v1.DotProduct(v2);
    cout<<a<<endl;
    return 0;
}
/*
So, this was all about creating a class and an embedded function to calculate the dot product of two integer vectors. But this program would obviously fail to calculate the dot products for some different data types. It would demand an entirely different class. But we’ll save ourselves the effort and the time by declaring a template. Let’s see how:


Understanding the changes, we made in the above program to generalise it for all data types:

First and foremost, we defined a template with class T where T acts as a variable data type.
We then changed the data type of arr to T, changed its constructor to T from int, changed everything except the size of the vector, to a variable T. The function then returned T. This has now changed the class from specific to general. 
We then very easily added a parameter, while defining the vectors, of its data type. And the compiler itself transformed the class accordingly. Here we passed a float and the code handled it very efficiently.
*/