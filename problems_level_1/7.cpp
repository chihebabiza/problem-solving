#include <iostream>
using namespace std;

int ReadNumber()
{
    int number;
    cout << "Enter a number\n";
    cin >> number;
    return number;
}

float CalculateHalfOfNumber(int Number)
{
    return (float)Number / 2;
}

void PrintHalfOfNumber(int Number)
{
    cout << "the half is : " << CalculateHalfOfNumber(Number) << endl;
}

int main()
{
    PrintHalfOfNumber(ReadNumber());
}