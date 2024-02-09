// Inheritance In C++
// Multiple inheritance

#include <iostream>
#include <string>

using namespace std;

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Derived : public Base1, public Base2{
    public:
        void show(){
            cout << "The value of Base1 is "<< base1int<< endl;
            cout << "The value of Base2 is "<< base2int<< endl;
            cout << "The sum of these values is "<< base1int + base2int<< endl;
        }

};
int main()
{
    Derived Maham;
    Maham.set_base1int(5);
    Maham.set_base2int(7);
    Maham.show();
    return 0;
}
