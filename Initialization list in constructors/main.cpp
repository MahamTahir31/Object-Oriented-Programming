// Initialization List on Constructors
// it is used when our constructor body is more complex 
#include <iostream>
#include <string>

using namespace std;

/*
class Test{
    int a;
    int b;
    public:
        Test(int i, int j): a(i), b(j){constructor body}
};
*/
class Test{
    int a;
    int b;
    public:
        // Test(int i, int j): a(i), b(i+j)
        // Test(int i, int j): a(i), b(j)
        // Test(int i, int j): a(i), b(2*j)
        // Test(int i, int j): a(i), b(a+j)
        Test(int i, int j):  b(j), a(i + b) // will return garbage value of 'a' cuz 'a' is declared first so it must be initialised firstly
        {
            cout<< "Constructor executed"<<endl;
            cout<< "a = "<<a<<endl;
            cout<< "b = "<<b<<endl;
            }
};

int main()
{   
    Test t(1,3);
    return 0;
}
