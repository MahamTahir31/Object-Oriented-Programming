// Constructors In C++
// Constructors with default arguments
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Complex
{
    int a,b;
    public:
        Complex(int x, int y=2){
            a = x;
            b = y;
        }
    
        void printData(){
            cout<<"Your number is "<<a <<"+"<<b<<"i"<<endl;
        }
};

int main()
{
    Complex c1(4); // 4+2i
    c1.printData();

    Complex c2(4, 6); // 4+6i
    c2.printData();


    return 0;
}
