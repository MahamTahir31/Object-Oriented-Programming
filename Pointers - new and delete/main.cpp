// Pointers - new and delete keywords

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // pointer
    int a = 4;
    int *ptr = &a;                                  // & means address of a, ptr stores address of variables of different types
    // *ptr = 45;
    cout << "the value of a is " << *(ptr) << endl; // will return 4

    // new operator -- dynamic initialization
    int *p = new int(2);
    cout << "the value at address p is " << *(p) << endl;

    // allocating block of memory of size 3
    int *arr = new int[3];
    arr[0] = 4;
    arr[1] = 5; // or *(arr+1) = 5
    arr[2] = 6; // or *(arr+2) = 6

    // delete operator
    // delete[] arr; // to free the space of dynamically allocated memory by array
    cout << "array[0] = " << arr[0] << endl;
    cout << "array[1] = " << arr[1] << endl;
    cout << "array[2] = " << arr[2] << endl;

    return 0;
}
