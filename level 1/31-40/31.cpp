#include <iostream>
using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Enter a number\n";
    cin >> Number;
    return Number;
}

int Power(int Number, int Power)
{
    int Result = Number;
    for (int i = 1; i < Power; i++)
    {
        Result *= Number;
    }
    return Result;
}

void PrintResult(int Number)
{
    cout << "Power 2 is : " << Power(Number, 2) << endl;
    cout << "Power 3 is : " << Power(Number, 3) << endl;
    cout << "Power 4 is : " << Power(Number, 4) << endl;
}

int main()
{
    PrintResult(ReadNumber());
}