#include <iostream>
using namespace std;
// point.h
class Point{
    private:
        int x, y;
    public:
        void setXY(int x_in, int y_in);
        int getX();
        int getY();
        int operator==(const Point &point); // overload relational operator to check relation between two points
};

// point.cpp
void Point :: setXY(int x_in, int y_in){
    x = x_in;
    y = y_in;
}

int Point :: getX(){
    return x;
}

int Point :: getY(){
    return y;
}
int Point :: operator==( const Point & point){
    if (x==point.x && y == point.y){
        return 1;
    }
    else{
        return 0;
    }
} 

// main.cpp

int main(){
    Point point1, point2;
    point1.setXY(100, 100);
    cout << "\n";

    cout << "the poisition of point 1 is (" << point1.getX()<<","<<point1.getY()<<")"<< endl;

    point2.setXY(100, 100);
    cout << "the poisition of point 2 is (" << point2.getX()<<","<<point2.getY()<<")"<< endl;
    if(point1==point2){
        cout << "point (" << point1.getX() << "," << point1.getY();
        cout << ") and point (" << point2.getX() << "," << point2.getY();
        cout << ") are the same" << endl;
    }
}