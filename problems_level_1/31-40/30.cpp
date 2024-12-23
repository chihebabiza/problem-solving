#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message << "\n";
        cin >> Number;
    } while (Number < 0);
    return Number;
}

int Factorial(int Number)
{
    int Factorial = 1;
    if (Number == 0 || Number == 1)
        Factorial = 1;
    else
    {
        for (int i = 2; i <= Number; i++)
        {
            Factorial *= i;
        }
    }
    return Factorial;
}

void PrintValue(int Value)
{
    cout << "\n Factorial is " << Value << endl;
}

int main()
{
    PrintValue(Factorial(ReadPositiveNumber("Enter a positive number")));
}