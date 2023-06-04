#include<iostream>
using namespace std;

class Base1
{
protected:
    int ivar1;
public:
    void show_1()
    {
        std:cout<<ivar1<<endl;
    }

};
class Base2
{
protected:
    int ivar2;
public:
    void show_2()
    {
        cout<<ivar2<<endl;
    }
};
class Derived : public Base1, public Base2
{
public:
    void set(int x, int y)
    {
        ivar1 = x;
        ivar2 = y;
    }
};
int main()
{
    Derived d;
    d.set(10,20);
    d.show_1();
    d.show_2();
    return 0;
}
