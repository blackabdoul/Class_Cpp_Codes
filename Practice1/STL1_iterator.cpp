#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    vector<int> v = {10, 20, 30, 40, 50};

    cout << "Enter an integer: ";
    cin >> n;

    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    {
        if (*it == n)
        {
            v.erase(it);

            for (auto it = v.begin(); it != v.end(); ++it)
            {
                cout << *it << " ";
            }
        }
    }
}