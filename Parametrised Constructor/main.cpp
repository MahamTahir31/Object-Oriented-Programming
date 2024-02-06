// Constructors In C++
// default constructor
#include <iostream>
#include <string>

using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int); // param const decl
    void printData(void)
    {
        cout << a << "+" << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y) // paramterised constructor
{ 
    a = x;
    b = y;
}

int main()
{
    // implicit call
    Complex a(4,6);
    a.printData();

    // explicit call
    Complex b = Complex(3,4);
    b.printData();
    return 0;
}
