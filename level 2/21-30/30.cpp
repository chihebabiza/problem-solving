#include <iostream>
using namespace std;

enum enCharType
{
    SmallLetter = 1,
    CapitalLetter = 2,
    SpecialLetter = 3,
    Digit = 4
};

int RandomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

int ReadPositiveNumber(string message)
{
    int number;
    do
    {
        cout << message << "\n";
        cin >> number;
    } while (number < 0);
    return number;
}

char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {
    case enCharType::SmallLetter:
        return char(RandomNumber(97, 122));

    case enCharType::CapitalLetter:
        return char(RandomNumber(65, 90));

    case enCharType::SpecialLetter:
        return char(RandomNumber(33, 47));

    case enCharType::Digit:
        return char(RandomNumber(48, 57));
    default:
        return '?';
    }
}

string GenerateKey(short breakIndex, int length)
{
    string key = "";
    for (int i = 1; i <= length; i++)
    {
        key += GetRandomCharacter(CapitalLetter);
        if (i != length && i % breakIndex == 0)
            key += '-';
    }
    return key;
}

void StorKeys(string keys[100], int &size)
{
    size = ReadPositiveNumber("Enter size of array");
    for (int i = 0; i < size; i++)
    {
        keys[i] = GenerateKey(4, 16);
    }
}

void PrintKeys(string keys[100], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Array [" << i << "] : " << keys[i] << "\n";
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));
    string keys[100];
    int size = 0;
    StorKeys(keys, size);
    PrintKeys(keys, size);
    return 0;
}
