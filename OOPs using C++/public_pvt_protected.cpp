#include<iostream>
using namespace std;

class Student
{
    public: char name[20];
    private: int enrolmentNo;
    protected: int phoneNo;

    public:
        void displayName()
        {
            cout<< "Name: "<<name<<endl;
        }

    public:
        void displayEnrolmentNo(int a)
        {
            enrolmentNo = a;
            cout<< "Enrolment No.: "<<enrolmentNo<<endl;
        }
};

class StudentS1 : public Student
{
    public:
    void displayPhoneNo(int b)
    {
        phoneNo = b;
        cout<< "Phone No.: " <<phoneNo<<endl;
    }
};

int main()
{
    int enrolmentInput;
    int phoneInput;

    Student S1;
    cout<< "Enter your name: ";
    cin>>S1.name;
    S1.displayName();

    cout<< "Enter your Enrolment No.: ";
    cin>> enrolmentInput;
    S1.displayEnrolmentNo(enrolmentInput);

    StudentS1 anam;
    cout<< "Enter your Phone No.: ";
    cin>> phoneInput;
    anam.displayPhoneNo(phoneInput);

    return 0;




}
