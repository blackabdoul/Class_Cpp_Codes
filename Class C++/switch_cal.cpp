#include <iostream>
using namespace std;

int main()
{
    char op;
    float num1, num2;

    cout << "Enter two numbers:";
    cin >> num1 >> num2;
    cout << "Enter an operator (+, -, *, /):";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << num1 << op << num2 << "=" << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << op << num2 << "=" << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << op << num2 << "=" << num1 * num2 << endl;
        break;
    case '/':
        cout << num1 << op << num2 << "=" << num1 / num2 << endl;
        break;
    default:
        cout << op << " is not a valid arithmetic operator.\n";
    }
}