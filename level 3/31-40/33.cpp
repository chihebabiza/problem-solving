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

short VowelsCount(string S1)
{
    short counter = 0;
    for (short i = 0; i < S1.length(); i++)
    {
        if (isVowel(S1[i]))
            counter++;
    }
    return counter;
}

int main()
{
    string S1 = ReadString();
    cout << "Number of vowels are : " << VowelsCount(S1);
    return 0;
}