#include <iostream>
#include <string>
using namespace std;

class Customer{
    private:
        int items[4]; // purchased by customer
        int amount; // bill paid by customer
    public:
        string name;
        string time;
        string date;
        string day;
        void set(int items,int amount);
        void get(){
            cout << "items puchased by customer are:"<< items << endl;
            cout << "Total bill paid by customer is about" << amount << "/-" << endl;
            cout << "name of customer :"<< name << endl;
            cout << "Time : "<< time << endl;
            cout << "date : " << date << endl;
            cout << "day : "<< day << endl;
        }

};
void Customer:: set(int items,int amount){
    for (int i = 0; i < 4; i++)
    {
        items[i] = i;
    }
}
    

int main(string{}args{
    Customer maham;
    maham.date = "14 FEB, 2022";
    maham.day = "Monday";
    maham.time = "10 pm";
    maham.set(["lotion, spray, soap"], 1200);
    maham.get();
    return 0;
}
