// Freind Functions

#include <iostream>
#include <string>

using namespace std;

class Complex
{
   int a,b;
   public:
    void setNumber(int n1, int n2){
        a = n1;
        b = n2;
    }
    friend Complex sumComplex(Complex o1, Complex o2); // non member func
    void printNumber(){
        cout<< "your number is "<< a << "+" << b << "i"<< endl;
    }

};
// in given example, sumComplex is friend func of class Complex, it can access private data of class 
Complex sumComplex(Complex o1, Complex o2){ 
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1,4);
    c1.printNumber();
    // c1.sumComplex() not possible cause sumComplex is not member function of class it is friend function
    c2.setNumber(5,8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}


// properties of friend function
/*
1. not in the scope of class
2. can be invoked without the help of object
3. usually contains arguments as objects
4. can be declared inside public or private section of class
5. it cannot access the class members directly need obj. to access
*/