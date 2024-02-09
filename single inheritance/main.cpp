// Inheritance In C++
// Single Inheritance 

#include <iostream>
#include <string>

using namespace std;

class Base
{
    int data1; // private be default and it is not inheritable 
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
   
};

void Base :: setData(void){
    data1 = 10;
    data2 = 20;
}

int Base :: getData1(){
    return data1;
}

int Base :: getData2(){
    return data2;
}

class Derived : public Base{
    int data3;
    public:
        void process();
        void display();
};

void Derived :: process(){
    // setData(); we can call setData() here if visibility mode is private 
    data3 = data2 * getData1();
}
void Derived :: display(){
    cout<<"the value of data1 is "<< getData1()<< endl;
    cout<<"the value of data2 is "<< data2<< endl;
    cout<<"the value of data3 is "<< data3<< endl;
}
int main()
{
    Derived der;
    der.setData(); // will throw error if visibility mode is private 
    der.process();
    der.display();
    
    return 0;
}
