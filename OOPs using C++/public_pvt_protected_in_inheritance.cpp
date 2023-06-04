#include<iostream>
using namespace std;

class Employee
{
    private: char name[10];
    public: int phoneNo;

    public:
        void getData()
        {
            cout<< "Enter name: "<<endl;
            gets(name);

        }

        void putData()
        {
            cout<< "Name: "<<name<<endl;

        }

    protected: float salary;

    void getSalary()
    {
        cout<< "Salary: ";
    }

};

class Manager : private Employee
{
private:
    char title[10];

    void showData()
    {
        Employee :: putData();
    }
    void showData2()
    {
        Employee :: putData();
    }
};

int main()
{
    Manager m1;
    m1.showData();

    return 0;
}
