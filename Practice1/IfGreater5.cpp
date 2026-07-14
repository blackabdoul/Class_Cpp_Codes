#include <iostream>
using namespace std;

void greaterThan5(int a)
{
    if (a > 5)
    {
        cout << a << " is greater than 5" << endl;
    }
    else if (a < 5)
    {
        cout << a << " is lesser than 5" << endl;
    }
    else
    {
        cout << a << " is equal to 5" << endl;
    }
}

int main()
{
    int num;

    cout << "Enter a number to determine if greater than 5 or not: ";
    cin >> num;

    greaterThan5(num);
}