#include<iostream>
using namespace std;

    class Books
    {
    public:
        void showData()
        {
            cout<<"OOPS using C++"<<endl;
        }

    };
    class Fiction : public Books
    {

    };

    class Scifi : public Fiction
    {

    };
    int main()
    {
        Scifi obj;
        obj.showData();
        return 0;
    }
