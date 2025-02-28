#include <iostream>
using namespace std;

int ReadNumber()
{
    int number;
    cout << "Enter a number (-99 to stop): ";
    cin >> number;
    return number;
}

int SumNumbers()
{
    int sum = 0;
    while (true)
    {
        int number = ReadNumber();
        if (number == -99)
            break;
        sum += number;
    }
    return sum;
}

void PrintResult(int result)
{
    cout << "Sum is " << result << endl;
}

int main()
{
    PrintResult(SumNumbers());
    return 0;
}