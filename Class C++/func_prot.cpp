#include <iostream>
using namespace std;

// function prototype
int add(int, int);

// main code
int main()
{
    cout << "Enter two numbers to be added: ";
    int a, b, sum;
    cin >> a >> b;
    // calling function
    sum = add(a, b);
    cout << "The sum is " << sum << endl;
}

// function definition
int add(int x, int y)
{
    return (x + y);
}