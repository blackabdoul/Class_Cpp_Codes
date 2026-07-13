#include <iostream>
#include <iomanip> //helps to set width of a table setw(2),setw(3)
using namespace std;

int main()
{
    // Initializing a 3-D array
    int test[2][3][4] = {
        {{1, 2, 3, 4},
         {5, 6, 7, 8},
         {9, 10, 11, 12}},
        {{13, 14, 15, 16},
         {17, 18, 19, 20},
         {21, 22, 23, 24}}

    };

    // Displaying the 3-D array
    cout << "Displaying table elements: \n";
    for (int i = 0; i < 2; i++)
    {
        cout << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << endl;
            for (int k = 0; k < 4; k++)
            {
                cout << setw(4) << test[i][j][k] << " ";
            }
        }
        cout << endl;
    }
}