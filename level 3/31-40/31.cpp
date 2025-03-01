#include <iostream>
using namespace std;

string ReadPhrase()
{
    cout << "Enter a string : ";
    string phrase;
    getline(cin, phrase);
    return phrase;
}

char ReadCharacter()
{
    cout << "Enter a character : ";
    char letter;
    cin >> letter;
    return letter;
}

char InvertCharacterCase(char letter)
{
    return isupper(letter) ? tolower(letter) : toupper(letter);
}

short LetterCountInString(string phrase, char letter, bool matchCase = true)
{
    short counter = 0;
    for (short i = 0; i < phrase.length(); i++)
    {
        if (matchCase)
        {
            if (phrase[i] == letter || phrase[i] == InvertCharacterCase(letter))
                counter++;
        }
        else if (phrase[i] == letter)
            counter++;
    }
    return counter;
}

int main()
{
    string phrase = ReadPhrase();
    char letter = ReadCharacter();
    cout << "\nLetter \'" << letter << "\' count : " << LetterCountInString(phrase, letter, false);
    cout << "\nLetter \'" << letter << "\' or \'" << InvertCharacterCase(letter) << "\' count : " << LetterCountInString(phrase, letter);
    return 0;
}