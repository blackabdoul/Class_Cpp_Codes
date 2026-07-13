#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> integers;
    int num;

    cout << "Enter integers (enter a non-integer to stop): ";

    while (cin >> num) {
        integers.push_back(num);
        cout << "Enter integers (enter a non-integer to stop): ";
    }

    cin.clear(); 
    cin.ignore(10000, '\n'); 

    cout << "\nThe integers are:\n";
    for (int n : integers) {
        cout << n << " ";
    }

    cout << "\nThe integers in reverse order:\n";
    for (auto it = integers.rbegin(); it != integers.rend(); ++it) {
        cout << *it << " ";
    }

    cout << endl;
    return 0;
}
