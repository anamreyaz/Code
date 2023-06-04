#include<iostream>
using namespace std;

class Student
{
public:
    virtual void print()
    {
        cout<< "Base function"<<endl;
    }
};

class Derived : public Student
{
public:
    void print()
    {
        cout<< "Derived Function" <<endl;
    }
};

int main()
{
    Derived derived1;

    Student* student1 = &derived1;

    student1->print();

    return 0;
}
