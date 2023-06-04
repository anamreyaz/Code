#include<iostream>
using namespace std;

class Overload
{
public:
    int max(int, int);
    float max(float, float);
};

int Overload :: max(int n1, int n2)
{
    if(n1>n2)
    {
        return n1;
    }
    else
        return n2;
}
 float Overload :: max(float n1, float n2)
 {
     if(n1>n2)
        return n1;
     else
        return n2;
 }

 int main()
 {
     Overload O1;
     cout<< "overload for int values";
     O1.max(5, 6);

     return 0;
 }
