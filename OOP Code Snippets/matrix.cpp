#include <iostream>
#include <cstdio>
using namespace std;

class Matrix // an interface
{

public:
    virtual double getElement(int i, int j) = 0;
    virtual void setElement(int i, int j, double value) = 0;
    virtual Matrix &add(Matrix &other) = 0;
    virtual Matrix &Multiply(Matrix &other) = 0;
};

class Matrix2DArray : public Matrix // class Matrix2DArray uses interface Matrix
{

private:
    double **data;
    double **result;
    int m, n;
    int mini, max;

public:
    Matrix2DArray() // null constructor
    {

        m = 3;
        n = 3;

        data = new double *[m];
        for (int i = 0; i < m; i++)
        {
            data[i] = new double[n];
        }
    }

    Matrix2DArray(int rows, int columns) // parametrised constructor
    {

        m = rows;
        n = columns;

        data = new double *[m];
        for (int i = 0; i < m; i++)
        {
            data[i] = new double[n];
        }
    }

    int Min()
    {

        mini = 1000;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mini > data[i][j])
                {
                    mini = data[i][j];
                    cout << endl
                         << "Min = " << mini << endl;
                }
            }
        }

        return mini;
    }

    int Max()
    {

        int max = 0;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (max < data[i][j])
                    max = data[i][j];
        cout << endl
             << "Max = " << max << endl;

        return max;
    }
 // overloading an exertion operator
    friend ostream &operator<<(ostream &out, Matrix2DArray &Matrix2D)
    {
        out << "2D Matrix : ";
        for (int i = 0; i < Matrix2D.m; i++)
        {
            out << endl;
            out << "|";
            for (int j = 0; j < Matrix2D.n; j++)
            {
                if (j > 0)
                    out << " ";
                out << Matrix2D.data[i][j];
                if (j == Matrix2D.m - 1)
                    cout << "|";
            }
        }
        return out;
    }
// overloading an exertion operaotor
    friend istream &operator>>(istream &in, Matrix2DArray &Matrix2D)
    {
        double input = 0.0;
        for (int i = 0; i < Matrix2D.m; i++)
        {
            cout << endl
                 << "Enter Row " << (i + 1) << " elements " << endl;

            for (int j = 0; j < Matrix2D.n; j++)
            {
                cout << "Enter " << (j + 1) << " Element : " << endl;

                in >> input;
                Matrix2D.setElement(i, j, input);
            }
        }
        return in;
    }

    Matrix &add(Matrix &other)
    {

        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                other.setElement(i, j, data[i][j] + other.getElement(i, j));

        return other;
    }

    Matrix2DArray &add(Matrix2DArray &other, Matrix2DArray &result)
    {

        if (other.m == m && other.n == n)
        {
            for (int i = 0; i < m; i++)
                for (int j = 0; j < n; j++)
                    result.setElement(i, j, data[i][j] + other.getElement(i, j));
        }

        else
        {
            cout << "Square Matrix is needed for Addition" << endl;
        }
        return result;
    }

    Matrix &Multiply(Matrix &other)
    {
    }

    Matrix2DArray &Multiply(Matrix2DArray &other, Matrix2DArray &result)
    {
        if (n == other.m)
        {
            double **mult = new double *[m];

            for (int i = 0; i < m; i++)
                mult[i] = new double[m];

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    mult[i][j] = 0;
                    for (int k = 0; k < n; k++)
                    {
                        mult[i][j] += data[i][k] * other.getElement(k, j);
                    }
                }
            }

            for (int i = 0; i < m; i++)
                for (int j = 0; j < n; j++)
                    result.setElement(i, j, mult[i][j]);

            return result;
        }

        else
        {
            cout << "Multiplication can't be performed" << endl;
        }

        return result;
    }

    double getElement(int i, int j)
    {
        return data[i][j];
    }
    void setElement(int i, int j, double value)
    {
        data[i][j] = value;
    }

    void Initiliaze_zeroArray()
    {

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                data[i][j] = 0;
            }
        }
    }
};

int main()
{

    Matrix2DArray m3;
    Matrix2DArray m2;
    Matrix2DArray result;
    result.Initiliaze_zeroArray();

    cin >> m2;
    cin >> m3;
    cout << m2 << endl;
    cout << m3 << endl;
    m2.add(m3, result);
    m2.Multiply(m3, result);
    cout << result << endl;

    return 0;
}