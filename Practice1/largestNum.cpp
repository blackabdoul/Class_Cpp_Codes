#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, choice;
    do
    {
        cout << "Enter three numbers to find the largest among them: " << endl;
        cin >> num1 >> num2 >> num3;

        if (num1 > num2 && num1 > num3)
        {
            cout << num1 << " is the largest of all the numbers" << endl;
        }
        else if (num2 > num1 && num2 > num3)
        {
            cout << num2 << " is the greatest of all numbers" << endl;
        }
        else
        {
            cout << num3 << " is the greatest of all numbers" << endl;
        }
        cout << "Tap 1 to continue or 2 to quit the program: " << endl;
        cin >> choice;

    } while (choice == 1);

    cout << "Thanks for using this program" << endl;
}
