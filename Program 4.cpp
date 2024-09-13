#include<iostream>
using namespace std;
class Employee 
{
   public:
    virtual void calculatesalary()
   {
   cout<<"Employee calculate his salary"<<endl;
   }
   };
class FulltimeEmployee: public Employee 
{   
     public:
     void calculatesalary()
     {
       cout<<"FulltimeEmployee calculate his salary"<<endl;
       }
       };
class PartTimeEmployee: public Employee 
{
      public:
      void calculatesalary()   
      {
       cout<<"PartTimeEmployee calculate his salary"<<endl;
       }
       };
int main()       
{
      Employee e;
      FulltimeEmployee f;
      PartTimeEmployee p;
      Employee *ptr;
      ptr=&e;
      ptr->calculatesalary();
      ptr=&f;
      ptr->calculatesalary();
      ptr=&p;
      ptr->calculatesalary();
      return 0;
      }