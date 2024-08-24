#include <iostream>
#include <string>
using namespace std;
template < class V,class U>
class Multiplier {
  private:
  V x;
  U y;
public:
    multiply(V a, U b) 
    {
      x=a;
      y=b;
      cout <<" Result Is :"<<x*y<<endl;
    }
};
int main() 
{

   int input1;
   double input2;
   cout << "Enter the first number: ";
   cin >> input1;
   cout << "Enter the second number: ";
   cin >> input2;
   Multiplier<int,double>p;
   p.multiply(input1,input2);
   return 0;
}