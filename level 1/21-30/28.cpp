#include <iostream>
using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Enter N\n";
    cin >> Number;
    return Number;
}

bool CheckOddNumber(int Number)
{
    return Number % 2 != 0;
}

int CalculateSumOddNumbersInRange(int Range)
{
    int Sum = 0;
    for (int i = 0; i <= Range; i++)
    {
        if (CheckOddNumber(i))
            Sum += i;
    }
    return Sum;
}

void PrintResult(int Sum)
{
    cout << "\nSum is " << Sum << endl;
}

int main()
{
    PrintResult(CalculateSumOddNumbersInRange(ReadNumber()));
    return 0;
}