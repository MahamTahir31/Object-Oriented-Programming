// STAIC DATA MEMBERS AND METHODS   

#include <iostream>
#include <string>

using namespace std;

class Employee
{
    private:
        int id;
        static int count; // static data member by default is initialised with 0, you do not need to do this specifically!
    public:
        void setData(void){
            cout<< "Enter the id "<< endl;
            cin>> id;
            count++;
        }
        void getData(void){
            cout<<"id of employee is "<< id<<" and this is employee  "<< count<< endl;
        }

        static void getCount(void){
            // count<< id; throws an error 
            cout<< "The value of count is " << count<<endl;
        }
};
int Employee :: count; // default value 0 , but we can set to any value here 

int main()
{
    Employee Maham, Faiqa, Areeba;
    // Maham.id= 31; can't access private attributes
    // Maham.count = 1; can't access private attributes

    Maham.setData();
    Maham.getData();
    Employee::getCount();

    Faiqa.setData();
    Faiqa.getData();
    Employee::getCount();

    Areeba.setData();
    Areeba.getData();
    Employee::getCount();
 
    return 0;
}