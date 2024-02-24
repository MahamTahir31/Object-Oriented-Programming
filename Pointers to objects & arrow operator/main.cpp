// Pointers to objects and arrow operator

#include <iostream>
#include <string>

using namespace std;

class Complex
{
    int real, imgn;

public:
    void setData(int r, int i)
    {
        real = r;
        imgn = i;
    }
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imgn << endl;
    }
};
int main()
{
    //    Complex c1;
    //    Complex *ptr = &c1;
    Complex *ptr = new Complex;
    // (*ptr).setData(2, 4); // accessing public members of object through pointer, () is necessary here
    ptr->setData(1,3); // set data of object to which pointer is pointing 

    // (*ptr).getData(); or
    ptr->getData();

    // Array of Objects
    Complex *ptr1 = new Complex[4];
    ptr1->setData(3,5);
    ptr1->getData();

    return 0;
}

// by arrow operator, we can dereference pointer then run its function