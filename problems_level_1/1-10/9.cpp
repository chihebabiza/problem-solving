// wring code

#include <iostream>
using namespace std;

int *ReadNumbers()
{
    int Numbers[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the number " << i + 1 << "\n";
        cin >> Numbers[i];
    }
    return Numbers;
}

int CalculateSum(int Numbers[])
{
    int Sum = 0;
    for (int i = 0; i < 3; i++)
    {
        Sum += Numbers[i];
    }
    return Sum;
}

void PrintResults(int Numbers[])
{
    int sum = CalculateSum(Numbers);
    cout << "The sum is " << sum << endl;
}

int main()
{
    PrintResults(ReadNumbers());
    return 0;
}