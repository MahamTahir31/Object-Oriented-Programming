/*

NAME : MAHAM TAHIR
SEAT NUMBER : B20102063
ASSIGNMENT TOPIC : INHERITANCE


*/
#include <iostream>
#include <string>
using namespace std;

class Humans        // PARENT CLASS
{
protected:
// ATTRIBUTES :

    string Speak;
    string See;
    string Hear;
    string Walk;
    string Talk;

public:
    void details()
    {
        cout << "\t\t\t Here we are discussing about some senses of different human beings :\n ";
        cout << "\t\t\t=====================================================================" << endl;
    }
};


class normal : public Humans    // FIRST CHILD CLASS
{
public:
    normal()        // CONSTRUCTOR
    {
        Speak = "can speak";
        See = "can see";
        Hear = "can hear";
        Walk = "can walk";
        Talk = "can talk";
    }
    void normal_Humans()
    {
        cout << "--> Normal humans " << Speak << endl;
        cout << "--> Normal humans " << See << endl;
        cout << "--> Normal humans " << Hear << endl;
        cout << "--> Normal humans " << Walk << endl;
        cout << "--> Normal humans "<< Talk << endl;
    }
};

class blind : public Humans     // SECOND CHILD CLASS
{
public:
    blind()         // CONSTRUCTOR
    {
        Speak = "can speak";
        See = "can not see";
        Hear = "can hear";
        Walk = "can walk";
        Talk = "can talk";
    }
    void Blind_Humans()
    {
        cout << "--> Blind humans " << Speak << endl;
        cout << "--> Blind humans " << See << endl;
        cout << "--> Blind humans " << Hear << endl;
        cout << "--> Blind humans " << Walk << endl;
        cout << "--> Blind humans " << Talk << endl;
        cout << "--> But blind humans " << See << endl;
    }
};

class deaf : public Humans      // THIRD CHILD CLASS
{
public:
    deaf()          // CONSTRUCTOR
    {
        Speak = "can speak";
        See = "can see";
        Hear = "can not hear";
        Walk = "can walk";
        Talk = "can talk";
    }
    void deaf_Humans()
    {
        cout << "--> Deaf humans " << Speak << endl;
        cout << "--> Deaf humans " << See << endl;
        cout << "--> Deaf humans " << Walk << endl;
        cout << "--> Deaf humans " << Talk << endl;
        cout << "--> But deaf humans " << Hear << endl;
    }
};

class paralyzed : public Humans   // FOURTH CHILD CLASS
{
public:
    paralyzed()         // CONSTRUCTOR
    {
        Speak = "can speak";
        See = "can see";
        Hear = "can hear";
        Walk = "can not walk";
        Talk = "can talk";
    }
    void paralyzed_Humans()
    {
        cout << "--> Paralyzed humans " << Speak << endl;
        cout << "--> Paralyzed humans " << See << endl;
        cout << "--> Paralyzed humans " << Hear << endl;
        cout << "--> Paralyzed humans " << Talk << endl;
        cout << "--> But paralyzed humans  " << Walk << endl;
    }
};

class dumb : public Humans     // FIFTH CHILD CLASS
{
public:
    dumb()          // CONSTRUCTOR
    {
        Speak = "can speak";
        See = "can see";
        Hear = "can hear";
        Walk = "can walk";
        Talk = "can not speak";
    }
    void dumb_Humans()
    {
        cout << "--> Dumb humans " << Speak << endl;
        cout << "--> Dumb humans " << See << endl;
        cout << "--> Dumb humans " << Hear << endl;
        cout << "--> Dumb humans " << Walk << endl;
        cout << "--> But dumb humans " << Talk << endl;
    }
};

// MAIN PROGRAM STARTS FROM HERE :
// ________________________________


int main()
{
    string kind;
    cout << "\t\t\t\t\tEnter kind of human for details:" << endl;
    cout << "\t\t\t\t       ==================================" << endl;
    cin >> kind;
    if (kind == "normal")
    {
        normal obj1;        // INVOKING CONSTRUCTOR
        obj1.details();
        obj1.normal_Humans();
    }
    else if (kind == "blind")
    {
        blind obj2;         // INVOKING CONSTRUCTOR
        obj2.details();
        obj2.Blind_Humans();
    }
    else if (kind == "deaf")
    {
        deaf obj3;          // INVOKING CONSTRUCTOR
        obj3.details();
        obj3.deaf_Humans();
    }
    else if (kind == "paralyzed")
    {
        paralyzed obj4;     // INVOKING CONSTRUCTOR
        obj4.details();
        obj4.paralyzed_Humans();
    }
    else if (kind == "dumb")
    {
        dumb obj5;          // INVOKING CONSTRUCTOR
        obj5.details();
        obj5.dumb_Humans();
    }
 }

 /*

warning alert for user !
keep remain off your caps lock at the time of giving input.
and enter your kinds in small letters

*/