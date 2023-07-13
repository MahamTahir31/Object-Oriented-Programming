#include <iostream>
#include <string.h>
using namespace std;

// car.h

class car
{
private:
    char color[10];

public:
    car(char *color_in);
    char *getColor();
};
// car.cpp

car ::car(char *color_in)
{
    strncpy(color, color_in, 9);
    color[9] = '\0';
}
 
char *car ::getColor()
{
    return color;
}
// main.cpp

int main()
{
    car *garrage = NULL;
    int menu_choice = 0;
    char temp_color[10];
    while (menu_choice != 3)
    {
        cout << "enter 1 to put car in garrage, 2 to remove it , 3 to quite ";
        cin >> menu_choice;
        if (menu_choice == 1 && garrage == NULL)
        {
            cout << "enter color of car";
            cin >> temp_color;
            garrage = new car(temp_color);
            cout << "color is " << garrage->getColor() << endl;
        }
        if (menu_choice == 2 && garrage != NULL)
        {
            delete garrage;
            garrage = NULL;
            cout << "car removed" << endl;
        }
    }
        menu_choice++;

    if (garrage != NULL)
    {
        delete garrage;
    }
}