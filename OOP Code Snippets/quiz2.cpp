/*
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Q3
//____

class A
{
    public:
    int ivar = 7;
    void m1()
    {
        cout<<"A\'s m1, ";
    }
    void m2()
    {
        cout<<"A\'s m2, ";
    }
    void m3()
    {
        cout<<"A\'s m3, ";
    }
};
class B : public A
{
    public:
    void m1()
    {
        cout<<"B\'s m1, ";
    }
};
class C : public B
{
    public:
    void m3()
    {
        cout<<"C\'s m3, "+ to_string((ivar + 6));
    }
};
class Mixed2
{
    public:
    static void main(vector<string> &args)
    {
        A *a = new A();
        B *b = new B();
        C *c = new C();
        /*i did in below (at line 51) like quize code which was:
            A *c = new C();
            but not getting same ouput as java output
            therefore i connected class C with pointer a2 instead of parent class A

        C *a2 = new C();
        b->m1();
        c->m2();
        a->m3();
        cout<<endl;

        c->m1();
        c->m2();
        c->m3();
        cout<<endl;

        a->m1();
        b->m2();
        c->m3();
        cout<<endl;

        a2->m1();
        a2->m2();
        a2->m3();
    }
};
int main(int argc,char**argv)
{
    vector<string> parameter(argv + 1,argv + argc);
    Mixed2::main(parameter);
    return 0;
}


// Q5
//____
class Rational{
    public:
        Rational();
        Rational(int numer, int denom);

        int getNumerator() const;
        int getDenominator() const;

        friend void display(ostream &out, const Rational &value);
        friend bool operator<(const Rational &left, const Rational &right);
    private:
        int numerator;
        int denominator;
};
*/
// Q7
//____
/*
#include <iostream>
#include<string.h>
using namespace std;

class student
{
    private:
     int count;

    public:
     string courses;
     int num;


    student(void)   // null constructor
    {

    }


    student(int num , string Courses) // parametrize constructor
    {
        this->num = num;
        this->courses = Courses;
    }


    student(const student &Object) //copy constructor
    {
        num = Object.num;
        courses = Object.courses;
    }

    //setter,getter
    void Setcount(int num)  //applying setter and getter functions
    {
        this->num = num;
    }

    int Getnum()
    {
        return num;
    }

    void Setcourses(string courses)
    {
        this->courses = courses;
    }

    string Getcourses(int num)
    {
        return courses;
    }



     string addcourses(string courses)
    {
        this->courses = courses;
        return courses;

    }

     student operator + (student value) //overloading for '+' (addition of two objects)
     {
          student obj1;
          obj1.num = this->num + value.num;
          obj1.courses = this->courses + value.courses;
         return obj1;
     }

    ~student()  //destructor
    {


    }

};


   ostream &operator << (ostream &out, student &obj)    //overloading for '<<' (insertion)
    {
        out << "Count: " << obj.num << endl;
        out << "Courses: " << obj.courses << endl;
        return out;
    }


int main()
{
 student Salman;
 student Akbar(Salman);
Salman.addcourses("BSCS 413");
 cout<< Akbar.Getcourses(0) << endl;
 Akbar = Salman;
 cout<< Akbar;
 cout<< Salman;
}
*/

// Q8
//____

class nPOINT

{
private:
    static int lenght;
    int *p;

public:
    nPOINT();
    ~nPOINT();
    void Set(int index, int val)
    {
        p[index] = val;
    }
    Void setlength(int length)
    {
        this->length = length;
    }
    int getlength()
    {
        return length;

    int Get(int index) const
        {
            return p[index];
        }
        static int Length()
        {
            return lenght;
        }
    };
    int nPOINT::length = 4;

    // having confusion in this code therefore couLd not write its main.cpp