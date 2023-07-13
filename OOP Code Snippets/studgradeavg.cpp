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
    const int maxstudents = 2;
    studentgrade students[maxstudents];
    studentgrade grade_total;
    int temp_grade;
    for (int i = 0; i < maxstudents;i++){
        cout << "enter maths grade for student " << i + 1 << " " << endl;
        cin >> temp_grade;
        students[i].setMathsGrade(temp_grade);
        cout << "enter english grade for student " << i + 1 << " " << endl;
        cin >> temp_grade;
        students[i].setEnglishGrade(temp_grade);
    }
    for (int i = 0; i < maxstudents/2; i++){
        grade_total = grade_total + students[i];
        float average_maths, average_english;
        average_maths = float(grade_total.getMathsGrade() / maxstudents);
        average_english = float(grade_total.getEnglishGrade() / maxstudents);
        cout << endl << "average grades for student are : " << endl;
        cout << "maths = " << average_maths << endl;
        cout << "english = " << average_english << endl;
    }
}