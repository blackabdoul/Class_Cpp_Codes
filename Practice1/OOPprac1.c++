#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;

public:
    Circle(double rad) : radius{rad}
    {
    }

    double area()
    {
        double result = 3.14 * radius * radius;
        return result;
    }

    double circumference()
    {
        double result = 2 * 3.14 * radius;
        return result;
    }
};

int main()
{
    double ra;
    cout << "Enter the radius of the circle:";
    cin >> ra;
    Circle circle1(ra);
    double area = circle1.area();
    double circumference = circle1.circumference();

    
    cout << "The area: " << area<<endl;
    cout << "The circumference: " << circumference;
}