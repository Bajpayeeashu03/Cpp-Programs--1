#include<iostream>
using namespace std;
class account{
private:
    int acc;
    int balance;
public:
    account(){
        acc = 0;
        balance = 0;
    }
    void input(){
        cout<<"Enter the account number:"<<endl;
        cin>>acc;
        cout<<"Enter the balance:"<<endl;
        cin>>balance;
    }
    void display(){
        cout<<"The account number is: "<<acc<<endl;
        cout<<"The balance is: "<<balance<<endl;
    }
    account transferByValue(account acc, int amount) {
        if(balance >= amount){
            balance -= amount;
            acc.balance += amount;
        } else {
            cout<<"Insufficient balance"<<endl;
        }
        return acc;
    }
    void transferByAddress(account* acc, int amount) {
        if(balance >= amount){
            balance -= amount;
            acc->balance += amount;
        } else {
            cout<<"Insufficient balance"<<endl;
        }
    }
    void transferByReference(account& acc, int amount) {
        if(balance >= amount){
            balance -= amount;
            acc.balance += amount;
        } else {
            cout<<"Insufficient balance"<<endl;
        }
    }
    int get()
    {
     return acc;
    }
};
int main()
{
    int n,j,i,amount,a,b,c,ip1,ip2;
    cout<<"Enter the number of accounts:"<<endl;
    cin>>n;
    account r[n];
    for(i=0;i<n;i++)
   {
        r[i].input();
    }
    for(i=0;i<n;i++)
  {
        r[i].display();
  }
    do{
    cout<<"Enter the amount you want to transfer:"<<endl;
    cin>>amount;
    cout<<"Enter the account Number from where you want to transfer:"<<endl;
    cin>>ip1;
    cout<<"Enter the account Number to where you want to transfer:"<<endl;
    cin>>ip2;
    for(i=0;i<n;i++)
        {
        if(r[i].get()==ip1)
        {
            a=i;
            break;
        }
        }
    for(j=0;j<n;j++)
        {
        if(r[j].get()==ip2)
        {
            b=j;
            break;
        }
        }
    cout<<"1.Tranfer By Address"<<endl;
    cout<<"2.Tranfer By Reference"<<endl;
    cout<<"3.Tranfer By Value"<<endl;
    cout<<"O.Stop"<<endl;
    cout<<"Enter the choice"<<endl;
        cin>>c;
        switch(c)
        {
            case 1 : 
            cout<<"Transfer by address"<<endl;
            r[a].transferByAddress(&r[b],amount);
            for(i=0;i<n;i++)
            {
                r[i].display();
            }
            break;
            case 2 :
            cout<<"Transfer by reference"<<endl;
            r[a].transferByReference(r[b], amount);
            for(i=0;i<n;i++)
            {
                r[i].display();
            }
            break;
            case 3:
            cout<<"Transfer by value"<<endl;
            r[b]=r[a].transferByValue(r[b], amount);
            for(i=0;i<n;i++)
            {
                r[i].display();
            }
            break;
            default:
            cout<<"Invalid choice"<<endl;
         }
        }while(c!=0);
    return 0;
 }
