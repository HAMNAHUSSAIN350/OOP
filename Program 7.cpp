#include <iostream>
using namespace std;
class Fruit 
{
        public:
        string name;
        string colour;
        void setdata()
        {
        cout<<"Enter name"<<endl;
        cin>>name;
        cout<<"Enter colour"<<endl;
        cin>>colour;
        }
        void displaydata()
        {
          cout<<"Name"<<name<<endl;
          cout<<"Colour"<<colour<<endl;
          }
    };
class Apple:public Fruit
{
            public:
    void taste() 
    {
        cout<<"Apple has sweet taste"<<endl;
        }
    void eating()    
    {
    cout<<"She is eating Apple"<<endl;
    }
    };
class Banana:public Fruit
{
          public:
    void taste() 
    {
       cout<<"Banana has sweet taste"<<endl;
       }
     void eating() 
    {
       cout<<"She is eating Banana"<<endl;
       }
       };
int main()
    {
     Apple a;
     Banana b;
     
     cout<<"For Apple"<<endl;
     a.setdata();
     a.displaydata();
     a.taste();
     a.eating();
     
     cout<<"For Banana"<<endl;
     b.setdata();
     b.displaydata();
     b.taste();
     b.eating();
    return 0;
}