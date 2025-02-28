#include <iostream>
using namespace std;

string ReadPhrase()
{
    cout << "Enter a phrase: ";
    string phrase;
    getline(cin, phrase); // Read the full phrase
    return phrase;
}

char InvertCharacterCase(char letter)
{
    return isupper(letter) ? tolower(letter) : toupper(letter);
}

string InvertPhraseCase(string phrase)
{
    for (short i = 0; i < phrase.length(); i++) // Added 'i++'
    {
        phrase[i] = InvertCharacterCase(phrase[i]);
    }
    return phrase;
}

int main()
{
    string phrase = ReadPhrase();
    cout << "Inverted phrase: \n"
         << InvertPhraseCase(phrase) << endl;
    return 0;
}
