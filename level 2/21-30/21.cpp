#include <iostream>
using namespace std;

char RandomCharacter(int from, int to)
{
    return char(rand() % (to - from + 1) + from);
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

string GenerateKey()
{
    string key = "";
    for (int i = 1; i <= 16; i++)
    {
        key += RandomCharacter(65, 90);
        if (i % 4 == 0)
            key += '-';
    }
    return key;
}

void PrintKeys(short KeyNumber)
{
    for (int i = 0; i < KeyNumber; i++)
    {
        cout << "key [" << i << "] : " << GenerateKey() << "\n";
    }
}

int main()
{
    srand((unsigned)time(NULL));
    PrintKeys(ReadPositiveNumber("Enter the number of keys"));
    return 0;
}
