#include <iostream>
using namespace std;
// A.h
class A{
    public:
        int var = 7;
    public:
        void m1();
        void m2();
        void m3();
};
// A.cpp
void A :: m1(){
    cout << " A m1 " << endl;
} 
void A :: m2(){
    cout << " A m2 " << endl;
} 
void A :: m3(){
    cout << " A m3 " << endl;
} 
// B.h
class B : public A{
    public:
        void m1();     
};
// B.cpp
void B :: m1(){
    cout << " B m1 " << endl;
}
// C.h
class C : public B{
    public:
        void m3();
};
// C.cpp
void C :: m3(){
    cout << " C m3 " << var + 6 << endl;
}
// main.cpp
int main(){
    A a = A();
    B b = B();
    C c = C();
    B a2 = C();
    a.m1();
    a.m2();
    a.m3();
    b.m1();
    b.m2();
    b.m3();
    c.m1();
    c.m2();
    c.m3();
    a2.m1();
    a2.m2();
    a2.m3();
    return 0;
}