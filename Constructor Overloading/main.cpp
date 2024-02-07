// Constructors In C++
// Constructor overloading
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Complex

{
    int a,b;
    public:
        Complex(int x, int y){
            a = x;
            b = y;
        }
        Complex(int x){ 
            a =x;
            b=0;
        }
        void printData(){
            cout<<"Your number is "<<a <<"+"<<b<<"i"<<endl;
        }

};

int main()
{
    Complex c1(4,6);
    c1.printData();

    Complex c2(5);
    c2.printData();

    return 0;
}
