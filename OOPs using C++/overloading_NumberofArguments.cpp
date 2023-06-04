#include<iostream>
using namespace std;

class Overload
{
public:
    int add(int x, int y, int z)
    {
        return x+y+z;
    }


public:
    int add(int a, int b)
    {
        return a + b;
    }

};

int main()
{
    Overload O1;
    cout<<O1.add(11, 12, 10)<<endl;
    cout<<O1.add(5,6);


    return 0;
}

