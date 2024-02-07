// Constructors In C++
// Dynamic Initialization of Objects Using Constructors
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Bank
{
int principal;
int years;
float interestRate;
float returnValue;

public:
    Bank(){}
    Bank(int p, int y, float r); // r can be a value like 0.10
    Bank(int p, int y, int r); // r can be a value like 10
    void Show(void);
};

Bank :: Bank(int p, int y, float r){
    principal = p;
    years = y;
    interestRate = r;

    returnValue = principal;
    for (int i = 0; i < years; i++)
    {
        returnValue*= 1+interestRate;
    }
    
}
Bank :: Bank(int p, int y, int r){
    principal = p;
    years = y;
    interestRate =float(r)/100;

    returnValue = principal;
    for (int i = 0; i < years; i++)
    {
        returnValue*= 1+interestRate;
    }
    
}

void Bank :: Show(){
    cout<< "Principal amount: "<<principal << endl<< "Return Value after "<< years << " year(s) is "<< returnValue << endl;
}

int main()
{
    Bank deposit1,deposit2,deposit3;
    int p,y;
    float r;
    int R;

    deposit3.Show();
    cout << "Enter the value of p, y and r "<<endl;
    cin>> p>> y>> r;
    deposit1 = Bank(p, y, r);
    deposit1.Show();

    cout << "Enter the value of p, y and R "<<endl;
    cin>> p>> y>> R;
    deposit2 = Bank(p, y, R);
    deposit2.Show();
    return 0;
}
