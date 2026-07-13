#include <iostream>
using namespace std;

// function declaration
void displayNumbers(int n, float m)
{
    cout << "The integer number is : " << n << endl;
    cout << "The floating-point number is : " << m << endl;
}

int main()
{
    int num1;
    double num2;
    cout << "Enter an integer number: ";
    cin >> num1;
    cout << "Enter a double type number: ";
    cin >> num2;
    displayNumbers(num1, num2); // function call with integer and double arguments
}