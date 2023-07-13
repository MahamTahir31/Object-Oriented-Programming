
// bankaccount.h

#include <iostream>
using namespace std;
class BankAccount{
    private:
        int account_number;
        int current_balance;
    public:
        // prototypes of constructors and methods

        BankAccount();  // null constructor
        BankAccount(int acc_n, int curr_b); // parametrised constructor
        BankAccount(const BankAccount &BA); // copy constructor
        // setters and getters
        void setAN(int acc_n); 
        long getAN();
        void setCB(int curr_b);
        float getCB();
        // destructor
        ~BankAccount();
};

// bankaccount.cpp

// defining the body of  constructors and methods

BankAccount::BankAccount(){
    cout << "called constructor of class BankAccount" << endl;

}
BankAccount::BankAccount(int acc_n, int curr_b){
    account_number = acc_n;
    current_balance = curr_b;
}
BankAccount::BankAccount(const BankAccount & BA){
    account_number = BA.account_number;
    current_balance = BA.current_balance;
}
void BankAccount:: setAN(int acc_n){
     account_number = acc_n;
}
long BankAccount:: getAN(){
    return account_number;
}
void BankAccount:: setCB(int curr_b){
    current_balance = curr_b;
}
float BankAccount:: getCB(){
    return current_balance;
}
BankAccount::~BankAccount(){
    cout << "destructor called" << endl;

}  
// main.cpp
int main(){
    BankAccount person1;
    person1.setAN(1203);
    person1.setCB(8.7);
    cout << person1.getAN() << endl;
    cout << person1.getCB() << endl;
}