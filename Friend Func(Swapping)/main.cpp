//More on Freind Functions

#include <iostream>
#include <string>

using namespace std;
// forward declaration
class C2;

class C1{
    int val1;
    friend void exchange(C1 &, C2 &); // call by reference
    public:
        void inData(int a){
            val1 = a;
        }
        void display(void){
            cout << val1 << endl;
        }
    
};

class C2{
    int val2;
    friend void exchange(C1 &, C2 &);
    public:
        void inData(int a){
            val2 = a;
        }
        void display(void){
            cout << val2 << endl;
        }
    
};
/*
Trick to swap 2 numbers:
temp = a;
a=b;
b=temp;
*/
void exchange(C1 & x, C2 & y){ // here & is neccessary, without it swaping is not possible because without it copies will be made of objects x and y actually the value remain same, to change value actually you have to write &
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;

}

int main()
{
   C1 o1;
   C2 o2;

   o1.inData(5);
   o2.inData(4);
   exchange(o1,o2);

   cout << "the value after exchanging: "; o1.display();
   cout << "the value after exchanging: ";
   o2.display();

    return 0;
}

