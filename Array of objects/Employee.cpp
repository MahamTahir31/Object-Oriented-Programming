// ARRAY OF OBJECTS & PASSING OBJECTS AS FUNCTION ARGUMENT

#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 1000;
        cout << "Enter id of employee " << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "Id of this employee is " << id << endl;
    }
};
int main()
{
    // Employee Maham, Faiqa, Areeba, aina;
    // // Maham.id= 31; can't access private attributes
    // // Maham.count = 1; can't access private attributes
    // Maham.setId();
    // Maham.getID();
    Employee Company[3] ; // company having 3 employees
    for (int i = 0; i < 3; i++)
    {
        Company[i].setId();
        Company[i].getId();
    }

    return 0;
}