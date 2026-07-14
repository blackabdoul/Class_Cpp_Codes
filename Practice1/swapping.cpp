#include <iostream>
using namespace std;

int main()
{
    int a, b, y;
    cout << "Enter an integer a: ";
    cin >> a;
    cout << "Enter another integer b:";
    cin >> b;

    y = a;
    a = b;
    b = y;

    cout << "Your integer a is " << a << " and integer b is " << b;
}