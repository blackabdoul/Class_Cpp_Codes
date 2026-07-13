// Copy contructor with address of both original and copy variable
#include <iostream>
using namespace std;

class Wall
{
public:
    double length;
    double height;

    Wall(double len, double hei)
        : length{len},
          height{hei}
    {
    }
    Wall(const Wall &obj)
        : length{obj.length},
          height{obj.height}
    {
    }
    double calculate_area()
    {
        return length * height;
    }

    void address_of()
    {
        cout << "Address of length variable: " << &length << endl;
        cout << "Address of height variable: " << &height;
    }
};

int main()
{
    Wall wall1{10.5, 8.6};
    Wall wall2 = wall1;

    cout << "The area of Wall1: " << wall1.calculate_area() << endl;
    cout << "The area of Wall1: " << wall2.calculate_area() << endl;

    cout << "For Wall1\n";
    wall1.address_of();
    cout << "\nFor Wall2\n";
    wall2.address_of();
}