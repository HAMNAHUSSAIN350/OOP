#include<iostream>
using namespace std;
class Shape
{
        public:
    virtual void calculateArea() = 0;  
};
class Square : public Shape 
{   
            public:
    void calculateArea() override 
    {
        int side_length = 4;
        int area = side_length * side_length;
        cout << "Area of the square " << area << endl;
    }
};
class Triangle : public Shape 
{
            public:
    void calculateArea() override   
    {
        int base = 3;
        int height = 6;
        int area = (base * height) / 2;
        cout << "Area of the triangle" << area << endl;
    }
};
int main()       
{
    Square s;
    Triangle t;
    s.calculateArea();
    t.calculateArea();
    return 0;
}