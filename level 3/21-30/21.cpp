#include <iostream>
using namespace std;

void PrintFibonacci(short number)
{
    int prev1 = 0, prev2 = 1, febNumber = 0;
    cout << "1\t";
    for (short i = 1; i < number; i++)
    {
        febNumber = prev1 + prev2;
        cout << febNumber << "\t";
        prev1 = prev2;
        prev2 = febNumber;
    }
}

int main()
{
    PrintFibonacci(10);
    return 0;
}