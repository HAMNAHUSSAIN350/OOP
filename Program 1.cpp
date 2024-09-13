#include<iostream>
using namespace std;
class Base
{
        public:
        virtual void show()=0;
};
class DEV1: public Base
{
        public:
        void show() override 
       {
          cout<<"Hi i am a DEV1 class"<<endl;
          }
          };
 class DEV2: public Base
 {
          public:
          void show() override 
        {
           cout<<"Hi i am a DEV2 class"<<endl;
           }
           };
int main()        
{ 
      DEV1 d1;
      DEV2 d2;
      d1.show();
      d2.show();
      }  














    