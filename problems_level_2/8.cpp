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

int FrequencyDigit(int number, short digit)
{
    int r = 0, frequency = 0;
    while (number != 0)
    {
        r = number % 10;
        number /= 10;
        if (r == digit)
            frequency++;
    }
    return frequency;
}

void PrintResult(int number, int digit)
{
    cout << "Digit " << digit << " Frequency is " << FrequencyDigit(number, digit) << endl;
}
int main()
{
    int number = ReadPositiveNumber("Enter a number");
    int digit = ReadPositiveNumber("Enter a digit");
    PrintResult(number, digit);

    return 0;
}