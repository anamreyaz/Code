#include<iostream>
using namespace std;

class Book
{
    public: int book_no;
    public: char book_title[30];
    public: char author[30];

public:
    void input()
    {
        cout<<"Book No.: 50 "<<endl;
        cout<<"Book Title: OOPS"<<endl;
        cout<<"Author: E.Balagurusamy"<<endl;

    }

public:
    void displayInfo()
    {

        cout<<"Book is available";
    }

};

int main()
{
    Book fiction;
    fiction.input();
    fiction.displayInfo();
    return 0;
}
