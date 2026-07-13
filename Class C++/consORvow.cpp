// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

void consORvow(char a)
{

    bool isLowerVow = (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u');
    bool isUpperVow = (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U');

    if (isLowerVow || isUpperVow)
        cout << "You entered a vowel";
    else if (!isalpha(a))
        cout << "Error, non-alphabetic character";
    else
        cout << "You entered a consonant";
}

int main()
{
    // Write C++ code here
    char c;
    cout << "Enter an alphabet: ";
    cin >> c;
    consORvow(c);

    return 0;
}