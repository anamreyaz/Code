#include <iostream>
using namespace std;

class Base
{
   public : static int val;
   static int func(int a)
   {
      cout << "Static member function called"<<endl;
      cout << "The value of a : " << a<<endl;
   }
};
int Base::val=28;
int main()
{
   Base b;
   Base::func(8);
   cout << "The static variable value : " << b.val;
   return 0;
}
