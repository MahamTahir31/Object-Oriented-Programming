class Foo
{
    int x;
    int y;

public:
    Foo(int a, int b)
    {
        x = a;
        y = b;
    }
    Foo(void)
    {
        x = -1;
        y = -2;
    }
    void print()
    {
        cout << x << ' ' << y << endl;
    }
};

class Bar
{
    int z;

public:
    Bar(void)
    {
        z = 42;
    }
    void print()
    {
        cout << z << endl;
    }
    void doit()
    {
        z += 1;
    }
};

int main(void)
{
    Foo f;
    f.print();
}

int main(void)
{
    Foo f(5, 10);
    Bar *b = (Bar *)&f;
    b->print();
    b += 1;
    b->print();
}

void doit(Bar b)
{
    b.doit();
}
int main(void)
{
    Bar b;
    b.print();
    b.doit();
    doit(b);
    b.print();
}
