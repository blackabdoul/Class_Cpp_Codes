#include <iostream>
using namespace std;

int main()
{
    int max, integer, sum = 0;
    cout << "Enter a maximum your sum should never exceed: ";
    cin >> max;

    do
    {
        cout << "Enter an integer: ";
        cin >> integer;

        if (integer < 0)
        {
            continue;
        }

        sum += integer;
        
        if (sum > max)
        {
            sum -= integer;
            break;
        }
        
    } while (integer > 0);

    cout << "The sum is :" << sum << endl;
}