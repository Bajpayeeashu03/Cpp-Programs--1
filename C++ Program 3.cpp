#include <iostream>
#include <string>
using namespace std;
template < class C>
class Multiplier {
public:
    C multiply(C a, C b) 
    {
      cout <<" Result Is :"<<a*b<<endl;
    }
};
int main() {
      int c;
      do
      {
        cout << "Select the data type (1-int, 2-double, 0-Stop):- ";
        cout<< "Enter Your Choice" <<endl;
        cin >> c;
        switch (c) {
        case 1: 
        {
            int input1;
            int input2;
            cout << "Enter the first number: ";
            cin >> input1;
            cout << "Enter the second number: ";
            cin >> input2;
            Multiplier<int>p;
            p.multiply(input1,input2);
            break;
        }
        case 2: 
        {
            double num1;
            double num2;
            cout << "Enter the first number: ";
            cin >> num1;
            cout << "Enter the second number: ";
            cin >> num2;
            Multiplier<double>r;
            r.multiply(num1, num2);
            break;
        }   
        default:
            cout << "Invalid choice" <<endl;
}
        } while(c!=0);
          return 0;
}