#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    cout << "Enter a character: ";
    char ch;
    cin >> ch;

    bool isLowercaseVowel, isUppercaseVowel;

    // this evaluates true if ch is a lower case vowel
    isLowercaseVowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');

    // this evaluates false if ch is a upper case vowel
    isUppercaseVowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

    if (!isalpha(ch))
    {
        cerr << "Error! Not an alphabet";
    }
    else if (isLowercaseVowel || isUppercaseVowel)
    {
        cout << ch << " is a vowel";
    }
    else
    {
        cout << ch << " is a consonant";
    }
    return 0;
}