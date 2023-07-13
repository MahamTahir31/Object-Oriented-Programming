#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

// box.h

class box{
    private:
        int height, width, depth;
    public:
        void setData();
        void showData();

        friend ostream &operator<<(ostream &out, box &bx);
        friend istream &operator>>(istream &in, box &bx);

};

// box.cpp
void box :: setData(){
    cout << "enter height : " << endl;
    cin >> height;
    cout << "enter width : " << endl;
    cin >> width;
    cout << "enter depth : " << endl;
    cin >> depth;
}
void box :: showData(){
    cout << "heigth : " << setw(5) << height<<endl;
    cout << "width : " << setw(5) << width <<endl;
    cout << "depth : " << setw(5) << depth<<endl;
    
}
ostream & operator <<(ostream &out, box &bx){
    out << bx.height << endl;
    out << bx.width << endl;
    out << bx.depth << endl;
    return out;
}
istream &operator>>(istream &in, box &bx){
    in >> bx.height >> bx.width >> bx.depth;
    return in;
}