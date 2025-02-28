#include <iostream>
using namespace std;

string ReadPhrase()
{
    cout << "Enter a phrase: ";
    string phrase;
    getline(cin, phrase);
    return phrase;
}

short SmallLetterCount(string phrase)
{
    short smallLetterCount = 0;
    for (short i = 0; i < phrase.length(); i++)
    {
        if (islower(phrase[i]))
            smallLetterCount++;
    }
    return smallLetterCount;
}

short CapitalLetterCount(string phrase)
{
    short capitalLetterCount = 0;
    for (short i = 0; i < phrase.length(); i++)
    {
        if (isupper(phrase[i]))
            capitalLetterCount++;
    }
    return capitalLetterCount;
}

int main()
{
    string S1 = ReadPhrase();
    cout << "String length : " << S1.length();
    cout << "\nSmall letter count : " << SmallLetterCount(S1);
    cout << "\nCapital letter count : " << CapitalLetterCount(S1);
    return 0;
}
