#include <iostream>
#include <string> 
#include <cstring>
using namespace std;

// namedpoint.h

class NamedPoint {
  private:
    int x,y;
    char *name;
    public:
        NamedPoint(char *name_in);
        NamedPoint(const NamedPoint & n);
        ~NamedPoint();
        void setXY(int x_in, int y_in);
        void getXY(int &x_out, int &y_out);
        char *getName();
        NamedPoint &operator=(const NamedPoint & n);
        void show();
};

// namedpoint.cpp

NamedPoint :: NamedPoint(char *name_in){
    x, y = 0;
    name = new char[strlen(name_in) + 1];
    strcpy(name, name_in);
}
NamedPoint ::NamedPoint(const NamedPoint &n){
    x = n.x;
    y = n.y;
    name = new char[strlen(n.name) + 1];
    strcpy(name, n.name);
}
NamedPoint :: ~NamedPoint(){
    delete[] name;
}

NamedPoint & NamedPoint :: operator=(const NamedPoint & n){
    x = n.x;
    y = n.y;
    delete[] name;
    name = new char[strlen(n.name) + 1];
    strcpy(name, n.name);
    return *this;
}
void NamedPoint ::show(){
    cout << name << "X : " << x << "Y:" << y << endl;
}

// main.cpp

int main ()

{
    NamedPoint point1("origin"), point2("destination");
    point1.setXY(0, 0);
    point2.setXY(100, 150);
    cout << "details of point 1 : " << endl;
    point1.show();
    cout << "details of point 2 : " << endl;
    point2.show();
    NamedPoint point3 = point1;
    cout << "details of point 3 after copy constructor from point 1 : " << endl;
    point3.show();
    point3 = point2;
    cout << "details of point 3 after assignment to point 2 : " << endl;
    point3.show();
}