#include <iostream>
using namespace std;
int main()
{
    int numbers[5];

    // take input from user
    cout << "Enter 5 integer numbers" << endl;
    for (int i = 0; i < 5; i++)
        cin >> numbers[i];

    // display array elements
    cout << "The numbers are:\n";
    for (int i = 0; i < 5; i++)
        cout << numbers[i] << " ";
    cout << endl;
}