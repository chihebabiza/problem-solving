#include <iostream>
using namespace std;

string ReadString()
{
    cout << "Enter a string : ";
    string S1;
    getline(cin, S1);
    return S1;
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

void VowelsPrint(string S1)
{
    for (short i = 0; i < S1.length(); i++)
    {
        if (isVowel(S1[i]))
            cout << S1[i] << "\t";
    }
}

int main()
{
    VowelsPrint(ReadString());
    return 0;
}