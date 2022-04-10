#include<iostream>
using namespace std;

class Student
{
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number(void);
};

void Student :: set_roll_number(int r)
{
    roll_number=r;
}

void Student :: get_roll_number()
{
    cout<<"Roll Number : "<<roll_number<<endl;
}

class Exam:public Student
{
    protected:
            float physics,maths;
    public:
            void set_marks(float , float);
            void get_marks();
};

void Exam :: set_marks(float m1,float m2)
{
    physics = m1;
    maths = m2;
}

void Exam :: get_marks()
{
    cout<<"Marks in Physics : "<<physics<<endl;
    cout<<"Marks in Maths : "<<maths<<endl;
}

class Result : public Exam
{
    private:
            float percentage;

    public:
            void show_result();

};

void Result ::show_result()
{
    percentage=(physics+maths)/2;
    cout<<"The percentage is : "<<percentage<<"%"<<endl;
} 

int main()
{
    /*
        Note:1.If we are inheriting B from A and inheriting C from B then [A->B->C]
        2.A is the base class of B,B is base class of C
        3.The inheritance path is A->B->C

    */
    Result r;
    r.set_roll_number(12);
    r.set_marks(90,92);
    r.show_result();
    
    return 0;
    
}
/*
Multilevel Inheritance in C++
Multilevel inheritance is a type of inheritance in which one derived class is inherited from another derived class.
 For example, we have three classes “animal”, “mammal” and “cow”. 
 If the “mammal” class is inherited from the “animal” class and “cow” class is inherited from “mammal” which means 
 that the “mammal” class can now implement the functionalities of “animal” and “cow” class can now implement the functionalities of “mammal” class.
 
1st we created a “student” class which consists of protected data member integer “roll_number”.
2nd the “student” class consists of a public function “set_roll_number” and “get_roll_number”
3rd the function “set_roll_number” will set the value of the data member “roll_number”.
4th the function “get_roll_number” will print the value of the data member “roll_number”.

1st we created an “exam” class that is inheriting “student” class in public mode.
2nd the “exam” class consists of protected data members float “math” and float “physics”.
3rd the “exam” class consists of public member functions “set_marks” and “get_marks”.
4th the function “set_marks” will set the value of the data members “math” and “physics”.
5th the function “get_marks” will print the value of the data members “math” and “physics”.

1st we created a “Result” class which is inheriting the “Exam” class in public mode.
2nd the “Result” class consists of private data member’s float “percentage”.
3rd the “exam” class consists of the public member function “display_results”.
4th the function “display_results” will call the “get_roll_number” and “get_marks” functions,
 and add the values of “math” and “physics” variables then divide that value with “2” to get a percentage and prints it.
It can be clearly seen that the class “Exam” is inheriting class “student” and class “Results” is inheriting class “Exam”;
 which is an example of multilevel inheritance. 

 1st object “harry” is created of the “Result” data type.
2nd the function “set_roll_number” is called by the object “harry” and the value “420” is passed.
3rd the function “set_marks” is called by the object “harry” and the values “94.0” and “90.0” are passed.
4th the function “display_results” is called by the object “harry”.
*/