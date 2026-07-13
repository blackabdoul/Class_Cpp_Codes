#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int arraySize, num_table, num_row, num_column, k, productElements = 1;
    cout << "Enter the size of your 3D Array: ";
    cin >> arraySize;
    num_table = cbrt(arraySize);
    num_row = cbrt(arraySize);
    num_column = cbrt(arraySize);
    int _3D_array[num_table][num_row][num_column];

    cout << endl;
    for (k = 0; k < num_table; ++k)
    {

        for (int i = 0; i < num_row; ++i)
        {

            for (int j = 0; j < num_column; ++j)
            {
                cout << "Enter element [" << k << "] [" << i << "] [" << j << "]: ";
                cin >> _3D_array[k][i][j];
            }
        }
    }
    cout << endl;

    cout << "3D Array displayed in Matrix form: ";
    for (k = 0; k < num_table; ++k)
    {
        cout << endl;
        for (int i = 0; i < num_row; ++i)
        {
            cout << endl;
            for (int j = 0; j < num_column; ++j)
            {
                cout << setw(2) << _3D_array[k][i][j];
                productElements *= _3D_array[k][i][j];

            }
        }
    }

    /*for (k = 0; k < num_table; ++k)
    {
        // cout<<endl;
        for (int i = 0; i < num_row; ++i)
        {
            // cout<<endl;
            for (int j = 0; j < num_column; ++j)
            {
            }
        }
    }*/
    cout << endl;
    cout << "Product of all elements: ";
    cout << productElements;
}