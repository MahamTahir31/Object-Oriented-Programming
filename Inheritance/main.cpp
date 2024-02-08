// Inheritance In C++

#include <iostream>
#include <string>
#include <math.h>

using namespace std;
// Base/parent class
class Employee
{
    public:
    int id;
    float salary;
    Employee(){}
        Employee(int EmpId){
            id = EmpId;
            salary = 100;

        }
};
/*Note:
1. default visibility mode is private
2. private visibility mode: public members of base class becomes private members of the derived class
3. public visibility mode: public members of base class becomes public members of the derived class
4. private members of base class are never inherited 
*/
class Programmer: Employee{
    public:
    int LangCode;
    Programmer(int EmpId){
        id = EmpId;
        LangCode =8;
    }
    void getData(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee Maham(1), Faiqa(2);
    cout<<Maham.salary<<endl;
    cout<<Faiqa.salary<<endl;
    
    Programmer OOP(10);
    cout<< OOP.LangCode<<endl;
    OOP.getData();
    // cout << OOP.id<<endl; will throw error cause visibility mode is private of Employee class
    return 0;
}
