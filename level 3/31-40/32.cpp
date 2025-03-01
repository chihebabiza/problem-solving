#include <iostream>
using namespace std;

char ReadCharacter()
{
    cout << "Enter a letter : ";
    char letter;
    cin >> letter;
    return letter;
}

bool isVowel(char letter)
{
    const string vowels = "aeiouAEIOU";

    for (char v : vowels)
    {
        if (v == letter)
            return true;
    }
    return false;
}

int main()
{
    char letter = ReadCharacter();
    if (isVowel(letter))
        cout << "YES \'" << letter << "\' is a vowel";
    else
        cout << "No \'" << letter << "\' isn't a vowel";
    return 0;
}