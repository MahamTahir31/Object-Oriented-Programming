#include <iostream>
using namespace std;
class Complex{
    private:
        int real;
        float imaginary;
    public:
        friend ostream &operator<<(ostream &out, Complex &obj);
};
ostream &operator<<(ostream &out, Complex &obj)
        {
            out << obj.real << obj.imaginary;
            return out;
        }
int main(){
    Complex obj;
    cout << obj.real << endl;
    return 0;
}
// class Complex{
//     public:
//         int real;
//         float imaginary;
// };
// ostream &operator<<(ostream &out, Complex &obj)
// {
//     out << obj.real << obj.imaginary;
//     return out;
// }