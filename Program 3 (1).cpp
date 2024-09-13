#include <iostream>
using namespace std;
class Shape
{
        public:
    virtual void draw() 
    {
        cout<<"Draw the Shape"<<endl;
    }
};
class Circle: public Shape
{
            public:
    void  draw() override 
    {
        cout<<"Draw the circle"<<endl;
    }
};
class Rectangle: public Shape
{
          public:
    void draw() override
    {
        cout << "Draw the rectangle" << endl;
    }
};
int main()
    {
    Shape*  Shape[2]; 
    Shape[0] = new Circle();  
    Shape[1] = new Rectangle(); 

    for (int i = 0; i < 2; i++)
    {
        Shape[i]->draw(); 
    }
    delete Shape[0];
    delete Shape[1];

    return 0;
}