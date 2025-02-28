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

string UpperPhrase(string &phrase)
{
    for (short i = 0; i < phrase.length(); i++)
    {
        if (phrase[i] != ' ')
            phrase[i] = toupper(phrase[i]);
    }
    return phrase;
}

string LowerPhrase(string &phrase)
{
    for (short i = 0; i < phrase.length(); i++)
    {
        if (phrase[i] != ' ')
            phrase[i] = tolower(phrase[i]);
    }
    return phrase;
}

int main()
{
    string phrase = ReadString("Enter a string : ");
    cout << phrase << endl;
    cout << "Upper phrase : " << UpperPhrase(phrase) << endl;
    cout << "Lower phrase : " << LowerPhrase(phrase) << endl;
    return 0;
}
