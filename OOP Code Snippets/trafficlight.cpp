#include <iostream>
#include <string>
using namespace std;

const int RED = 1;   
const int GREEN = 2;
// trafficlight.h
class trafficlight{
    private:
        int colour;
    public:
        trafficlight();
        void changecolour();
        void showcolour();
};

// trafficlight.cpp

trafficlight :: trafficlight(){
    colour = RED;
}
void trafficlight :: changecolour(){
    if (colour == RED){
        colour = GREEN;
    }
    else {
        colour = RED;
    }
}
void trafficlight :: showcolour(){
    if (colour == RED){
        cout << "RED" << endl;
    
    }
    else{
        cout << "GREEN" << endl;
    }
}
trafficlight external_light; // external/global object
// main.cpp
int main(){
    external_light.changecolour();
    for (int i = 0; i < 2;i++){
        cout << "times the loop has executed " << i << endl;
        
        trafficlight automatic_light; // automatic/local object
        automatic_light.changecolour();
        static trafficlight static_light; // static object
        static_light.changecolour();
        cout << "the automatic light is ";
        automatic_light.showcolour();
        cout << endl;
        cout << "the static light is ";
        static_light.showcolour();
        cout << endl;}
    cout << "external light is ";
    external_light.showcolour();
    }
