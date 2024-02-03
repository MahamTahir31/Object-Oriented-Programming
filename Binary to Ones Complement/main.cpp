#include <iostream>
#include <string>

using namespace std;

class Binary
{
    string s; // private by default

public:
    void read(void);
    void check_bin(void);
    void ones_comp(void);
    void display(void);
};

void Binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void Binary ::check_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Format!" << endl;
            exit(0);
        }
    
    }
}

void Binary ::ones_comp(void)
{
    check_bin(); // nested function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if(s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}
void Binary ::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}
int main()
{
    Binary num;
    num.read();
    // num.check_bin(); nested in ones_comp()
    num.display();
    num.ones_comp();
    num.display();
    return 0;
}