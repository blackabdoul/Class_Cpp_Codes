#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;

    // take input from user
    cout << "Enter a number:";
    cin >> num;

    while (num >= 0)
    {
        // add all positive numbers
        sum += num;
        // take another input from user
        cout << "Enter a number:";
        cin >> num;
    }

    // display the sum
    cout << "The sum is " << sum << endl;
}