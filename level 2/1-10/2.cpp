#include <iostream>
using namespace std;

int ReadPositiveNumber(string message)
{
    int number;
    cout << message << "\n";
    cin >> number;
    return number;
}

bool IsPrime(int number)
{
    if (number == 1)
        return false;
    else if (number == 2)
        return true;
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

void PrintPrime(int number)
{
    for (int i = 2; i <= number; i++)
    {
        if (IsPrime(i))
            cout << i << "\t";
    }
    cout << endl;
}

int main()
{
    PrintPrime(ReadPositiveNumber("Enter a number?"));
    return 0;
}