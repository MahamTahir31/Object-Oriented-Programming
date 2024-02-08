// Constructors In C++
// Destructor 
#include <iostream>
#include <string>
#include <math.h>

using namespace std;
// destructor never takes an argument nor return any value  
int count =0;
class num
{
   public:
    num() {
        count++;
        cout<< "This is the time when constructor is called for object number " << count<<endl;
    }
    ~num(){
         cout<< "This is the time when destructor is called for object number " << count<<endl;
        count--;
    }
};

int main()
{
    cout<< "Main function "<< endl;
    cout<< "Creating first object o1"<< endl;
    num o1;
    {
        cout<<"Entering this block"<<endl;
        cout<< "creating two more objects "<< endl;
        num o2, o3;
        cout<<"Exiting this block"<<endl;
    }
    cout << "Back to main"<<endl;
   
    return 0;
}
