#include <iostream>
using namespace std;

void ReadNumber(int &Number, int &Power)
{
    cout << "Enter the number\n";
    cin >> Number;
    cout << "Enter the power\n";
    cin >> Power;
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
    cout << "Result  is : " << Number << endl;
}

int main()
{
    int Num, Pow;
    ReadNumber(Num, Pow);
    PrintResult(Power(Num, Pow));
    return 0;
}