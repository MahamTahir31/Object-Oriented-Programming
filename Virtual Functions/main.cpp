// Virtual Functions

#include <iostream>
#include <string>

using namespace std;

class Base{
    public:
        int baseVar;
        virtual void display(){ // if base ptr points to an object of derived class then derived class display will run not this one b/c it is virtual
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

    Base *basePtr;
    Base baseObj;
    derived derivedObj;
    basePtr = &derivedObj; // pointing base class pointer to derived class
    basePtr->baseVar = 21;
    basePtr->display(); 

    return 0;
}
