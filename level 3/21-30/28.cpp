#include <iostream>
using namespace std;

char ReadCharacter()
{
    cout << "Enter a character\n";
    char letter;
    cin >> letter;
    return letter;
}

char InvertCase(char letter)
{
    return isupper(letter) ? tolower(letter) : toupper(letter);
}

int main()
{
    char letter = ReadCharacter();
    cout << "After inverting the state : " << InvertCase(letter);
    return 0;
}