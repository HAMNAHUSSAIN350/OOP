#include <iostream>
#include <cmath> 
using namespace std;
const double PI=3.14;
class Shape 
{
          public:
    virtual void draw() = 0;
    virtual double getArea() = 0;
};
class Circle : public Shape 
{
    double radius;
        public:
    Circle(double r) : radius(r) {}
    
    void draw() override 
    {
        cout << "Drawing a Circle" << endl;
    }
    
    double getArea() override
    {
       return PI * radius * radius;
    }
};

class Rectangle : public Shape 
{
    double width, height;
            public:
    Rectangle(double w, double h) : width(w), height(h) {}
    
    void draw() override 
    {
        cout << "Drawing a Rectangle" << endl;
    }
    double getArea() override 
    {
        return width * height;
    }
};
class Triangle : public Shape
 {
    double base, height;
         public:
    Triangle(double b, double h) : base(b), height(h) {}
    void draw() override 
    {
        cout << "Drawing a Triangle" << endl;
    }
    double getArea() override 
    {
        return 0.5 * base * height;
    }
};
int main() 
{
    Circle c(5.0);
    Rectangle r(4.0, 6.0);
    Triangle t(4.0, 5.0);
    c.draw();
    cout << "Area of Circle" << c.getArea() << endl;
    r.draw();
    cout << "Area of Rectangle" << r.getArea() << endl;
    t.draw();
    cout << "Area of Triangle" << t.getArea() << endl;
    return 0;
}