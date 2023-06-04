#include<iostream>
using namespace std;

class Sample
{
private:
    double a;
    double b;

public:
    Sample(double i, double j)
    {
        a = i;
        b = j;
    }

    Sample (Sample &s)
    {
        a = s.a;
        b = s.b;
    }

    double SampleAddition()
    {
        return a+b;
    }
};

int main()
{
    Sample Sample1(5.2, 3.1);

    Sample Sample2 = Sample1;

    cout<<"Addition of Sample1: "<<Sample1.SampleAddition() <<endl;
    cout<<"Addition of Sample2: "<<Sample2.SampleAddition();
}
