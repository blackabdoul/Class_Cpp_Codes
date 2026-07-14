#include <iostream>
using namespace std;

int main()
{
    double temperature;
    char unit;
    char unit1 = 'C', unit2 = 'F';
    cout << "Enter a temperature value: " << endl;
    cin >> temperature;
    cout << "Enter a unit either C or F: " << endl;
    cin >> unit;

    while (unit == unit1 || unit == unit2)
    {
        if (unit == unit1)
        {
            double converted_temp = (temperature * (9.0 / 5.0)) + 32;
            cout << "Your temperature in Fahrenheit is: " << converted_temp << endl;
        }
        else if (unit == unit2)
        {
            double converted_temp = (temperature - 32) * (5.0 / 9.0);
            cout << "Your temperature in Celcius is: " << converted_temp << endl;
        }
        else 
        {
            cerr << "Invalid unit entered! ";
        }
        int proceed;
        cout << "Enter 1 to continue or 2 leave the app? ";
        cin >> proceed;
        if (proceed == 2)
        {
            cout << "Thanks for using this convarsion tool :)";
            break;
        }
        else if (proceed == 1)
        {
            double temperature;
            char unit;
            char unit1 = 'C', unit2 = 'F';
            cout << "Enter a temperature value: " << endl;
            cin >> temperature;
            cout << "Enter a unit either C or F: " << endl;
            cin >> unit;
        }
        else
        {
            cout << "Invalid option ";
        }
    }
}