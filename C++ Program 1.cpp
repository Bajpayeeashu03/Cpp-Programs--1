#include <iostream>
using namespace std;
class Tuesday{
private:
    string name;
    static int p,q;
public:
    Tuesday(string name)
    {
        p++;
        this->name = name;
        cout <<name << " created." << endl;
        cout <<"Alive "<<p<< " ";
        cout<< "Dead "<<q<<endl;
    }
    ~Tuesday() 
    {
      p--;
      q++;
      cout <<name << " destroyed." << endl;
      cout <<"Alive "<<p<< " ";
      cout<< "Dead "<<q<<endl;
    }
};
int Tuesday::p=0;
int Tuesday::q=0;
int main() 
{
    Tuesday obj1("Object 1");
    Tuesday obj2("Object 2");
    {
      Tuesday obj3("Object 3");
      Tuesday obj4("Object 4");
    }
    {
      Tuesday obj5("Object 5");
    }
     Tuesday obj6("Object 6");
      return 0;
}