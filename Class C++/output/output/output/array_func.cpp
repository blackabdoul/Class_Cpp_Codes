#include <iostream>
using namespace std;

const int ARRAY_SIZE = 5;

// declare function to display grades
// take an id array as parameter

void displayGrades(int g[])
{
    cout << "Displaying grades:\n";

    // Display array elements
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << g[i] << "   ";
    }
}

int main()
{
    // declare and initialize an array
    int grades[ARRAY_SIZE] = {88, 55, 66, 22, 33};
    // call function
    displayGrades(grades);
}