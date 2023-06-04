#include<iostream>
using namespace std;

class Overload
{
public:
    int add(int x, int y, int z)
    {
        return x + y + z;
    }


public:
    int add(int a, int b)
    {
        return a + b;
    }

};

class Derived : public Overload
{
public:
    int add(int p, int q, int r, int s )
    {
        return p + q + r + s;
    }

};

int main()
{
    Overload O1;
    cout<<O1.add(1,2,3)<<endl;
    cout<<O1.add(1,2)<<endl;

    Derived d;
    cout<<d.add(1,2,3,4);

    return 0;
}

