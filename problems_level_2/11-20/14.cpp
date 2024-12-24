#include <iostream>
using namespace std;

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

void PrintInvertedPattern(int number)
{
    cout << "\n";
    for (int i = number; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(i + 64);
        }
        cout << endl;
    }
}

int main()
{
    PrintInvertedPattern(ReadPositiveNumber("Enter a positive number"));
    return 0;
}