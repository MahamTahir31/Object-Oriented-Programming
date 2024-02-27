// this pointer

#include <iostream>
#include <string>

using namespace std;

class A
{
    int a;

public:
    A& setData(int a)
    {
        this->a = a;
        return *this;
    }
    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};
int main()
{
    // this is a keyword which is a pointer points to the object which invokes the member function
    // we can return object as well by using this
    A a;
    a.setData(2).getData();
    // a.getData(); // don't need to invoke getdata separately cause we are returning object from setdata which can directly call getdata in above line of code
    return 0;
}
