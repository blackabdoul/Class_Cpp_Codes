#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main()
{   
    string str1;

    cout << "Enter a string (String type & No space allowed): ";
    cin >> str1;
    cout << "You entered: " << str1 << endl;


    string str2;

    cout << "\nEnter another string (String type & Which reads all line): ";

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear leftover newline
    getline(cin, str2);
    cout << "You entered: " << str2 << endl;


    char str[100];

    cout << "\nEnter a string (C_String): ";
    cin.get(str, 100);

    cout << "You entered: " << str << endl;
    return 0;
}