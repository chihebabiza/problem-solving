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

int Reverse(int number)
{
    int r = 0, n = 0;
    while (number != 0)
    {
        r = number % 10;
        number /= 10;
        n = n * 10 + r;
    }
    return n;
}

bool Palindrom(int number)
{
    return number == Reverse(number);
}

void PrintResult(int number)
{
    if (Palindrom(number))
        cout << number << " is Palindrom" << endl;
    else
        cout << number << " is not Palindrom" << endl;
}

int main()
{
    PrintResult(ReadPositiveNumber("Enter a positive number"));
    return 0;
}