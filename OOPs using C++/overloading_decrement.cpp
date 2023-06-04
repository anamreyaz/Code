#include<iostream>
using namespace std;

class Index
{
private:
    int x;
public:
    Index()
    {
        x = 0;
    }

    void operator --()
    {
        --x;
    }

    void Display()
    {
        cout << "x = " << x << endl;
    }
};

int main()
{
    Index i1;

    i1.Display();

    --i1;

    i1.Display();

    return 0;
}

