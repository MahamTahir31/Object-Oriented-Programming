#include <iostream>
#include <string>
using namespace std;

// pokemon.h
class pokemon{
    public:
        string name;
        int level;
    public:
        
        pokemon(string name, int level);
};
// pokemon.cpp
pokemon::pokemon(string name, int level){
    this->name = name;
    this->level = level;
}
void change(pokemon poke, int level){
    poke.level = level;
    level = 50; 
    poke = pokemon("gengar", 1);
    cout << "name : " << poke.name << endl;
    cout << "level : " << poke.level << endl;
}
// main.cpp
int main(){
    
    pokemon p = pokemon("pikachu", 17);
    int level = 100;
    change(p, level);
    cout << "name :" << p.name << endl;
    cout << "level : " << p.level;

    return 0;
}