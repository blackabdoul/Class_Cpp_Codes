#include <iostream>  //pass by reference
using namespace std;

// function definition to swap values
void swap(int &m, int &n)  //void swap(const int &m, const int &n) const can't be modified
{
    int temp = m;
    m = n;
    n = temp;
}

int main()
{
    // Initialize two variables#
    int a = 1, b = 2;

    // Before swapping
    cout << "Before swapping:\n";
    cout << " a\tb\n";
    cout << "----------\n";
    cout << " " << a << "\t" << b << "\n";

    //Calling the function to swap
    swap(a, b);

    // After swapping
    cout << "\nAfter swapping:\n";
    cout << " a\tb\n";
    cout << "----------\n";
    cout << " " << a << "\t" << b << "\n";
}