#include <iostream>
#include <string>

using namespace std;

class Shop
{
    private:
        int itemID[100];
        int itemPrice[100];
        int count;
    public:
        void initCounter(void){
            count = 0;
        }
        void setPrice(void);
        void displayPrice(void);
    
};

void Shop :: setPrice(void){
    cout<<"Enter Id of your item no "<< count+1 << endl;
    cin>> itemID[count];
    cout<< "Enter Price of your item"<< endl;
    cin>>itemPrice[count];
    count++;
}

void Shop :: displayPrice(void){
    for (int i = 0; i < count; i++)
    {
    cout<< "The price of item with id " << itemID[i] << " is "<< itemPrice[i]<< endl;
    }
    
}

int main()
{
    Shop Bottle;
    Bottle.initCounter();
    Bottle.setPrice();
    Bottle.setPrice();
    Bottle.setPrice();
    Bottle.displayPrice();
    
    return 0;
}