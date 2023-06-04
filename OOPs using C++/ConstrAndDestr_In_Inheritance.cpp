#include<iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout<<"Constructor of A"<<endl;
    }
    ~A()
    {
        cout<<"Destructor of A"<<endl;
    }
};
class B
{
public:
    B()
    {
        cout<<"Constructor of B"<<endl;
    }
    ~B()
    {
        cout<<"Destructor of B"<<endl;
    }
};

class C : virtual public A
{
public:
    C()
    {
        cout<<"Constructor of C"<<endl;
    }
    ~C()
    {
        cout<<"Destructor of C"<<endl;
    }
};

class D : virtual public A
{
public:
    D()
    {
        cout<<"Constructor of D"<<endl;
    }
    ~D()
    {
        cout<<"Destructor of D"<<endl;
    }
};

class E
{
public:
    E()
    {
        cout<<"Constructor of E"<<endl;
    }
    ~E()
    {
        cout<<"Destructor of E"<<endl;
    }
};

class F: public B, public C, public D
{
public:
    F()
    {
        cout<<"Constructor of F"<<endl;
    }
    ~F()
    {
        cout<<"Destructor of F"<<endl;
    }
};

int main()
{
    F obj;
}

