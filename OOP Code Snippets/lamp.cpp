#include <iostream>
using namespace std;
 // lamp.h
 class tablelamp{
        protected:
         enum on_off
         {
             ONN = 1,
             OFF = 0
         };
    public:
        tablelamp();
        void pressSwitch();
        friend ostream &operator<<(ostream &out, tablelamp &TL);
 };
 // adjtablelamp.h
 class AdjTableLamp : public tablelamp{
     private:
         float brightness;
    public:
        AdjTableLamp();
        void dim();
        void print(ostream &);
 };

// tablelamp.cpp
tablelamp :: tablelamp(){

    on_off s;
    s = ONN;
    if (s== ONN){
        cout << "switch is on" << endl;

    }
    else{
        cout << "switch is off" << endl;
        
    }
}
ostream &operator<<(ostream &out, tablelamp &TL){
    


}