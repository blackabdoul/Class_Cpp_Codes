#include <iostream>

using namespace std;


// USING WHILE LOOP


int CalculateSum(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}

int main()
{
    int a, b, c, choice;
    cout << "Enter three numbers to be summed: " << endl;
    cin >> a >> b >> c;

    cout << "The sum is: " << CalculateSum(a, b, c) << endl;

    cout << "Tap 1 to continue or 2 to exit this program: " << endl;
    cin >> choice;

    while (choice == 2 || choice == 1)
    {

        if (choice == 1)
        {
            cout << "Enter three numbers to be summed: " << endl;
            cin >> a >> b >> c;

            cout << "The sum is: " << CalculateSum(a, b, c) << endl;

            cout << "Tap 1 to continue or 2 to exit this program: " << endl;
            cin >> choice;
        }
        else if (choice == 2)
        {
            cout << "Thanks for using this program :)" << endl;
            break;
        }
    }

    return 0;
}


// USING DO...WHILE LOOP


/* #include <iostream>

using namespace std;

int CalculateSum(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}

int main() {
    int a, b, c, choice;

    do {
        cout << "Enter three numbers to be summed: " << endl;
        cin >> a >> b >> c;

        cout << "The sum is: " << CalculateSum(a, b, c) << endl;

        cout << "Tap 1 to continue or 2 to exit this program: " << endl;
        cin >> choice;
    } while (choice == 1);

    cout << "Thanks for using this program :)" << endl;

    return 0;
}*/