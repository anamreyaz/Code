#include<iostream>
using namespace std;
class Test
{
public:
    Test()
    {
        cout<<"\nConstructor invoked"<<endl;
    }
    ~Test()
    {
        cout<<"\nDestructor invoked\n"<<endl;
    }
};
Test obj1;
int main()
{
    cout<<"\nmain begins"<<endl;
    Test obj2;
    {
        cout<<"\nInner block begins\n"<<endl;
        Test obj3;
        cout<<"\nInner block ends"<<endl;
    }
    cout<<"main ends\n";
    return 0;
}
