#include<iostream>

class Calculate
{
private:
    int num1, num2, total;
public:
    Calculate(int, int);
    void sum();
};

Calculate :: Calculate(int x, int y)
{
    num1 = x;
    num2 = y;
    total = 0;
}

void Calculate :: sum()
{
    total = num1+num2;
    std::cout<<"Sum is = "<<total;
}

int main()
{
    int var1, var2;
    std::cout<<"Enter value1: ";
    std::cin>>var1;

    std::cout<<"Enter value2: ";
    std::cin>>var2;

    Calculate c1(var1, var2);
    c1.sum();
    return 0;
}
