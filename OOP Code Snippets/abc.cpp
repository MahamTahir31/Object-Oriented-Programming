#include <iostream>
using namespace std;

// Q7 of quiz 1,2

class abc
{
private:
    int a, b;
    float c;

public:
    abc()
    {
    }
    abc(int a, int b, float c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    void setA(int a1)
    {
        a = a1;
    }
    void setB(int b1)
    {
        b = b1;
    }
    void setC(float c1)
    {
        c = c1;
    }
    
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
    
    float getC()
    {
        return c;
    }
    abc operator+(const abc &ob)
    {
        abc res;
        res.a = a + ob.a;
        res.b = b + ob.b;
        res.c = c + ob.c;
        return res;
    }
  
   
};

int main()
{
    abc sum,aa,bb,cc;
    aa.setA(1);
    bb.setB(2);
    cc.setC(1.5);
    aa.getA();
    bb.getB();
    cc.getC();
    sum = aa + bb + cc;
    sum.print();
    return 0;
}