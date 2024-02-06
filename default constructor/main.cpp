// Constructors In C++
// default constructor
#include <iostream>
#include <string>

using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void); // constructor declarationm
    void printData(void)
    {
        cout << a << "+" << b << "i" << endl;
    }
};

Complex ::Complex(void)
{ // default constructor
    a = 2;
    b = 4;
}

int main()
{
    Complex c;
    c.printData();
    return 0;
}
