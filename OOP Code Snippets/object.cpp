#include <iostream>
#include <string.h>
using namespace std;

// objec.h

class object{
    private:
        char name[20];
    public:
        object(char *name_in); // parametrised constructord
        ~object();

};

// object.cpp
object :: object (char *name_in){
    strncpy(name, name_in, 19);
    name[19] = '\0';
    cout << "constructor called for " << name << endl;
}
object :: ~object(){
    cout << " destructor called for " << name << endl;
}
object external_object("external object");

// main.cpp

int main(){
    cout << "beginning of main " << endl;
    object auto_object("automatic object");
    static object static_object("static object");
    object *object_pointer = new object("dynamic object");
    delete object_pointer;
    cout << "end of main" << endl;
}