#include <iostream>
#include <string.h>
using namespace std;

// employee.h
class employee
{
protected:
    static int employee_count;
    int personal_id;
    char name[30];

public:
    employee();
    static int getEmployeeCount();
    int getId();
    char *getName();
};
// director.h
class director : public employee
{
private:
    int shareholding;

public:
    director();
    int getShareHolding();
};
// salaried.h 
class salaried : public employee
{
private:
    float annual_salary;

public:
    salaried();
    float getSalary();
};
// hourlypaid.h
class hourlypaid : public employee
{
    private:
        float hourly_rate;
    public:
        hourlypaid();
        float getRate();
};
// employee.cpp
int employee ::employee_count;
employee::employee(){
    employee_count++;
    personal_id = employee_count;
    cout << "enter employee name : " << endl;
    cin >> name;
}
int employee :: getEmployeeCount(){
    return employee_count;
}
int employee :: getId(){
    return personal_id;
}
char *employee :: getName(){
    return name;
}

// director.cpp
