#include <iostream>
using namespace std;
class PaymentMethod 
{
        public:
    virtual void paymentprocesses(double amount)=0;
    virtual void refundamount(double amount)=0;
    };
class CreditCard: public PaymentMethod 
{
            public:
    void paymentprocesses(double amount) override
    {
          
          cout<<"Credit card process the payment"<<endl;
    }
    void refundamount(double amount) override 
    
    {
          cout<<"Credit card refund the amount"<<endl;
          }
};
class PayPal: public PaymentMethod 
{
          public:
    void paymentprocesses(double amount) override 
    {
         cout<<"PayPal process the payment"<<endl;
    }
    void refundamount(double amount) override 
    {
         cout<<"PayPal refund the payment"<<endl;
         }
};
class BankTransfer: public PaymentMethod
{ 
        public:
        void paymentprocesses(double amount) override 
    {
         cout<<"Bank transfer process the payment"<<endl;
    }
    void refundamount(double amount) override 
    {
         cout<<"Bank transfer refund the payment"<<endl;
         }
         };
int main()
    {
       CreditCard c;
       PayPal p;
       BankTransfer b;
       c.paymentprocesses(100.0);
       c.refundamount(50.0);
       p.paymentprocesses(100.0);
       p.refundamount(50.0);
       b.paymentprocesses(100.0);
       b.refundamount(50.0);
    return 0;
}