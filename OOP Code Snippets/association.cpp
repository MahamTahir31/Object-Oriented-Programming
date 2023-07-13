#include <iostream>
#include <string>
using namespace std;
// car.h
class car{
    public:
        string name, model, company;
    public:
       car(string name ,string model);
        void information();
};
// driver.h

class driver{
    private:
        string name, experience;
    public:
        driver(string name, string experience);
        void drive(car mycar);
};
// car.cpp

car :: car(string name , string model){
    this->name = name;
    this->model = model;
}
void car :: information(){
    cout << "name : " << name << endl;
    cout << "model : " << model << endl;
}
// driver.cpp
driver :: driver(string name , string experience){
    this->name = name;
    this->experience = experience;
}
void driver :: drive(car mycar){
    cout << "name : " << name << endl;
    cout << "experince : " << experience << endl;
    cout << "car model : " << mycar.model << endl;
}
// main.cpp
int main(){
    car f("honda civic", "4");
    f.information();

    driver d("maham", " 5 years");
    d.drive(f);
    return 0;
}