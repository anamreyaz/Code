#include<iostream>
using namespace std;

class Noargs
{
public:
    void display(int x)
    {
        cout<< "Single Arg" << endl;
        cout<< "x is: " << x << endl;
        cout<< " " << endl;
    }

    void display(int y, float z)
    {
        cout<< "Double Arg" << endl;
        cout<< "y is: " << y << endl;
        cout<< "z is: " << z << endl;
        cout<< " " << endl;
    }

    void display(int a, float b, char d)
    {
        cout<< "Triple Arg" << endl;
        cout<< "a is: " << a << endl;
        cout<< "b is: " << b << endl;
        cout<< "d is: " << d << endl;
        cout<< " " << endl;
    }
};

int main()
{
    Noargs n1;
    n1.display(1);
    n1.display(1, 3.11f);
    n1.display(1, 3.11f, 'a');
    return 0;
}
