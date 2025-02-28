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

void PrintFirstLetterOfWord(string phrase)
{
    bool isFirstLetter = true;
    for (short i = 0; i < phrase.length(); i++)
    {
        if (isFirstLetter && phrase[i] != ' ')
            cout << phrase[i] << "\t";
        isFirstLetter = (phrase[i] == ' ' ? true : false);
    }
}

int main()
{
    PrintFirstLetterOfWord(ReadString("Enter a string : "));
    return 0;
}
