// Inheritance In C++
// Multilevel inheritance

#include <iostream>
#include <string>

using namespace std;

class Student
{
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number(void);
   
};

void Student :: set_roll_number(int r){
    roll_number = r;
}
void Student :: get_roll_number(){
   cout<<"The roll number is: "<<roll_number<<endl;
}

class Exam : public Student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float, float);
        void get_marks(void);
};
void Exam :: set_marks(float m1, float m2){
    maths = m1;
    physics = m1;
}

void Exam :: get_marks(){
    cout << "The marks obtained in physics are: "<< maths<<endl;
    cout << "The marks obtained in maths are: "<< physics<<endl;
}

class Result : public Exam{
    float percentage;
    public:
        void display(){
            get_roll_number();
            get_marks();
            cout<< "Your percentage is "<< (maths + physics)/2 <<"%"<< endl;
        }
};
/*
if we are inheriting B from A and C from B : A --> B --> C
    1. A is base class for B and B is base class for C
    2. A-->B-->C is called inheritance path
*/
int main()
{
    Result Maham;
    Maham.set_roll_number(12);
    Maham.set_marks(87.8, 78.9);
    Maham.display();
    return 0;
}
