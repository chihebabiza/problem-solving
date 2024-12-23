#include <iostream>
using namespace std;

int ReadAge()
{
    int Age;
    cout << "Enter your age\n";
    cin >> Age;
    return Age;
}

bool ValidateNumberInRange(int Num, int From, int To)
{
    return (Num >= From && Num <= To);
}

int ReadAgeUntil(int From, int To)
{
    int Age = 0;
    do
    {
        Age = ReadAge();
    } while (!ValidateNumberInRange(Age, From, To));

    return Age;
}

void PrintResult(int Age)
{
    cout << Age << " is Valide Age" << endl;
}

int main()
{
    PrintResult(ReadAgeUntil(18, 45));

    return 0;
}