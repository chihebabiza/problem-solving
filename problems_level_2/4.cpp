#include <iostream>
using namespace std;

int ReadPositiveNumber(string message)
{
    int number;
    cout << message << "\n";
    cin >> number;
    return number;
}

bool IsPerfect(int number)
{
    int sum = 0;
    for (int i = 1; i <= (number / 2); i++)
    {
        if (number % i == 0)
            sum += i;
    }
    return number == sum;
}

void PrintPerfectNumber1ToN(int number)
{
    for (int i = 1; i <= number; i++)
    {
        if (IsPerfect(i))
            cout << i << "\t";
    }
    cout << endl;
}

int main()
{
    PrintPerfectNumber1ToN(ReadPositiveNumber("Enter a number"));
    return 0;
}