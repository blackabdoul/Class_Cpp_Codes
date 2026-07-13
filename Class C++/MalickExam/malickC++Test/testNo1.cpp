#include <iostream>
using namespace std;

int main()
{
    double Fahrenheit, Celsius;
    int choice;
    cout << "Press 1 to convert Fahrenheit to Celsius"
         << endl
         << "Press 2 to convert Celsius to Fahrenheit"
         << endl;
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> Fahrenheit;
        Celsius = (Fahrenheit - 32) * 5 / 9;
        cout << "In Celsius that's: " << Celsius;
    }
    else if (choice == 2)
    {
        cout << "Enter temperature in Celsius: ";
        cin >> Celsius;
        Fahrenheit = (Celsius * 9 / 5) + 32;
        cout << "In Fahrenheit that's: " << Fahrenheit;
    }
    else
    {
        cout << "Error, invalid choice";
    }
}