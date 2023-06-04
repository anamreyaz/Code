#include<iostream>
using namespace std;
 class Base1
 {
 protected:
    int a;
 public:
    Base1(int x)
    {
        a = x;
        cout<<"Constructor of Base1";
    }
    ~Base1()
    {
        cout<<"Destructor of Base1";
    }
 };

 class Base2
 {
 protected:
    int b;
 public:
    Base2(int y)
    {
        b = y;
        cout<<"Constructor of Base2";
    }
    ~Base2()
    {
        cout<<"Destructor of Base2";
    }
 };

 class Derived : public Base2, public Base1
 {
     int c;
public:
    Derived(int i, int j, int k)
         {
             c = k;
             cout<<"Contructor of derived";
         }
         void show()
         {
             cout<<a;
             cout<<b;
             cout<<c;
         }

 };

 int main()
 {
     Derived ob(10,12,14)
     ob.show();
     return 0;
 }
