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

short LetterCountInString(string phrase, char letter)
{
    short counter = 0;
    for (short i = 0; i < phrase.length(); i++)
    {
        if (phrase[i] == letter)
            counter++;
    }
    return counter;
}

int main()
{
    string phrase = ReadPhrase();
    char letter = ReadCharacter();
    cout << "Letter \'" << letter << "\' count : " << LetterCountInString(phrase, letter);
    return 0;
}