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

    int main()
    {
        Fiction obj;
        obj.showData();
        return 0;
    }
