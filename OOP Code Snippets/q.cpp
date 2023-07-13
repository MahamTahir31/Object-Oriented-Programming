#include <iostream>

using namespace std;

// class utility_store{
//     public:

//         // null constructor
//         utility_store(){
//             float avrg_rate_of_selling =1545.7;
//             int price_of_soap = 65;

//         }

//         // parameterised constructor
//         utility_store(float r, int pos){ // error occured due to the absence of data types
//             float avrg_rate_of_selling = r;
//             int price_of_soap = pos;
//         }

//         // copy constructor
//         utility_store obj(){

//         }

// };
class points
{
public:
    // null constructor
    points()
    {
        int p1;
        int p2;
    }

    // parameterised constructor
    points(int point1, int point2)
    {
    }
    
};
points::points(int point1, int point2)
{
    int p1 = point1;
    int p2 = point2;
    int  getp1();
    {
        return p1;
    }
    int getp2();
    {
        return p2;
    }

    int main()
    {
        // copy constructor
        points obj1;
        points obj1 = obj2;

        // invoking parameterised constructor with different values of points
        points pointobj1(20, 40);

        cout << "value of point one = " << pointobj1.p1 << p1.getp1() << endl;
        cout << "value of point two = " << pointobj1.p2 << p2.getp2() << endl;

        return 0;
    }