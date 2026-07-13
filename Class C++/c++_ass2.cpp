#include <iostream>
using namespace std;

bool myfunction(string n)
{
    bool valid = true;
    for (char i : n)
        if (!isdigit(i))
            valid = false;
    return valid;
}

int main()
{
    int sum = 0;
    string input;
label:
    if (myfunction(input) == true)
    {

        cout << "Enter a num (Press '=' to sum up): ";
        cin >> input;
        if (myfunction(input) == true)
            sum += stoi(input);
        goto label;
    }
    cout << "                            " << "Total: " << sum;
}
