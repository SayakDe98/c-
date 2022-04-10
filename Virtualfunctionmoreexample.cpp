#include<iostream>
#include<string>
using namespace std;

class CWH
{
    protected:
        float rating;
        string title;
    public:
        CWH(float r , string t)
        {
            rating = r;
            title = t;
        }

       virtual void display()
        {
            cout<<"This is in CWH the base class"<<endl;
        }
};

class CWHVideo : public CWH
{
    float videoLength;
    public:
        CWHVideo(float r, string s , float vl):CWH(r , s)
        {
            videoLength = vl;
        }

        void display()
        {
            cout<<"The title of the video is : "<<title<<endl;
            cout<<"The rating of the video (out of 5 stars) is : "<<rating<<endl;
            cout<<"The length of this video is : "<<videoLength<<endl;
        }
};

class CWHText : public CWH
{
    int words;
    public:
        CWHText(float r , string s , int wc):CWH( r , s)
        {
            words = wc;
        }

        void display()
        {
            cout<<"The title of the video is : "<<title<<endl;
            cout<<"The rating of the video (out of 5 stars) is : "<<rating<<endl;
            cout<<"The number  of words in  this video are : "<<words<<endl;
        }
};

int main()
{
    float rating;
    string title;
    float videolength;
    int words;
    
    rating = 4.9;
    title = "Django tutorial";
    videolength = 19.6;
    CWHVideo DjVideo(rating , title, videolength);

    rating = 4.1;
    title = "Django text";
    words = 122;

    CWHText DjText(rating , title , words);

    CWH *tuts[2];
    tuts[0]=&DjVideo;
    tuts[1]=&DjText;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}
/*
Virtual Functions Example in C++
As we have seen in the previous tutorial that
 how virtual functions are used to implement run-time polymorphism.
 We created a class “CHW” which contains protected data members “title” which has a “string” data type and “rating” which has a “float” data type.
The class “CWH” has a parameterized constructor which takes two parameters “s” and “r” and assign their values to the data members “title” and “rating”
The class “CHW” has a virtual function void “display” which does nothing
We created a class “CHWVideo” which is inheriting the “CWH” class and contains private data members “videoLength” which has a “float” data type.
The class “CWHVideo” has a parameterized constructor which takes three parameters “s”, “r” and “vl”. The constructor of the base class is called in the derived class and the values of the variables “s” and “r” are passed to it. The value of the parameter “vl” will be assigned  to the data members “videoLength”
The class “CHWVideo” has a function void “display” which will print the values of the data members “title”, “rating” and “videoLength”

We created a class “CHWText” which is inheriting the “CWH” class and contains private data members “words” which has an “int” data type.
The class “CWHText” has a parameterized constructor which takes three parameters “s”, “r” and “wc”. The constructor of the base class is called in the derived class and the values of the variables “s” and “r” are passed to it. The value of the parameter “wc” will be assigned  to the data members “words”
The class “CHWText” has a function void “display” which will print the values of the data members “title”, “rating” and “words”

We created a string variable “title”, float variables “rating”, “vlen” and integer variable “words”
For the code with harry video class, we have assigned “Django tutorial” to the string “title”, “4.56” to the float “vlen” and “4.89” to the float “rating”.
An object “djVideo” is created of the data type “CWHVideo” and the variables “title”, “rating” and “vlen” are passed to it.
For the code with harry text class, we have assigned “Django tutorial text” to the string “title”, “433” to the integer “words” and “4.19” to the float “rating”.
An object “djText” is created of the data type “CWHText” and the variables “title”, “rating” and “words” are passed to it.
Two pointers array “tuts” is created of the “CWH” type
The address of the “djVideo” is assigned to “tuts[0]” and the address of the “djText” is assigned to “tuts[1]”
The function “display” is called using pointers “tuts[0]” and “tuts[1]”
The main thing to note here is that if we don’t use the “virtual” keyword with the “display” function of the base class then the “display” function of the base class will run.

But we have used the “virtual” keyword with the “display” function of the base class to make is a virtual function so when the display function is called by using the base class pointer the display function of the derived class will run because the base class pointer is pointing to the derived class object.

Rules of virtual class:
1.They cannot be static
2.They are accessed by object pointers
3.A virtual function can be a friend function of another class.
4.The virtual class in base class can be empty
5.If a virtual function is defined in base class , there is no neccessity of creating the same function in derived class,in such a case the virtual class in base class will run.
*/