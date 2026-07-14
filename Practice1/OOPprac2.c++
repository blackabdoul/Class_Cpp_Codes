#include <iostream>
using namespace std;

class Rectangle
{
private:
    float height;
    float length;

public:
    Rectangle(double h, double l) : height(h), length(l)
    {
    }

    void area()
    {
        cout << "The area of the rectangle: " << height * length;
    }
    void perimeter()
    {
        cout << "The area of the rectangle: " << 2 * (height + length);
    }
};

int main()
{
    Rectangle rect(4.5, 5);
    rect.area();
    cout << endl;
    rect.perimeter();
}