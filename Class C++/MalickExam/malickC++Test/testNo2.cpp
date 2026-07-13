#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome!" << endl;
    int a, b;
    cout << "Enter number 1: ";
    cin >> a;
    cout << "Enter number 2: ";
    cin >> b;

    cout << endl;

    if (a > b)
    {
        cout << a << " is greater than " << b << ".";
    }
    else if (b > a)
    {
        cout << b << " is greater than " << a << ".";
    }
    else
    {
        cout << a << " is equal to " << b << ".";
    }
    cout << endl;

    string resulta = (a % 2 == 0) ? " is EVEN." : " is ODD.";
    cout << endl;
    cout << a << resulta;

    string resultb = (b % 2 == 0) ? " is EVEN." : " is ODD.";
    cout << endl;
    cout << b << resultb;
}