#include<iostream>
using namespace std;

class OrderofArg
{
public:
    void display(int a, float b)
    {
        cout<< "First int then float" << endl;
        cout<< "a is: " << a << endl;
        cout<< "b is: " << b << endl;
        cout<< " " << endl;
    }

    void display(float b, int a)
    {
        cout<< "First float then int" << endl;
        cout<< "b is: " << b << endl;
        cout<< "a is: " << a << endl;
        cout<< " " << endl;
    }

};

int main()
{
    OrderofArg o1;
    o1.display(1, 3.11f);
    o1.display(3.11f, 1);

    return 0;
}

