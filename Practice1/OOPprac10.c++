#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() 
    {
        cout << "Calculating the area" << endl;
    }
    virtual void perimeter()
    {
        cout << "Calculating the perimeter" << endl;
    }
};

class Circle : public Shape
{
public:
    int radius;

    Circle(int rad) : radius{rad}
    {
    }

    void area() override
    {
        cout << "Area: " << 3.14 * radius * radius;
    }
    void perimeter() override
    {
        cout << "Perimeter: " << 2 * 3.14 * radius;
    }
};

class Rectangle : public Shape
{
public:
    int height, length;

    Rectangle(int h, int l) : height{h}, length{l}
    {
    }

    void area() override
    {
        cout << "Area: " << length * height;
    }
    void perimeter() override
    {
        cout << "Perimeter: " << 2 * (length + height);
    }
};

class Triangle : public Shape
{
public:
    int a, base, c, height;

    Triangle(int a, int b, int c, int h) : a{a}, base{b}, c{c}, height{h} {}

    void area() override
    {
        cout << "Area: " << 0.5 * height * base;
    }
    void perimeter() override
    {
        cout << "Perimeter: " << a + base + c;
    }
};

int main()
{
    Circle circle1(7);
    Rectangle rectangle1(7, 8);
    Triangle triangle1(1, 2, 3, 4);


    cout<<endl;
    Shape *ptr1 = &circle1;
    ptr1->area();
    cout<<endl;
    Shape *ptr2 = &rectangle1;
    ptr2->perimeter();
    cout<<endl;
    Shape *ptr3 = &triangle1;
    ptr3->area();
    cout<<endl;
}