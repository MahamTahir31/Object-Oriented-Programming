// Constructors In C++
// Parametrised constructor - program to calculate distance between two points
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Point
{
    int x, y;
    friend float Distance(Point &, Point &);
    public:
        Point(int a, int b){
            x = a;
            y = b; 
        }
        void displayPoint(){
            cout<< "Point is ("<< x << ","<<y<<")"<<endl;
        }
   
};

float Distance(Point &a, Point &b){
    float res = sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2));
    return res;
}
int main()
{
    Point p(2,2);
    p.displayPoint();

    Point q(4,4);
    q.displayPoint();

    float distance = Distance(p, q);
    cout<< "The distance between point p and q is " << distance << endl;

    return 0;
}
