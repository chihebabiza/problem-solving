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

void LowerFirstLetterOfWord(string &phrase)
{
    bool isFirstLetter = true;
    for (short i = 0; i < phrase.length(); i++)
    {
        if (isFirstLetter && phrase[i] != ' ')
            phrase[i] = tolower(phrase[i]);
        isFirstLetter = (phrase[i] == ' ' ? true : false);
    }
}

int main()
{
    string phrase = ReadString("Enter a string : ");
    LowerFirstLetterOfWord(phrase);
    cout << phrase << endl;
    return 0;
}
