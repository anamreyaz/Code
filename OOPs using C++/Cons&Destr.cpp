#include <iostream>
using namespace std;
class Parent
{
    public:
    Parent()
    {
        cout << "Base class" << endl;
    }
};
class Child : public Parent
{
    public:
    Child()
    {
        cout << "Sub class" << endl;
    }
};

int main() {
    Child obj;

    return 0;
}
