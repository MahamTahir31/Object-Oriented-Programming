#include <iostream>
#include <string>
using namespace std;
// Q1 3a
//_______
// thing.h

class thing
{
private:
    int *x;

public:
    thing();
    thing(int val);
    
    void set(int val);
    int get();
    ~thing();
   
};
// thing.cpp
thing ::thing()
{
    cout << "constructing new thing using default contructor" << endl;
}
thing ::thing(int val)
{
    cout << "constructing new thing with value =" << val << endl;
}

void thing ::set(int val)
{

    *x = val;
}
void do2(int level)
{
    cout << "enter do2 with level =" << level << endl;
    thing tt(level);
}

int thing ::get()
{
    return *x;
}
void do1(int level)
{

    cout << "enter do1 with level =" << level << endl;
    thing ttt( level);
    do2(level + 1);
}
thing ::~thing()
{
    cout << "deleting thing with value = " << *x << endl;
}

// main.cpp

int main()
{

    thing t(1);
    cout << endl;
    do2(2);
    cout << endl;
    do1(3);
    cout << endl;
    do2(5);
    cout << endl;
}