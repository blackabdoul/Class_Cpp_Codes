#include <iostream>
using namespace std;

float add(int a, int b)
{
    return (a + b);
}
float subtract(int a, int b)
{
    return (a - b);
}
float multiply(int a, int b)
{
    return (a * b);
}
float divide(int a, int b)
{
    return (a / b);
}

int main()
{
    cout << "Welcome to the simple calculator! " << endl;
    float choice, num1, num2, result;

    cout << "Choose an operation: " << endl
         << "1. Add" << endl
         << "2. Subtract" << endl
         << "3. Multiply" << endl
         << "4. Divide" << endl
         << "5. Exit" << endl
         << endl
         << "Enter your choise (1-5): " << endl;
    cin >> choice;
    if (choice == 5)
    {
        cout << "Thanks for using the calculation!" << endl;
    }
    else if (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5)
    {
        cout << "Sorry , Invalid operation!" << endl;
    }
    else
    {
        cout << "Enter your first number: " << endl;
        cin >> num1;
        cout << "Enter your second number: " << endl;
        cin >> num2;
        cout << endl;

        while (choice > 0 && choice <= 5)
        {
            if (choice == 1)
            {
                result = add(num1, num2);
                cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            }
            else if (choice == 2)
            {
                result = subtract(num1, num2);
                cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            }
            else if (choice == 3)
            {
                result = multiply(num1, num2);
                cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            }
            else if (choice == 4)
            {
                result = divide(num1, num2);
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            }
            cout << "Choose an operation: " << endl
                 << "1. Add" << endl
                 << "2. Subtract" << endl
                 << "3. Multiply" << endl
                 << "4. Divide" << endl
                 << "5. Exit" << endl
                 << endl
                 << "Enter your choise (1-5): " << endl;
            cin >> choice;
            if (choice == 5)
            {
                cout << "Thanks for using the calculation!" << endl;
                break;
            }
            else if (choice != 1 && choice != 2 && choice != 3 && choice != 4)
            {
                cout << "Sorry , Invalid operation!" << endl;
            }
            else
            {
                cout << "Enter your first number: " << endl;
                cin >> num1;
                cout << "Enter your second number: " << endl;
                cin >> num2;
            }
        }
    }
}