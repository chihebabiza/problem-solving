#include <iostream>
#include <string>

using namespace std;

string ReadString(string message)
{
    cout << message;
    string phrase;
    getline(cin, phrase);
    return phrase;
}

void UpperFirstLetterOfWord(string &phrase)
{
    bool isFirstLetter = true;
    for (short i = 0; i < phrase.length(); i++)
    {
        if (isFirstLetter && phrase[i] != ' ')
            phrase[i] = toupper(phrase[i]);
        isFirstLetter = (phrase[i] == ' ' ? true : false);
    }
}

int main()
{
    string phrase = ReadString("Enter a string : ");
    UpperFirstLetterOfWord(phrase);
    cout << phrase << endl;
    return 0;
}
