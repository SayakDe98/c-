#include<iostream>
using namespace std;

/*
Student->Marks
Student->Sports
Marks->Result
Sports->Result
*/

class Student
{
    protected:
        int roll_number;
    
    public:
        void set_roll_number(int a)
        {
            roll_number=a;
        }

        void get_roll_number()
        {
            cout<<"Roll number is : "<<roll_number<<endl;
        }
};

class Marks : virtual public Student
{
    protected:
        float maths,science;
    
    public:
        void set_marks(float m1,float m2)
        {
            maths=m1;
            science=m2;
        }

        void get_marks()
        {
            cout<<"Marks in maths is : "<<maths<<endl;
            cout<<"Marks in science is : "<<science<<endl;
        }
};

class Sports : public virtual Student
{
    protected:
        int score;
    
    public:
        void set_score(int a)
        {
            score=a;
        }

        void get_score()
        {
            cout<<"Score in P.T. is : "<<score<<endl;
        }
};

class Result : virtual public Marks,virtual public Sports
{
    public:
        
        void display()
        {
             get_roll_number();
             get_marks();
             get_score();
             cout<<"The average in Math,Science and Sports is : "<<(maths+science+score)/3<<endl;   
        }
};

int main()
{
    Result Sayak;
    Sayak.set_roll_number(1);
    Sayak.set_marks(97.2,99.8);
    Sayak.set_score(99);
    Sayak.display();
    return 0;
    
}