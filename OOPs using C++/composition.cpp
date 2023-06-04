#include<iostream>
using namespace std;

class Engine
{
    public: int power;
};

class Car
{
public:
    Engine e;

    string company;

    string colour;

    void showDetails()
    {
        cout<< "Company is: "<<company<<endl;
        cout<< "Colour is: "<<colour<<endl;
        cout<< "Engine power is: "<<e.power<<endl;
    }
};

int main()
{
    Car c;
    c.e.power = 500;
    c.company = "Hyundai";
    c.colour = "Black";
    c.showDetails();

    return 0;
}
