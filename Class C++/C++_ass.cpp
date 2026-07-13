 /*
#include <iostream> //THIS IS THE FIRST CODE
#include <bitset>   //SECOD CODE IS BELOW
using namespace std;

int main()
{
    int num, shift, choice;
    cout << "Enter integer and shift number: ";
    cin >> num >> shift;
    cout << "Press" << endl;
    cout << "     1 (left rotate)" << endl;
    cout << "     2 (right rotate)" << endl;
    cin >> choice;

    if (choice == 1)
    {
        cout << "Left Rotate Operation of " << num << " with " << shift << " shift(s) " << endl;
        cout << "Decimal: " << num << "   " << " In Binary: " << bitset<8>(num) << endl;
        cout << "Decimal: " << ((num << shift) | (num >> (8 - shift))) << "   " << "In Binary: " << bitset<8>((num << shift) | (num >> (8 - shift))) << endl;
    }
    else if (choice == 2)
    {
        cout << "Right Rotate Operation of " << num << " with " << shift << " shift(s) " << endl;
        cout << "Decimal: " << num << "   " << " In Binary: " << bitset<8>(num) << endl;
        cout << "Decimal: " << ((num >> shift) | (num << (8 - shift))) << "   " << "In Binary: " << bitset<8>((num >> shift) | (num << (8 - shift))) << endl;
    }
    else
    {
        cout << "Invalid option !";
    }
}

 */

// NUMBER 2 CODE


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
// */