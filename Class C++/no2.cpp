#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
label:
    string input;
    cout << "Enter a number (Press '=' to sum it up): ";
    cin >> input;
    int number, total = 0;
    bool decider;

    for (char i : input)
        if (isdigit(i))
        {
            decider = true;
        }
        else
        {
            decider = false;
        }

    if (decider == true)
    {
        number = stoi(input);
        total += number;
        goto label;
    }
    else if (decider == false && input == "=")
    {
        cout << "                                   Total: " << total;
    }
}

/*bool isDigit = all_of(input.begin(), input.end(), [](int x)
                          { return x == isdigit(x) && x == !ispunct(x); });

    if (isDigit == false)
    {
        number = stoi(input);
        total += number;
        goto label;
    }
    else if (isDigit == true)
    {
        cout
            << "                                 Total: " << total;
    }
    // else
    //{
    //     cout << "Error, invalid input";
    // }
}*/