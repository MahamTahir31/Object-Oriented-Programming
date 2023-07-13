#include <iostream>
using namespace std;

// Q6 of quiz 1,2

class Complex{
    private:
        int real;
        float imaginary;
    public:
        friend ostream &operator<<(ostream &out, Complex &obj);
};
