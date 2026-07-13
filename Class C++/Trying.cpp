#include <iostream>
#include <cctype>
#include <cwctype>

using namespace std;

int main()
{
    wchar_t ch;

    wcout << "Enter a wide character digit: ";
    wcin >> ch;

    if (iswdigit(ch))
    {

        long int num = ch - L'0';
        wcout << "The integer value of '" << ch << "' is: " << num << endl;
    }
    else
    {
        wcout << "Invalid input. Please enter a digit character." << endl;
    }

    return 0;
}