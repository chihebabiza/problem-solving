#include <iostream>
using namespace std;

string ReadText(string message)
{
    string text;
    do
    {
        cout << message << "\n";
        cin >> text;
    } while (text == "");
    return text;
}

string EncryptText(string text, short EncryptionKey)
{
    for (int i = 0; i < text.length(); i++)
    {
        text[i] += EncryptionKey;
    }
    return text;
}

string DecryptText(string text, short EncryptionKey)
{
    for (int i = 0; i < text.length(); i++)
    {
        text[i] -= EncryptionKey;
    }
    return text;
}

void PrintResult(string text)
{
    string EncryptedText = EncryptText(text, 2);
    cout << "\nText before encryption " << text << "\n";
    cout << "Text after encryption " << EncryptedText << "\n";
    cout << "Text after decryption " << DecryptText(EncryptedText, 2) << endl;
}

int main()
{
    PrintResult(ReadText("Enter a text (not empty)"));
    return 0;
}