

#ifndef Bankaccount_H
#define Bankaccount_H

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
#endif
