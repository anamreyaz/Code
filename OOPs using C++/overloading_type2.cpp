#include<iostream>
using namespace std;

class Overload
{
public:
    void display(char C)
    {
        cout<< "Running char func";
        cout<<endl<<C;
    }

    void display(int a)
    {
        cout<< "Display of int"<<a;
    }

    void display(float z)
    {
        cout<< "Display of z";
        cout<<z;
    }
};

int main()
{
    Overload abc;
    abc.display (51);

}
