#include <iostream>
using namespace std;

 //<<interface>>  Curve

class Curve
{

protected:
    float *pointx;          // initializing pointers for dynamic array
    float *pointy;
    float arr_x;
    float arr_y;

public:
    virtual float Parameteric_curve(float initial_point) = 0; // pure abstract functions which make this abstract class an interface
    virtual void display_parameteric_curve_points() = 0;
};

class ParametericCurve : public Curve       // class parametricCurve iherits Curve
{

public:
    float Parameteric_curve(float initial_point)
    {
       
         pointx = new float(10.0);          // store dynamic arrays on heap
         pointy = new float(10.0);
        for (int i = initial_point; i < 10.0; i++) // for loop is for calculating parametric equations and storing it to dynamic array
        {
            float x = 2 + 3 * i;
           
            pointx[i] = x;                  
            float y = 5 + 3 * i;
           
            pointy[i] = y;
        
            return 0;
        }
         arr_x = pointx; // error occured :(
         arr_y = pointy;

        return 0;
    }
    void display_parameteric_curve_points() // showing calculated paramteric equations
    { 
        cout << "------points------" << endl;
        cout <<"x =" << arr_x << endl;
        cout <<"y =" << arr_y << endl;
    }
};

int main()
{
    ParametericCurve obj;

    obj.Parameteric_curve(1.0);
    obj.display_parameteric_curve_points();
}
