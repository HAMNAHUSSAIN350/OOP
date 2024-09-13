#include <iostream>
#include<cmath>
using namespace std;
const double PI = 3.14159;
class Shape
{
          public:
    virtual void Area() = 0;
    virtual void Perimeter() = 0;
};
class Circle : public Shape 
{
          public:
    double radius = 5.0;
    void Area() override 
    {
        double area = PI * radius * radius;
        cout<<"Area of Circle"<<area<<endl;
    }
    void Perimeter() override 
    {
        double perimeter = 2 * PI * radius;
        cout<<"Perimeter of Circle"<<perimeter<< endl;
    }
};
class Rectangle:public Shape
{
           public:
    double length = 4.0;
    double width = 6.0;
    void Area() override 
    {
        double area = length * width;
        cout<<"Area of Rectangle"<<area<< endl;
    }
    void Perimeter() override 
    {
        double perimeter = 2*(length + width);
        cout<<"Perimeter of Rectangle"<<perimeter<<endl;
    }
};
class Triangle:public Shape 
{
        public:
    double side1 = 4.0;
    double side2 = 5.0;
    double side3 = 6.0;
    void Area() override 
    {
        double s = (side1 + side2 + side3) / 2;  
        double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));  
        cout <<"Area of Triangle"<<area<<endl;
    }
    void Perimeter() override 
    {
        double perimeter = side1 + side2 + side3;
        cout<<"Perimeter of Triangle" <<perimeter<< endl;
    }
};
int main() 
{
    Circle c;
    Rectangle r;
    Triangle t;
    c.Area();
    c.Perimeter();
    r.Area();
    r.Perimeter();
    t.Area();
    t.Perimeter();
    return 0;
}