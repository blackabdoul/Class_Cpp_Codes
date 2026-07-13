// Online C++ compiler to run C++ program online
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Write C++ code here
    int arraySize, num_row = 2, sumElements = 0;
    cout << "Enter the size of your 2D Array: ";
    cin >> arraySize;
    int num_column = arraySize / 2;
    int _2D_array[num_row][num_column];

    cout << endl;
    for (int i = 0; i < num_row; ++i)
    {

        for (int j = 0; j < num_column; ++j)
        {
            cout << "Enter element [" << i << "] [" << j << "]:";
            cin >> _2D_array[i][j];
        }
    }
    cout << endl;

    cout << "2D Array displayed in Matrix form: ";
    for (int i = 0; i < num_row; ++i)
    {
        cout << endl;
        for (int j = 0; j < num_column; ++j)
        {
            cout << setw(2) << _2D_array[i][j];
        }
    }

    for (int i = 0; i < num_row; ++i)
    {
        cout << endl;
        for (int j = 0; j < num_column; ++j)
        {
            sumElements += _2D_array[i][j];
        }
    }
    cout << "Sum of all elements: ";
    cout << sumElements;
}