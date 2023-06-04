#include<iostream>
using namespace std;

class Sample
{
    int i, j;
public:
    Sample(int a, int b)
    {
        i = a;
        j = b;
    }
    Sample (Sample &s)
{
    cout<<"Copy Constructor";
    j = s.j;
    i = s.i;
}
};

