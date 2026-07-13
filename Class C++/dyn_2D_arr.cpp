// C++ program to dynmically allocate memory
// for 2D array using new expression

#include <iostream>
#include <iomanip>
using namespace std;

// Driver code
int main()
{
    // Dimensions of arrays
    int m = 3, n = 4;
    // Allocate memory for the array
    int *arr = new int[m * n];

    // Traverse the 2D array
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Element " << "[" << i << "]" << "[" << j << "]" << " : ";
            cin >> *(arr + i + (i * n) + j); // arr[i][j]
            cout << "At " << (arr + i + (i * n) + j) << " ";
        }
    }
    cout << "\n Displaying elements:\n";

    // Traverse the 2D arrays
    for (int i = 0; i < m; i++)
    {
        cout << "  ";
        for (int j = 0; j < n; j++)
        {
            cout << setw(2) << *(arr + i + (i * n) + j) << "  ";
        }
        cout << endl;
    }
}