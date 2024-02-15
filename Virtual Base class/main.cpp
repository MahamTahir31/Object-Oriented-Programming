// Inheritance
// Virtual Base Class - solution of duplication problem

#include <iostream>
#include <string>

using namespace std;
/*
student --> Test
Student --> Sports
Test --> result
Sports --> result
*/
class Student
{
   protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        }
        void print_number(){
            cout << "your roll no is "<< roll_no << endl;
        }

};
class Test : virtual public Student{
    protected:
        float maths, physics;
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }
        void print_marks(){
            cout<< "your result is "<< endl
                << "Maths: "<<maths<< endl
                << "Physics: "<< physics<< endl;
        }
};

class Sports : virtual public Student{
    protected:
        float score;
    public:
        void set_score(float s){
            score = s;
        }
        void print_score(){
            cout<< "Your score is "<< score << endl;
        }

};

class Result : public Test, public Sports{
    private:
        float total;
    public:
        void display(){
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<< "Total marks are "<< total<< endl;
        }
};
int main()
{   
    Result Maham;
    Maham.set_number(63);
    Maham.set_marks(89.8, 76.5);
    Maham.set_score(5);
    Maham.display();
    return 0;
}
