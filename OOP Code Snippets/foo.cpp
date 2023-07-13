#include <iostream>
using namespace std;

// Q10 of quiz 1,2
class foo{
    int x;
    int y;
    public:
        foo(int a ,int b){
            x = a;
            y = b;

        }
        foo(void){
            x = -1;
            y = -2;
        }
        void print(){
            cout << x << ' ' << y << endl;
}
};
class bar{
    int z;
    public:
        bar (void){
            z = 42;
        }
        void print(){
            cout << z << endl;

        }
        void doit(){
            z += 1;
        }
};
/*
int main(void){
    foo f;
    f.print();

}*/
/*
int main(void){
    foo f(5, 10);
    bar *b = (bar *)&f;
    b->print();
    b += 1;
    b->print();
} 
*/
void doit(bar b){
    b.doit();
}

int main(void){
    bar b;
    b.print();
    b.doit();
    doit(b);
    b.print();
}