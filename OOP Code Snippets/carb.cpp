#include <iostream>
#include <string.h>
using namespace std;

// carb.h
class car
{
private:
    char color[10]; // static array

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
    car *garages[10];
    for (int i = 0; i < 10; i++)
    {
        garages[i] = NULL;
        int menu_choice = 0;
        char temp_color[10];
        int garage_number;
        while (menu_choice != 3)
        {
            cout << "enter 1 to put car in garrage, 2 to remove it , 3 to quite ";
            cin >> menu_choice;
            if (menu_choice == 1)
            {
                cout << "the following garage numbers are empty ";
                for (int i = 0; i < 10; i++)
                {
                    if (garages[i] == NULL)
                    {
                        cout << i + 1 << ",";
                    }
                }
                cout << endl
                     << "enter garage number for car to occupy ";
                cin >> garage_number;
                if (garages[garage_number - 1] == NULL)
                {
                    cout << "enter color of car ";
                    cin >> temp_color;
                    garages[garage_number - 1] = new car(temp_color);
                    cout << "color is " << garages[garage_number - 1]->getColor() << endl;
                }
                else
                {
                    
                        cout << "that garage is not empty " << endl;
                }
            }
            if (menu_choice == 2)
            {
                cout << "the following garage numbers are occupied ";
                for (int i = 0; i < 10; i++)
                {
                    if (garages[i] != NULL)
                    {
                        cout << i + 1 << ",";
                    }
                }
                cout << endl
                     << "enter garage number to empty";
                cin >> garage_number;
                if (garages[garage_number - 1] != NULL)
                {
                    cout << garages[garage_number - 1]->getColor() << " car removed " << endl;
                    delete garages[garage_number - 1];
                    garages[garage_number - 1] == NULL;
                }
                else
                {
                    cout << "that garage is unoccupied " << endl;
                }
            }
            for (int i = 0; i < 10; i++)
            {
                if (garages[i] != NULL)
                {
                    delete garages[i];
                }
            }
        }
    }
}
