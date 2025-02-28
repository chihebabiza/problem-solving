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

void PrintResult(int number)
{
    cout << "Reverse of " << number << "is : " << Reverse(number) << endl;
}

int main()
{
    PrintResult(ReadPositiveNumber("Enter a positive number"));
    return 0;
}