#include<iostream>
using namespace std;
    class Books
    {
    public:
        void showData1()
        {
            cout<<"books"<<endl;
        }
    };

    class Fiction : public Books
    {
   public:
       void showData2()
       {
        cout<<"fiction"<<endl;
        }
    };

    class NonFiction : public Books
    {
    public:
        void showData3()
        {
            cout<<"non fiction"<<endl;
        }
    };

    int main()
    {
        Fiction fiction1;
        cout<<"fiction class:"<<endl;
        fiction1.showData1();
        fiction1.showData2();

        NonFiction nonfiction1;
        cout<< "Non Fiction class:"<<endl;
        nonfiction1.showData1();
        nonfiction1.showData3();



        return 0;


    }


