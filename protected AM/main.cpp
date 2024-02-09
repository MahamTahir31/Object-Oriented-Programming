// Inheritance In C++
// Protected Access Modifier

#include <iostream>
#include <string>

using namespace std;

class Base
{
    protected:
        int a; // can be inherited
    private:
        int b;
   
};
/*
For a protected member:
                            | Public Derivation | Private Derivation | Protected Derivation
    1. private members          Not Inherited        Not Inherited         Not Inherited
    2. protected members        Protected               Priavte             Protected
    3. public members           Public                  Private             Protected

*/


class Derived :  Base{
   // a can be used here by the member functions of derived class
};

int main()
{
    Base b;
    Derived d;
    // cout << b.a; through error cause a is protected it can only be inherited
    // cout << d.a; error 

    return 0;
}
