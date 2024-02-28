// Polymorphism
// Pointers to Derived Classes

#include <iostream>
#include <string>

using namespace std;

class Base{
    public:
        int baseVar;
        void display(){
            cout<< "value of base class var is : "<< baseVar<< endl;
        }

};

class derived: public Base{
    public:
        int derivedVar;
        void display(){
            cout<< "value of base class var is : "<< baseVar<< endl;
            cout<< "value of derived class var is : "<< derivedVar<< endl;

        }
};

int main()
{
    // Polymorphism:
    // - one name, multiple forms
    // - e.g: function overloading, operator overloading
    // - e.g: virtual functions
    // there are two types of polymorphism:
    // 1. runtime polymorphism
    // 2. compile time polymorphism
    //      - on compile time, it is decided that which function gonna called --> this is also called early binding or static binding --> means binding of objects into your function which is gonna called
    // compile time polymorphism is achieved by function overloading and operator overloading
    // runtime time polymorphism is achieved by virtual function
    // when we execute function then we come to know which function gonna called or which object will call any function, this depends on our pointer's type --> late binding

    Base *basePtr;
    Base baseObj;
    derived derivedObj;
    basePtr = &derivedObj; // pointing base class pointer to derived class
    basePtr->baseVar = 21;
    basePtr->display(); // will execute base class' display function cause of base class pointer --> late binding cause func call is depending on pointer type

    // basePtr->derivedVar; // will throw error 
    derived *derivedPtr;
    derivedPtr = &derivedObj;
    derivedPtr->derivedVar = 31;
    derivedPtr->baseVar = 10;
    derivedPtr->display();
    return 0;
}
