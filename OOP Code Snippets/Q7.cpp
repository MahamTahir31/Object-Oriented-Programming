#include <iostream>
#include “abc.h”
void main()
{
    abc obj;
    abc obj2(2, 3, 5.5);
    obj.a = obj.b + obj.c;
    cout << obj.a;
    cout << obj.b;
    cout << obj2.a << obj2.b << obj2.c;
}