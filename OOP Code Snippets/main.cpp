#include <iostream>
#include "bankacc.h"
using namespace std;
int main(){
    BankAccount o1, o2;
    o1.setAN(129);
    o2.setCB(73);
    cout << "account number =" << o1.getAN() << endl;
    cout << "current balance =" << o2.getCB() << endl;

    
}