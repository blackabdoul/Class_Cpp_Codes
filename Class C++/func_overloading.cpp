#include <iostream>
using namespace std;

float abs(float var)
{
    if (var < 0.0)
    {
        var = -var;
    }
    return var;
}
int abs(int var)
{
    if (var < 0)
    {

        var = -var;
    }
    return var;
}

int main()
{
    // call function with int type parameter
    cout << "Absolute value of -5 = " << abs(-5) << endl;

    // call function with float type parameter
    cout << "Absolute value of 5.5 = " << abs(-5.5) << endl;
    return 0;
}