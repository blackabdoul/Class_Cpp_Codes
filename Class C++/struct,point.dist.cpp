#include <iostream>
using namespace std;

struct Distance
{
    int meter;
    int feet;
    float inch;
};

int main()
{
    // declaring the structure variable
    Distance d;
    // declare a pointer to d
    Distance *ptr = &d;
    cout << "Enter meter: ";
    cin >> ptr->meter; // d.feet// this is the arrow notation (->) also used for pointers
    cout << "Enter feet: ";
    cin >> (*ptr).feet; // d.feet
    cout << "Enter inches: ";
    cin >> (*ptr).inch; // d.inch

    cout << "\nDistance = " << ptr->meter << " meter(s) " << (*ptr).feet << " feet(s) " << (*ptr).inch << " inche(s)" << endl;
}