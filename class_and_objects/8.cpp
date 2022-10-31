#include<iostream>
using namespace std;
class account//class declaration
    {public:
        string name;
        double balance;
        bool deposit(double bal){balance+=bal;cout<<"IN DEPOSIT"<<endl;}//member function
        bool withdraw(double bal){balance-=bal;cout<<"IN DEPOSIT"<<endl;}
    };
    int main()
    {
    account frank_account;
    frank_account.name="Frank's account";
    frank_account.balance=5000.0;
    frank_account.deposit(500.0);
    cout<<frank_account.balance<<endl;
    }