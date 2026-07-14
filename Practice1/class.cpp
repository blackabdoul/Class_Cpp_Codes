#include <iostream>
using namespace std;

class rectangle
{
    Public : int a, b;

    int surface(int a, int b)
    {
        return a * b;
    }
};

int main()
{
    rectangle rectangle1;
    cout << "Enter the rectangle's variables: \n";
    cin >> rectangle1.a >> rectangle1.b;
    cout << "Surface of rectangle: " << rectangle1.surface();
}