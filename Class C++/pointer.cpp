#include <iostream>
using namespace std;

/* int main()
{
    // declaring variables
    int var1 = 22;
    int var2 = 9848;
    int var3 = 55;

    cout << "The memory address of var1 is " << &var1 << endl;
    cout << "The memory address of var2 is " << &var2 << endl;
    cout << "The memory address of var3 is " << &var3 << endl;
}*/

// Pointer1

int main()
{
    // declare a variable
    int var = 5;

    // declare a pointer variable
    int *point_var = &var;

    //OR
    int *pointer_var;
    pointer_var = &var;

    // Print value of var
    cout << "Value of var: " << var << endl;
    // print the value of var
    cout << "Address of var: " << &var << endl;
    // Print the value of point_var
    cout << "Value of point_var: " << point_var << endl;
    // Print the value of pointer_var
    cout << "Value of pointer_var: " << pointer_var << endl;
    // Print the content of the address pointed by the pointer
    cout << "Content of the address pointed by the pointer point_var: " << (*point_var) << endl;
}