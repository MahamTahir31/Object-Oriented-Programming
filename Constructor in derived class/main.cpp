// Inheritance
// Constructors in derived class

#include <iostream>
#include <string>

using namespace std;

/*
Case 1:
class B: public A{
    // order of execution of constructor -> first A() then B()
};

Case 2:
class A: public B, public C{
    // order of execution of constructor -> B() then C() then A()
};

Case 3:
class A: public B, virtual public C{
    // order of execution of constructor -> C() then B() then A()
};
*/

class Base1{
    int data1;
    public:
        Base1(int i ){
            data1 = i; 
            cout<<"Base1 class constructor called"<< endl;
        }
        void printDataBase1(){
            cout << "The value of data1 is " << data1 << endl;
        }
};

class Base2{
    int data2;
    public:
        Base2(int i ){
            data2 = i; 
            cout<<"Base2 class constructor called"<< endl;
        }
        void printDataBase2(){
            cout << "The value of data2 is " << data2 << endl;
        }

};

class Derived: public Base1, public Base2{
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d): Base1(a), Base2(b){
            derived1 = c;
            derived2 = d;
            cout<< "Derived class constructor called "<< endl;
        }
        void printDataDerived(){
            cout << "The value of derived1 is "<< derived1<< endl;
            cout << "The value of derived2 is "<< derived2<< endl;
        }
};

int main()
{   
    Derived Obj(1,2,3, 4);
    Obj.printDataBase1();
    Obj.printDataBase2();
    Obj.printDataDerived();
  
    return 0;
}
