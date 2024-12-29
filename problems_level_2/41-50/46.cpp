#include <iostream>
using namespace std;

int ReadNumber(string message)
{
    int number;
    cout << message << "\n";
    cin >> number;
    return number;
}

int abs(int value)
{
    if (value < 0)
        return -value;
    else
        return value;
}

void PrintResult(int number)
{
    cout << "|" << number << "| = " << abs(number) << endl;
}

int main()
{
    PrintResult(ReadNumber("Enter a number"));
    return 0;
}