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

void PrintResult(int number)
{
    if (IsPerfect(number))
        cout << "Perfect Number" << endl;
    else
        cout << "Not Perfect Number" << endl;
}

int main()
{
    PrintResult(ReadPositiveNumber("Enter a number"));
    return 0;
}