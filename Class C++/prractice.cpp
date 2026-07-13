#include <iostream>
using namespace std;

int main()
{
    int number, sum = 0;
    cout << "Enter a number:";
    cin >> number;

    while (number >= 0)
    {
        sum += number;
        cout << "Enter a number:" << endl;
        cin >> number;

        if (number > 50)
        {
            number = 0;
            break;
        }
    }
    cout << "The sum is: " << sum << endl;
}