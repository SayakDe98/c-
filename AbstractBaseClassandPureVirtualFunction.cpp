#include<iostream>
#include<string>
using namespace std;

class CWH//abstract base class,which doesnt create objects but its derived classes create objects an perform tasks.
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

        virtual void display() = 0;//pure virtual function,if this is present we have to write display() function in each derived class, and this has no use other than this.
};

class CWHVideo : public  CWH
{
    float videolength;

    public:
        CWHVideo(float r , string t , float vl):CWH(r , t)
        {
            videolength = vl;
        }

        void display()
        {
            cout<<"Title of the video : "<<title<<endl;
            cout<<"Length of the video : "<<videolength<<endl;
            cout<<"Rating of the video(out of 5 stars)  : "<<rating<<endl; 
        }
};

class CWHText: public CWH
{
    int words;

    public:
        CWHText(float r , string t , float w) : CWH(r, t)
        {
            words = w;
        }

        void display()
        {
            cout<<"Title of the Text File : "<<title<<endl;
            cout<<"Number of words in this Text File  :"<<words<<endl;
            cout<<"Rating of this Text File(out of 5 stars) :"<<rating<<endl;
        }
};

int main()
{
    string title;
    float rating;
    float videolength;

    title = "Django tutorial video";
    rating = 4.6;
    videolength = 19.8;

    CWHVideo DjVideo(rating , title , videolength);
    
    int words;

    title = "Django Text File";
    rating = 4.1;
    words = 251;

    CWHText DjText(rating , title , words);

    CWH *tuts[2];
    tuts[0] = &DjVideo;
    tuts[1] = &DjText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
    
}

/*
Pure Virtual Functions in C++
Pure virtual function is a function that doesn’t perform any operation and the function is declared by assigning the value 0 to it. Pure virtual functions are declared in abstract classes.

Abstract Base Class in C++
Abstract base class is a class that has at least one pure virtual function in its body. The classes which are inheriting the base class must need to override the virtual function of the abstract class otherwise compiler will throw an error.

We created a class “CHW” which contains protected data members “title” which has “string” data type and “rating” which has “float” data type.
The class “CWH” has a parameterized constructor which takes two parameters “s” and “r” and assign their values to the data members “title” and “rating”
The class “CHW” has a pure virtual function void “display” which is declared by 0. The main thing to note here is that as the “display” function is a pure virtual function it is compulsory to redefine it in the derived classes.

We created a class “CHWVideo” which is inheriting “CWH” class and contains private data members “videoLength” which has “float” data type.
The class “CWHVideo” has a parameterized constructor which takes three parameters “s”, “r” and “vl”. The constructor of the base class is called in the derived class and the values of the variables “s” and “r” are passed to it. The value of the parameter “vl” will be assigned  to the data members “videoLength”
The class “CHWVideo” has a function void “display” which will print the values of the data members “title”, “rating” and “videoLength”

We created a class “CHWText” which is inheriting “CWH” class and contains private data members “words” which has “int” data type.
The class “CWHText” has a parameterized constructor which takes three parameters “s”, “r” and “wc”. The constructor of the base class is called in the derived class and the values of the variables “s” and “r” are passed to it. The value of the parameter “wc” will be assigned  to the data members “words”
The class “CHWText” has a function void “display” which will print the values of the data members “title”, “rating” and “words”

We created a string variable “title”, float variables “rating”, “vlen” and integer variable “words”
For the code with harry video class we have assigned “Django tutorial” to the string “title”, “4.56” to the float “vlen” and “4.89” to the float “rating”.
An object “djVideo” is created of the data type “CWHVideo” and the variables “title”, “rating” and “vlen” are passed to it.
For the code with harry text class we have assigned “Django tutorial text” to the string “title”, “433” to the integer “words” and “4.19” to the float “rating”.
An object “djText” is created of the data type “CWHText” and the variables “title”, “rating” and “words” are passed to it.
Two pointers array “tuts” is created of the “CWH” type
The address of the “djVideo” is assigned to “tuts[0]” and the address of the “djText” is assigned to “tuts[1]”
The function “display” is called using pointers “tuts[0]” and “tuts[1]”
The main thing to note here is that if we don’t override the pure virtual function in the derived class the compiler will throw an error
*/