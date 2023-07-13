#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class Point
{
private:
    
    float x;
    float y;

public:
    Point();
    Point(float horizontal, float vertical){
        this->x = horizontal;
        this->y = vertical;
    }
    void displaypoints(float hor , float ver){
        this->x = hor;
        this->y = ver;
    }
    void setPoint(float a , float b){
        x = a;
        y = b;
    }
    float getPoint(){
        return x;
        return y;

    }
    friend ostream &operator<<(ostream &out, const Point &p);
    ~Point(){
        
    }
};
// << interface>> curve
class Curve
{
private:
    enum type
    {
        parametric = 1,
        non_parametic = 0
    };

    //Point *points = new Point[];
    

public:
     Curve();
    virtual Curve (float x0, float y0 )=0;

     void computePoints(float x0, float y0, float t)
    {

        float x = x0 + 4 * t;
        float y = y0 - 3 * t;
        cout << "value of x-axis of parametric equation =" << x << endl;
        cout << "value of y-axis of parametric equation =" << y << endl;
    }
    friend ostream &operator<<(ostream & out, const Curve &c);
    virtual ~Curve();
    
};

class ParametricCurve
{
private:
    float minT;
    float maxT;

public:
    ParametricCurve();
    void computePoints();
    friend ostream &operator<<(ostream & out, const ParametricCurve &c);
};

int main(){

    Point p1;
    p1.setPoint(5.0, 2.5);
    cout << p1.getPoint() << endl;
    p1.displaypoints(5.0, 2.5);
}