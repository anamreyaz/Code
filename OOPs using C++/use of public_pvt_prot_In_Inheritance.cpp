#include <iostream>
using namespace std;

class Base
{
  private:
    int pvt = 1;

  protected:
    int prot = 2;

  public:
    int pub = 3;

    int getPVT()
    {
      return pvt;
    }
};

class PublicDerived : public Base
{
  public:

    int getProt()
    {
      return prot;
    }
};

class ProtectedDerived : protected Base
{
  public:

    int getProt()
    {
      return prot;
    }

    int getPub()
    {
      return pub;
    }
};

class PrivateDerived : private Base
{
  public:

    int getProt()
    {
      return prot;
    }

    int getPub()
    {
      return pub;
    }
};


int main()
{
  PublicDerived object1;
  cout << "Private = " << object1.getPVT() << endl;
  cout << "Protected = " << object1.getProt() << endl;
  cout << "Public = " << object1.pub << endl;

  ProtectedDerived object2;
  cout << "Private cannot be accessed." << endl;
  cout << "Protected = " << object2.getProt() << endl;
  cout << "Public = " << object2.getPub() << endl;

  PrivateDerived object3;
  cout << "Private cannot be accessed." << endl;
  cout << "Protected = " << object3.getProt() << endl;
  cout << "Public = " << object3.getPub() << endl;
  return 0;
}
