#include <iostream>
using namespace std;
class Account 
{
        public:
    virtual void calculateInterest()=0;
    };
class SavingsAccount: public Account 
{
            public:
    void calculateInterest() override 
    {
          int price=1000;
          float rate=0.025;
          int time= 1;
          int savings=price*rate*time;
          cout<<"interest of a saving account"<<endl;
    }
};
class CheckingAccount: public Account 
{
          public:
    void calculateInterest() override
    {
         int balance=2000;
         int value =50;
         int checking=balance+value;
         cout<<"interest of CheckingAccount"<<endl;
    }
};
int main()
    {
       SavingsAccount s;
       CheckingAccount c;
       s.calculateInterest();
       c.calculateInterest();
    return 0;
}