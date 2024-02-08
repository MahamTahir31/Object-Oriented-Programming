// Constructors In C++
// Copy Constructor
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Number
{
    int a;
    public:
        Number(){
            a=0; 
        }
        Number(int num) {
            a = num;
        }
        // when no copy constructor is found, compiler allocates default copy constructor to the class
        Number(Number &obj) {
            cout << "Copy Constructor called !"<<endl;
            a = obj.a;
        }
        void display(){
            cout<<"The number for this object is "<< a <<endl;
        }
};

int main()
{
    Number x, y,z(4), z2;
    x.display();
    y.display();
    z.display();

    Number z1(x); // copy constructor invoked
    z1.display();

    z2 = z; // copy constructor not called b/c we are only doing assignment not instantiating object z2
   Number z3 = z; // copy constructor invoked cause z3 is instantiated on the same line

    return 0;
}
