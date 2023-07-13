#include <iostream>
using namespace std;
// studgrade.h

class studentgrade{
    private:
        int maths_grade, english_grade;
    public:
        studentgrade();
        int getMathsGrade();
        int getEnglishGrade();
        void setMathsGrade(int grade_in);
        void setEnglishGrade(int grade_in);
        studentgrade operator+(const studentgrade &grade_in);
};

// studgrade.cpp

studentgrade :: studentgrade(){
    maths_grade = 0;
    english_grade = 0;
}
int studentgrade :: getMathsGrade(){
    return maths_grade;
}
int studentgrade :: getEnglishGrade(){
    return english_grade;
}
void studentgrade :: setMathsGrade(int grade_in){
    maths_grade = grade_in;
}
void studentgrade  :: setEnglishGrade(int grade_in){
    english_grade = grade_in;
}
studentgrade studentgrade :: operator+(const studentgrade &grade_in){
    studentgrade temp_student;
    temp_student.maths_grade = maths_grade + grade_in.maths_grade;
    temp_student.english_grade = english_grade + grade_in.english_grade;
    return temp_student;
}

// main.cpp

int main(){
    studentgrade grad_total, student1, student2;
    student1.setMathsGrade(50);
    student1.setEnglishGrade(40);
    student2.setMathsGrade(70);
    student2.setEnglishGrade(80);

    grad_total = student1 + student2;

    cout << "total maths of both students = " << grad_total.getMathsGrade() << endl;
    cout << "total english of both students = " << grad_total.getEnglishGrade() << endl;
}



