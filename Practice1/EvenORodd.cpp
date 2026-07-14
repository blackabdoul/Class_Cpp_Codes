/* #include <iostream>
using namespace std;

int main()
{
    int num, choice;

    do
    {
        cout << "Enter a number to determine if it's even or odd: " << endl;
        cin >> num;

        if (num % 2 == 0)
        {
            cout << num << " is an even number." << endl;
        }
        else
            cout << num << " is an odd number." << endl;

        cout << "Press 1 to continue or 2 to quit: " << endl;
        cin >> choice;

    } while (choice == 1);

    cout << "Thanks and habe a wonderful day :)" << endl;
} */

// USING WHILE LOOP

#include <iostream>
using namespace std;

int main()
{
    int num, choice;

    cout << "Enter a number to determine if it's even or odd: " << endl;
    cin >> num;

    if (num % 2 == 0)
    {
        cout << num << " is an even number." << endl;
    }
    else
        cout << num << " is an odd number." << endl;

    cout << "Press 1 to continue or 2 to quit: " << endl;
    cin >> choice;

    while (choice == 1 || choice != 2)
    {
        if (choice == 1)
        {
            cout << "Enter a number to determine if it's even or odd: " << endl;
            cin >> num;

            if (num % 2 == 0)
            {
                cout << num << " is an even number." << endl;
            }
            else
                cout << num << " is an odd number." << endl;

            cout << "Press 1 to continue or 2 to quit: " << endl;
            cin >> choice;
        }
        else if (choice == 2)
        {
            cout << "Thanks and have a wonderful day :)" << endl;
            break;
        }
    }
}