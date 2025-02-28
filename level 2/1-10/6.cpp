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

int SumOfDigit(int number)
{
    int r = 0, sum = 0;
    while (number != 0)
    {
        r = number % 10;
        sum += r;
        number /= 10;
    }
    return sum;
}

void PrintResult(int sum)
{
    cout << "Sum of Digits are " << sum << endl;
}

int main()
{
    PrintResult(SumOfDigit(ReadPositiveNumber("Enter a positive number")));
    return 0;
}