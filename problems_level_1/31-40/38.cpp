#include <iostream>
using namespace std;

int ReadNumber()
{
    int number;
    cout << "Enter a number\n";
    cin >> number;
    return number;
}

bool CheckPrime(int number)
{
    if (number == 1)
        return false;

    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

void PrintResult()
{
    if (CheckPrime(ReadNumber()))
        cout << "Prime" << endl;
    else
        cout << "Not prime" << endl;
}

int main()
{
    PrintResult();
}