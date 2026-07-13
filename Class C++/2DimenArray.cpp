// C++ program to illustrate 2-Dimentional
// array taking input from user
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numbers[2][3];
    cout << "Enter 6 numbers: \n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "numbers[" << i << "][" << j << "]:";
            cin >> numbers[i][j];
            cout << endl;
        }
    }
    
    cout << "Displaying elements: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << numbers[i][j] << " ";
        }
        cout << endl;
    }
}