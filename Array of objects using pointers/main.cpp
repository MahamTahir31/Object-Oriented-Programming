// Array of objects using pointers

#include <iostream>
#include <string>

using namespace std;

class ShopItem
{
    int Itemid;
    float price;

public:
    void setData(int id, int pr)
    {
        Itemid = id;
        price = pr;
    }
    void getData()
    {
        cout << "Code of this item is " << Itemid << endl;
        cout << "Price of this item is " << price << endl;
    }
};
int main()
{ 
    int size = 3;
    //  int *ptr = &size; // here int pointer storing address of int var
    // int *ptr = new int[34]; 
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;
    int p,i;
    float q;
    for ( i = 0; i < size; i++)
    {
        cout<<"Enter id and price of item "<< i+1<<endl;
        cin>> p >> q;
        ptr->setData(p,q);
        ptr++;
    }
    for ( i = 0; i < size; i++)
    {
       cout<<"Item number: " << i+1<<endl;
       ptrTemp->getData();
       ptrTemp++;
    }
    

    return 0;
}
