#include <iostream>
#include <string.h> // for strncpy
using namespace std;

// vehicle.h
class vehicle {
    private:
        char regis_num[10]; // static array
        static int vehicle_count; // static variable
    public:
        vehicle(); // null constructor
        ~vehicle(); // destructor
        void setRegistrationNumber(char *reg_no_in); // set values in array
        char *getRegistrationNumber(); // get an array
        static int getVehicleCount(); // static function
};

// vehicle.cpp

vehicle :: vehicle(){
    vehicle_count++;
}
vehicle :: ~vehicle(){
    vehicle_count--;
}
void vehicle :: setRegistrationNumber(char * reg_no_in){
    strncpy(regis_num, reg_no_in, 9);
    regis_num[9] = '\0';

}
char *vehicle :: getRegistrationNumber(){
    return regis_num;
}
int vehicle ::  getVehicleCount(){
    return vehicle_count;
}
// main.cpp
int main(){
    vehicle data[10], counter;
    for (int i = 0; i < 10;i++){
        char *temp_reg;
        cout << "enter registration number for last issued vehciles : " << endl;
        cin >> temp_reg;
        data->setRegistrationNumber( temp_reg);
        cout << data->getRegistrationNumber() << endl;
        cout << counter.getVehicleCount() << endl;
    }
    return 0;
}