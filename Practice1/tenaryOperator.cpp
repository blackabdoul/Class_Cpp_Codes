#include <iostream>
#include <ctime>   // Required for the time() function.
#include <cstdlib> // Required for the rand() and srand() functions.
using namespace std;

int main()
{
    cout << "Enter an integer number:" << endl;
    int number;
    cin >> number;
    string result = (number % 2 == 0) ? "even" : "odd";
    cout << "You entered an " << result << " number" << endl;
    return 0;
}