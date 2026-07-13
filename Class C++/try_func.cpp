#include <iostream>
using namespace std;

int exp(int a, int b)
{
    int square = 1, i;

    for (i = 0; i < b; i++)
    {
        square *= a;
    }

    return square;
}

int main()
{
    int x = 2, y = 5, z;

    if (x < y)
    {
        x = x + y;//SWAPPING
        y = x - y;//OF 
        x = x - y;//x & y
    }
    z = exp(x, y);
    cout << z << endl;
}