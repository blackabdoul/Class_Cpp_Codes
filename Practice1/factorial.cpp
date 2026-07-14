#include <iostream>
using namespace std;

int main()
{
    int n, choice;

    do
    { 
        long factorial = 1.0;
        cout << "Enter a positive integer: ";
        cin >> n;

        if (n < 0)
            cout << "Error! Factorial of a negative number doesn't exist.";
        else
        {
            for (int i = n; i >= 1; --i)
            {
                factorial *= i;
            }
            cout << "Factorial of " << n << " = " << factorial << endl;
        }
        cout << "Tap 1 to continue or 2 to exit the program: " << endl;
        cin >> choice;

    } while (choice == 1);

    cout << "Thanks for using this program :)" << endl;

    return 0;
}

/* 
int main()
{
    int num;
    long long mult = 1;

    cout << "Enter a positive integer to find its factorial: ";
    cin >> num;

    for (int i = num; i >= 1; i--)
    {
        mult *= i;
    }

    cout << num << " factorial :" << mult << endl;
}  
*/