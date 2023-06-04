#include<iostream>
using namespace std;

class TypeofArg
{
public:
    void display(int x)
    {
        cout<< "x is: " << x << endl;
    }

    void display(float y)
    {
        cout<< "y is: " << y << endl;
    }

    void display(char z)
    {
        cout<< "z is: " << z << endl;
    }
};

int main()
{
    TypeofArg t1;
    t1.display(3);
    t1.display(3.77f);
    t1.display('c');

    return 0;
}
