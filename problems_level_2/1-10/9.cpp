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

void PrintResult(int number)
{
    for (int i = 0; i < 10; i++)
    {
        short frequency = FrequencyDigit(number, i);
        if (frequency != 0)
            cout << "Digit " << i << " Frequency is " << FrequencyDigit(number, i) << endl;
    }
}

int main()
{
    PrintResult(ReadPositiveNumber("Enter a number"));
    return 0;
}