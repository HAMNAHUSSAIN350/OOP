#include <iostream>
using namespace std;
class Vehicle 
{
        public:
    virtual void getNumberOfWheels() 
    {
        cout<<"Vehicle has wheels"<<endl;
    }
};
class Car : public Vehicle 
{
            public:
    void getNumberOfWheels() override 
    {
        cout<<"Car has 4 wheels"<<endl;
    }
};
class Bike : public Vehicle 
{
          public:
    void getNumberOfWheels() override
    {
        cout << "Bike has 2 wheels" << endl;
    }
};
int main()
    {
    Vehicle* vehicles[2]; 
    vehicles[0] = new Car();  
    vehicles[1] = new Bike(); 

    for (int i = 0; i < 2; i++) 
    {
        vehicles[i]->getNumberOfWheels(); 
    }
    delete vehicles[0];
    delete vehicles[1];

    return 0;
}