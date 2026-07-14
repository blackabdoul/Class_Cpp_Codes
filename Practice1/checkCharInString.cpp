/*#include <iostream>
using namespace std;

int main()
{
    string userString;
    cout << "Enter a sentence of strings: ";
    getline(cin, userString);
    char checklower = 'm', checkupper = 'M';
    int counts = 0;

    for (int i = 0; i < userString.size(); ++i)
    {
        if (userString[i] == checkupper || userString[i] == checklower)
            ++counts;
    }

    cout << "Number of 'm' character in your input: " << counts;

    return 0;
}*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string userString;
    cout << "Enter a sentence of strings: ";
    getline(cin, userString); // Use getline to read the entire sentence

    char Ch, ch;
    cout << "Enter the character to be checked: ";
    cin >> Ch;

    if(islower(Ch)){
        ch = Ch;
    }

    if (isupper(Ch)){
        int capCounts = count(userString.begin(), userString.end(), Ch); // while the count() counts the number of C corresponding char from beginning to end

        ch = tolower(Ch);
        
        int lowCounts = count(userString.begin(), userString.end(), ch); // while the count() counts the number of C corresponding char from beginning to end
        
        cout << "Number of '" << Ch << "' characters in your input: " << capCounts+lowCounts << endl;

    }
    else{
        int lowCounts = count(userString.begin(), userString.end(), ch); // while the count() counts the number of C corresponding char from beginning to end

        Ch = toupper(ch);
        
        int capCounts = count(userString.begin(), userString.end(), Ch); // while the count() counts the number of C corresponding char from beginning to end
    
        cout << "Number of '" << Ch << "' characters in your input: " << capCounts+lowCounts << endl;

    }

    return 0;
}

// bool checkC = all_of(userString.begin(), userString.end(), [](char x)
//                      { return x == 'm'; }); // checks if all the  charater form beginning to end is =='m