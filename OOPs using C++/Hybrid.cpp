#include<iostream>
using namespace std;

class Books
{
public:
    Books()
    {
        cout<< "This is a book"<<endl;
    }
};

class Fiction : public Books
{
public:
    Fiction()
    {
        cout<< "This is fiction"<<endl;
    }
};

class SciFi
{
public:
    SciFi()
    {
        cout<< "This is SciFi"<<endl;
    }
};

class Abc: public Fiction, public SciFi
{
public:
    Abc()
    {
        cout<< "Abc is a Science Fiction"<<endl;
    }
};

int main()
{
    Abc obj;
    return 0;
}

